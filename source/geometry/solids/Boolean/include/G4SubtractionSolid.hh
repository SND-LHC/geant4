// This code implementation is the intellectual property of
// the GEANT4 collaboration.
//
// By copying, distributing or modifying the Program (or any work
// based on the Program) you indicate your acceptance of this statement,
// and all its terms.
//
// $Id: G4SubtractionSolid.hh,v 1.4 2000/11/02 12:25:46 gcosmo Exp $
// GEANT4 tag $Name: geant4-03-00 $
//
//
// class G4SubtractionSolid
//
// Class description:
//
// Class for description of subtraction of two CSG solids: A - B.

// History: 
//
// 14.10.98 V.Grichine - first implementation.


#ifndef G4SUBTRACTIONSOLID_HH
#define G4SUBTRACTIONSOLID_HH

#include "G4BooleanSolid.hh"
#include "G4VSolid.hh"

#include "G4RotationMatrix.hh"
#include "G4ThreeVector.hh"
#include "G4Transform3D.hh"
#include "G4AffineTransform.hh"


class G4SubtractionSolid : public G4BooleanSolid
{
  public:  // with description

    G4SubtractionSolid(  const G4String& pName,
                               G4VSolid* pSolidA ,
                               G4VSolid* pSolidB   ) ;

    G4SubtractionSolid(  const G4String& pName,
                               G4VSolid* pSolidA ,
                               G4VSolid* pSolidB ,
                               G4RotationMatrix* rotMatrix,
                         const G4ThreeVector& transVector   ) ;

    G4SubtractionSolid(  const G4String& pName,
                               G4VSolid* pSolidA ,
                               G4VSolid* pSolidB ,
                         const G4Transform3D& transform   ) ;

    virtual ~G4SubtractionSolid() ;

    virtual G4GeometryType  GetEntityType() const ;

  public:  // without description

    G4bool CalculateExtent( const EAxis pAxis,
			    const G4VoxelLimits& pVoxelLimit,
			    const G4AffineTransform& pTransform,
			    G4double& pMin, G4double& pMax) const ;
       
    EInside Inside( const G4ThreeVector& p ) const ;

    G4ThreeVector SurfaceNormal( const G4ThreeVector& p ) const ;

    G4double DistanceToIn( const G4ThreeVector& p,
                           const G4ThreeVector& v  ) const ;

    G4double DistanceToIn( const G4ThreeVector& p) const ;

    G4double DistanceToOut( const G4ThreeVector& p,
			    const G4ThreeVector& v,
			    const G4bool calcNorm=false,
			    G4bool *validNorm=0,
			    G4ThreeVector *n=0      ) const ;

    G4double DistanceToOut( const G4ThreeVector& p ) const ;


    void ComputeDimensions( G4VPVParameterisation* p,
	                    const G4int n,
                            const G4VPhysicalVolume* pRep ) ;
                                   
    void DescribeYourselfTo ( G4VGraphicsScene& scene ) const ;
    G4Polyhedron* CreatePolyhedron () const ;
    G4NURBS*      CreateNURBS      () const ;

};

#endif
