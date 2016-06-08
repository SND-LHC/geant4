// This code implementation is the intellectual property of
// the GEANT4 collaboration.
//
// By copying, distributing or modifying the Program (or any work
// based on the Program) you indicate your acceptance of this statement,
// and all its terms.
//
// $Id: G4UIsession.cc,v 1.3 1999/12/15 17:52:03 gcosmo Exp $
// GEANT4 tag $Name: geant4-03-00 $
//
// 
// ---------------------------------------------------------------------

#include "G4UIsession.hh"

G4UIsession::G4UIsession() {;}

G4UIsession::~G4UIsession() {;}

G4UIsession * G4UIsession::SessionStart() { return NULL; }

void G4UIsession::PauseSessionStart(G4String Prompt) {;}

G4int G4UIsession::ReceiveG4cout(G4String coutString)
{
  G4std::cout <<  coutString << G4std::flush;
  return 0;
}

G4int G4UIsession::ReceiveG4cerr(G4String cerrString)
{
  G4std::cerr <<  cerrString << G4std::flush;
  return 0;
}                                                                       