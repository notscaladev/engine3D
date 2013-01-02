// fireblast.utils.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include "fireblast.utils.h"


// This is an example of an exported variable
FIREBLASTUTILS_API int nfireblastutils=0;

// This is an example of an exported function.
FIREBLASTUTILS_API int fnfireblastutils(void)
{
	return 42;
}

// This is the constructor of a class that has been exported.
// see fireblast.utils.h for the class definition
Cfireblastutils::Cfireblastutils()
{
	return;
}
