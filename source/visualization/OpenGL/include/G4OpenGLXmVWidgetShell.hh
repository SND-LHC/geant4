// This code implementation is the intellectual property of
// the GEANT4 collaboration.
//
// By copying, distributing or modifying the Program (or any work
// based on the Program) you indicate your acceptance of this statement,
// and all its terms.
//
// $Id: G4OpenGLXmVWidgetShell.hh,v 1.3 1999/12/15 14:54:06 gunter Exp $
// GEANT4 tag $Name: geant4-03-00 $
//
// 
//Base class for all Motif window widgets (shells)

#ifdef G4VIS_BUILD_OPENGLXM_DRIVER

#ifndef G4OPENGLXMVWIDGETSHELL_HH
#define G4OPENGLXMVWIDGETSHELL_HH

#include "G4OpenGLXmVWidgetObject.hh"

class G4OpenGLXmVWidgetContainer;

class G4OpenGLXmVWidgetShell : public G4OpenGLXmVWidgetObject
{

public:
  G4OpenGLXmVWidgetShell();   //constructor
  ~G4OpenGLXmVWidgetShell();  //destructor

  virtual Widget* GetPointerToWidget() = 0;
  virtual void AddChild (G4OpenGLXmVWidgetContainer*) = 0;
  virtual void Realize () = 0;

private:
};

#endif

#endif