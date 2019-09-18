#ifndef _DLLMAIN_
#define _DLLMAIN_

#ifdef __MINGW32__
#define OS_WIN
#endif

#ifdef _MSC_VER
#define OS_WIN
#endif

#ifdef OS_WIN
#ifdef BUILD_DLL
#define EXPORT __declspec(dllexport)
#else
#define EXPORT __declspec(dllimport)
#endif
#else
#define EXPORT
#endif

typedef void * handle;

#ifdef __cplusplus
extern "C"{
#endif
    EXPORT handle create();
    EXPORT int sum(handle h,int a,int b);
    EXPORT void destroy(handle h);
#ifdef __cplusplus
}
#endif

#endif
