#pragma once

#ifdef DLL_EXPORTS
#define DLL_API __declspec(dllexport)
#else
#define DLL_API __declspec(dllimport)
#endif

DLL_API int Sum(int a, int b);
DLL_API int Diff(int a, int b);
DLL_API int Max(int a, int b);
