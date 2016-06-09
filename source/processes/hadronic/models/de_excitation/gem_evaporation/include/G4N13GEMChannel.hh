//
// ********************************************************************
// * DISCLAIMER                                                       *
// *                                                                  *
// * The following disclaimer summarizes all the specific disclaimers *
// * of contributors to this software. The specific disclaimers,which *
// * govern, are listed with their locations in:                      *
// *   http://cern.ch/geant4/license                                  *
// *                                                                  *
// * Neither the authors of this software system, nor their employing *
// * institutes,nor the agencies providing financial support for this *
// * work  make  any representation or  warranty, express or implied, *
// * regarding  this  software system or assume any liability for its *
// * use.                                                             *
// *                                                                  *
// * This  code  implementation is the  intellectual property  of the *
// * GEANT4 collaboration.                                            *
// * By copying,  distributing  or modifying the Program (or any work *
// * based  on  the Program)  you indicate  your  acceptance of  this *
// * statement, and all its terms.                                    *
// ********************************************************************
//
//
// $Id: G4N13GEMChannel.hh,v 1.1 2003/08/26 18:42:37 lara Exp $
// GEANT4 tag $Name: geant4-06-00-patch-01 $
//
// Hadronic Process: Nuclear De-excitations
// by V. Lara (Sept. 2001)
//


#ifndef G4N13GEMChannel_h
#define G4N13GEMChannel_h 1

#include "G4GEMChannel.hh"
#include "G4N13GEMCoulombBarrier.hh"
#include "G4N13GEMProbability.hh"

class G4N13GEMChannel : public G4GEMChannel
{
public:
  // only available constructor
  G4N13GEMChannel() : G4GEMChannel(13,7,"N13",
				   &theEvaporationProbability,
				   &theCoulombBarrier)
  {
    theEvaporationProbability.SetCoulomBarrier(&theCoulombBarrier);
  }
  
  // destructor
  ~G4N13GEMChannel() {};
  
private:
  const G4N13GEMChannel & operator=(const G4N13GEMChannel & right);  
    
  G4N13GEMChannel(const G4N13GEMChannel & right);
  
public:
  G4bool operator==(const G4N13GEMChannel & right) const;
  G4bool operator!=(const G4N13GEMChannel & right) const;
    
private:
  
  G4N13GEMCoulombBarrier theCoulombBarrier;
	
  G4N13GEMProbability theEvaporationProbability;
  
};
#endif