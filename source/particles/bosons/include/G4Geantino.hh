// This code implementation is the intellectual property of
// the GEANT4 collaboration.
//
// By copying, distributing or modifying the Program (or any work
// based on the Program) you indicate your acceptance of this statement,
// and all its terms.
//
// $Id: G4Geantino.hh,v 1.3 1999/12/15 14:50:52 gunter Exp $
// GEANT4 tag $Name: geant4-03-00 $
//
// 
// ------------------------------------------------------------
//      GEANT 4 class header file
//
//      For information related to this code contact:
//      CERN, CN Division, ASD group
//      History: first implementation, based on object model of
//      4-th April 1996, G.Cosmo
// ****************************************************************
//  Added particle definitions, H.Kurashige, 19 April 1996
//  Revised, G.Cosmo, 6 June 1996
//  Added not static GetEnergyCuts() and GetLengthCuts(), G.Cosmo, 11 July 1996
// ----------------------------------------------------------------

// Each class inheriting from G4VBoson
// corresponds to a particle type; one and only one
// instance for each class is guaranteed.

#ifndef G4Geantino_h
#define G4Geantino_h 1

#include "globals.hh"
#include "G4ios.hh"
#include "G4VBoson.hh"

// ######################################################################
// ###                         GEANTINO                               ###
// ######################################################################

class G4Geantino : public G4VBoson
{
 private:
   static G4Geantino theGeantino;
   static G4double  theGeantinoLengthCut;
   static G4double* theGeantinoKineticEnergyCuts;

 private:
   G4Geantino(
       const G4String&     aName,        G4double            mass,
       G4double            width,        G4double            charge,   
       G4int               iSpin,        G4int               iParity,    
       G4int               iConjugation, G4int               iIsospin,   
       G4int               iIsospin3,    G4int               gParity,
       const G4String&     pType,        G4int               lepton,      
       G4int               baryon,       G4int               encoding,
       G4bool              stable,       G4double            lifetime,
       G4DecayTable        *decaytable
   );

 public:
   virtual ~G4Geantino(){}
 
   static G4Geantino* GeantinoDefinition();
   static G4Geantino* Geantino();
   static G4double  GetCuts() {return theGeantinoLengthCut;}   
   static G4double* GetCutsInEnergy() {return theGeantinoKineticEnergyCuts;};

   virtual void SetCuts(G4double aCut); 
};
   
inline G4Geantino* G4Geantino::Geantino()
{  return &theGeantino; }

#endif










