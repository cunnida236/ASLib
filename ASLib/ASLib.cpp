// ASLib.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include "ASLib.h"


// This is an example of an exported variable
ASLIB_API int nASLib=0;

// This is an example of an exported function.
ASLIB_API int fnASLib(void)
{
	return 42;
}

// This is the constructor of a class that has been exported.
// see ASLib.h for the class definition
CASLib::CASLib()
{
	return;
}
