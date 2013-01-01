// The following ifdef block is the standard way of creating macros which make exporting 
// from a DLL simpler. All files within this DLL are compiled with the FIREBLASTPHYSICS_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see 
// FIREBLASTPHYSICS_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef FIREBLASTPHYSICS_EXPORTS
#define FIREBLASTPHYSICS_API __declspec(dllexport)
#else
#define FIREBLASTPHYSICS_API __declspec(dllimport)
#endif

// This class is exported from the fireblast.physics.dll
class FIREBLASTPHYSICS_API Cfireblastphysics {
public:
	Cfireblastphysics(void);
	// TODO: add your methods here.
};

extern FIREBLASTPHYSICS_API int nfireblastphysics;

FIREBLASTPHYSICS_API int fnfireblastphysics(void);
