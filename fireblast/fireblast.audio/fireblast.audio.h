// The following ifdef block is the standard way of creating macros which make exporting 
// from a DLL simpler. All files within this DLL are compiled with the FIREBLASTAUDIO_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see 
// FIREBLASTAUDIO_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef FIREBLASTAUDIO_EXPORTS
#define FIREBLASTAUDIO_API __declspec(dllexport)
#else
#define FIREBLASTAUDIO_API __declspec(dllimport)
#endif

// This class is exported from the fireblast.audio.dll
class FIREBLASTAUDIO_API Cfireblastaudio {
public:
	Cfireblastaudio(void);
	// TODO: add your methods here.
};

extern FIREBLASTAUDIO_API int nfireblastaudio;

FIREBLASTAUDIO_API int fnfireblastaudio(void);
