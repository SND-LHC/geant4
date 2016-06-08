// This code implementation is the intellectual property of
// the GEANT4 collaboration.
//
// By copying, distributing or modifying the Program (or any work
// based on the Program) you indicate your acceptance of this statement,
// and all its terms.
//
// $Id: G4StepPoint.cc,v 1.3 2000/02/16 16:10:06 kurasige Exp $
// GEANT4 tag $Name: geant4-03-00 $
//
//
//---------------------------------------------------------------
//
//  G4StepPoint.cc
//
//  Description:
//    This class represents information associated with the
//    each end of a Step like the space/time data of the
//    particle.
//
// Contact:
//   Questions and comments to this code should be sent to
//     Katsuya Amako  (e-mail: Katsuya.Amako@kek.jp)
//     Takashi Sasaki (e-mail: Takashi.Sasaki@kek.jp)
//
// ---------------------------------------------------------------

#include "G4StepPoint.hh"

//////////////////////////
G4StepPoint::G4StepPoint():
//////////////////////////
  fpTouchable(0),fpMaterial(0),fpProcessDefinedStep(0)  
{

}

//////////////////////////
G4StepPoint::G4StepPoint(const G4StepPoint &right):
//////////////////////////
  fPosition(right.fPosition),
  fGlobalTime(right.fGlobalTime),
  fLocalTime(right.fLocalTime),
  fProperTime(right.fProperTime),
  fMomentumDirection(right.fMomentumDirection),
  fKineticEnergy(right.fKineticEnergy),
  fpTouchable(right.fpTouchable),
  fpMaterial(right.fpMaterial),
  fSafety(right.fSafety),
  fPolarization(right.fPolarization),
  fStepStatus(right.fStepStatus),
  fpProcessDefinedStep(right.fpProcessDefinedStep),
  fMass(right.fMass),
  fCharge(right.fCharge),
  fWeight(right.fWeight)
{}


//////////////////////////
G4StepPoint & G4StepPoint::operator=(const G4StepPoint &right)
//////////////////////////
{
  if (this != &right) {
    fPosition = right.fPosition;
    fGlobalTime = right.fGlobalTime;
    fLocalTime = right.fLocalTime;
    fProperTime = right.fProperTime;
    fMomentumDirection = right.fMomentumDirection;
    fKineticEnergy = right.fKineticEnergy;
    fpTouchable = right.fpTouchable;
    fpMaterial = right.fpMaterial;
    fSafety = right.fSafety;
    fPolarization = right.fPolarization;
    fStepStatus = right.fStepStatus;
    fpProcessDefinedStep = right.fpProcessDefinedStep;
    fMass = right.fMass;
    fCharge = right.fCharge;
    fWeight = right.fWeight;
  }
  return *this;
}



