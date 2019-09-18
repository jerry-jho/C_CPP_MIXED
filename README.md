# C_CPP_MIXED
Mixed programming of C/C++ : calling C++ DLL in various platform

# Windows, MINGW_GCC

1. Build C++ DLL
  
  g++ -shared -Wl,--kill-at,--output-def,my.def -o my.dll dllmain.cpp -DBUILD_DLL

2. Build C EXE
  
  gcc use_dll.c -o use_dll.exe my.dll
  
3. Execute
  
  ./use_dll.exe
  

# Linux/macOS, gcc

1. Build C++ DLL
  
  g++ -shared -fPIC -o my.so dllmain.cpp -DBUILD_DLL

2. Build C EXE
  
  gcc use_dll.c -o use_dll.exe my.so
  
3. Execute
  
  LD_LIBRARY_PATH=. ./use_dll.exe
