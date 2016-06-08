// This code implementation is the intellectual property of
// the GEANT4 collaboration.
//
// By copying, distributing or modifying the Program (or any work
// based on the Program) you indicate your acceptance of this statement,
// and all its terms.
//
// $Id: voxeldefs.hh,v 1.4 2000/04/20 16:49:49 gcosmo Exp $
// GEANT4 tag $Name: geant4-03-00 $
//
//
//
// Voxel Optimisation Constants

// History:
// 12.02.99 S.Giani made numerical values consistent with Geant3.21
// 13.08.95 P.Kent Created separate file

#ifndef VOXELDEFS_HH
#define VOXELDEFS_HH

#include "globals.hh"

// Hard limit on no. voxel nodes per given header
const G4int kMaxVoxelNodes=1000;  // PK chose 2000, Geant 3.21 used 1000

const G4int kMinVoxelVolumesLevel1=2; // Only begin to make voxels if >=
				      // this no of daughters
const G4int kMinVoxelVolumesLevel2=3; // Only make second level of refinement
				      // if >= this no of volumes in
                                      // 1st level node
const G4int kMinVoxelVolumesLevel3=4; // Only make third level of refinement
				      // if >= this no of volumes in
                                      // 2nd level node
#endif