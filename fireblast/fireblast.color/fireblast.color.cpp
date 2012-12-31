// fireblast.color.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include "fireblast.color.h"


// This is an example of an exported variable
FIREBLASTCOLOR_API int nfireblastcolor=0;

// This is an example of an exported function.
FIREBLASTCOLOR_API int fnfireblastcolor(void)
{
	return 42;
}

// This is the constructor of a class that has been exported.
// see fireblast.color.h for the class definition
Cfireblastcolor::Cfireblastcolor()
{
	return;
}
