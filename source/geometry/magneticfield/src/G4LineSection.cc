// This code implementation is the intellectual property of
// the GEANT4 collaboration.
//
// By copying, distributing or modifying the Program (or any work
// based on the Program) you indicate your acceptance of this statement,
// and all its terms.
//
// $Id: G4LineSection.cc,v 1.4 2000/11/01 15:15:53 gcosmo Exp $
// GEANT4 tag $Name: geant4-03-00 $
//
// typedef double    G4double;  

#include "G4LineSection.hh" 

G4LineSection::G4LineSection( const G4ThreeVector& PntA, 
			      const G4ThreeVector& PntB )
  : EndpointA(PntA), 
    VecAtoB(PntB-PntA)
{ 
  G4double distABsquared = VecAtoB.mag2() ;  
  if ( distABsquared == 0.0)
  {
    G4Exception("Equal points in G4LineSection::G4LineSection: line->point ?") ;
  }
  else
  {
    inverse_square_distAB=1.0 / distABsquared ;
  }
}

G4double G4LineSection::Dist( G4ThreeVector OtherPnt ) const
{
  G4double       dist_sq;  
  G4ThreeVector  VecAZ;
  G4double sq_VecAZ, inner_prod, unit_projection ; 

  VecAZ= OtherPnt - EndpointA;
  sq_VecAZ = VecAZ.mag2();

  inner_prod= VecAtoB.dot( VecAZ );
   
  //  Determine  Projection(AZ on AB) / Length(AB) 
  //
  unit_projection= inner_prod * InvsqDistAB();

  if( (0. <= unit_projection ) && (unit_projection <= 1.0 ) )
  {
     dist_sq= sq_VecAZ -  unit_projection * inner_prod ;
  }
  else
 {
     //  The perpendicular from the point to the line AB meets the line
     //   in a point outside the line segment!
     
     if( unit_projection < 0. ) 
     {
        // A is the closest point
        dist_sq= sq_VecAZ;  
     }
     else
     {
        // B is the closest point

	G4ThreeVector   EndpointB = EndpointA + VecAtoB;
        G4ThreeVector   VecBZ =     OtherPnt - EndpointB;
        dist_sq =  VecBZ.mag2();
     }
  }
  if( dist_sq < 0.0 ) dist_sq = 0.0 ;

  return sqrt(dist_sq) ;  
}

G4double G4LineSection::Distline( const G4ThreeVector& OtherPnt, 
				  const G4ThreeVector& LinePntA, 
				  const G4ThreeVector& LinePntB )
{
  G4LineSection LineAB( LinePntA, LinePntB );  // Line from A to B

  return LineAB.Dist( OtherPnt );
}

