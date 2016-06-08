// This code implementation is the intellectual property of
// the GEANT4 collaboration.
//
// By copying, distributing or modifying the Program (or any work
// based on the Program) you indicate your acceptance of this statement,
// and all its terms.
//
// $Id: G4VRestContinuousProcess.cc,v 1.2 1999/12/15 14:53:44 gunter Exp $
// GEANT4 tag $Name: geant4-03-00 $
//
// 
// --------------------------------------------------------------
//	GEANT 4 class implementation file 
//
//	For information related to this code contact:
//	CERN, CN Division, ASD Group
//	History: first implementation, based on object model of
//	2nd December 1995, G.Cosmo
// --------------------------------------------------------------
//   New Physics scheme           8 Jan. 1997  H.Kurahige
// ------------------------------------------------------------

#include "G4VRestContinuousProcess.hh"
G4VRestContinuousProcess::G4VRestContinuousProcess()
                   :G4VProcess("No Name Discrete Process") 
{
  G4Exception("G4VRestContinuousProcess:: default constructor is called");
}

G4VRestContinuousProcess::G4VRestContinuousProcess(const G4String& aName , G4ProcessType aType)
                  : G4VProcess(aName, aType)
{
}

G4VRestContinuousProcess::~G4VRestContinuousProcess()
{
}

G4VRestContinuousProcess::G4VRestContinuousProcess(G4VRestContinuousProcess& right)
                  : G4VProcess(right)
{
}










