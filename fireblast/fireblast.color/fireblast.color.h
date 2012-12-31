// The following ifdef block is the standard way of creating macros which make exporting 
// from a DLL simpler. All files within this DLL are compiled with the FIREBLASTCOLOR_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see 
// FIREBLASTCOLOR_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef FIREBLASTCOLOR_EXPORTS
#define FIREBLASTCOLOR_API __declspec(dllexport)
#else
#define FIREBLASTCOLOR_API __declspec(dllimport)
#endif

// This class is exported from the fireblast.color.dll
class FIREBLASTCOLOR_API Cfireblastcolor {
public:
	Cfireblastcolor(void);
	// TODO: add your methods here.
};

extern FIREBLASTCOLOR_API int nfireblastcolor;

FIREBLASTCOLOR_API int fnfireblastcolor(void);
