// fireblast.audio.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include "fireblast.audio.h"


// This is an example of an exported variable
FIREBLASTAUDIO_API int nfireblastaudio=0;

// This is an example of an exported function.
FIREBLASTAUDIO_API int fnfireblastaudio(void)
{
	return 42;
}

// This is the constructor of a class that has been exported.
// see fireblast.audio.h for the class definition
Cfireblastaudio::Cfireblastaudio()
{
	return;
}
