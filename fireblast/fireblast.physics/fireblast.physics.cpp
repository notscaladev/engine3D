// fireblast.physics.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include "fireblast.physics.h"


// This is an example of an exported variable
FIREBLASTPHYSICS_API int nfireblastphysics=0;

// This is an example of an exported function.
FIREBLASTPHYSICS_API int fnfireblastphysics(void)
{
	return 42;
}

// This is the constructor of a class that has been exported.
// see fireblast.physics.h for the class definition
Cfireblastphysics::Cfireblastphysics()
{
	return;
}
