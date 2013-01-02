// The following ifdef block is the standard way of creating macros which make exporting 
// from a DLL simpler. All files within this DLL are compiled with the FIREBLASTUTILS_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see 
// FIREBLASTUTILS_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef FIREBLASTUTILS_EXPORTS
#define FIREBLASTUTILS_API __declspec(dllexport)
#else
#define FIREBLASTUTILS_API __declspec(dllimport)
#endif

// This class is exported from the fireblast.utils.dll
class FIREBLASTUTILS_API Cfireblastutils {
public:
	Cfireblastutils(void);
	// TODO: add your methods here.
};

extern FIREBLASTUTILS_API int nfireblastutils;

FIREBLASTUTILS_API int fnfireblastutils(void);
