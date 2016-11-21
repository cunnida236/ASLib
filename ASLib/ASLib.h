// The following ifdef block is the standard way of creating macros which make exporting 
// from a DLL simpler. All files within this DLL are compiled with the ASLIB_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see 
// ASLIB_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef ASLIB_EXPORTS
#define ASLIB_API __declspec(dllexport)
#else
#define ASLIB_API __declspec(dllimport)
#endif

// This class is exported from the ASLib.dll
class ASLIB_API CASLib {
public:
	CASLib(void);
	// TODO: add your methods here.
};

extern ASLIB_API int nASLib;

ASLIB_API int fnASLib(void);
