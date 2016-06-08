// This code implementation is the intellectual property of
// the RD44 GEANT4 collaboration.
//
// By copying, distributing or modifying the Program (or any work
// based on the Program) you indicate your acceptance of this statement,
// and all its terms.
//
// $Id: G4VFissionBarrier.cc,v 1.3 2000/06/09 11:43:37 larazb Exp $
// GEANT4 tag $Name: geant4-03-00 $
//
// Hadronic Process: Nuclear De-excitations
// by V. Lara (Oct 1998)


#include "G4VFissionBarrier.hh"

G4VFissionBarrier::G4VFissionBarrier(const G4VFissionBarrier & right)
{
  G4Exception("G4VFissionBarrier::copy_constructor meant to not be accessable.");
}


const G4VFissionBarrier & G4VFissionBarrier::operator=(const G4VFissionBarrier & right)
{
 G4Exception("G4VFissionBarrier::operator= meant to not be accessable.");
 return *this;
}

G4bool G4VFissionBarrier::operator==(const G4VFissionBarrier & right) const 
{
 return false;
}

G4bool G4VFissionBarrier::operator!=(const G4VFissionBarrier & right) const 
{
 return true;
}
