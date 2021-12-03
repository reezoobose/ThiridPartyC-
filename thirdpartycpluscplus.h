// The following ifdef block is the standard way of creating macros which make exporting
// from a DLL simpler. All files within this DLL are compiled with the THIRDPARTYCPLUSCPLUS_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see
// THIRDPARTYCPLUSCPLUS_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef THIRDPARTYCPLUSCPLUS_EXPORTS
#define THIRDPARTYCPLUSCPLUS_API __declspec(dllexport)
#else
#define THIRDPARTYCPLUSCPLUS_API __declspec(dllimport)
#endif

// This class is exported from the dll
class THIRDPARTYCPLUSCPLUS_API Cthirdpartycpluscplus {
public:
	Cthirdpartycpluscplus(void);
	// TODO: add your methods here.
};

extern THIRDPARTYCPLUSCPLUS_API int nthirdpartycpluscplus;

THIRDPARTYCPLUSCPLUS_API int fnthirdpartycpluscplus(void);

extern "C" THIRDPARTYCPLUSCPLUS_API int add(int a, int b);
extern "C" THIRDPARTYCPLUSCPLUS_API int multiply(int a, int b);
extern "C" THIRDPARTYCPLUSCPLUS_API const char* sayHello(void);