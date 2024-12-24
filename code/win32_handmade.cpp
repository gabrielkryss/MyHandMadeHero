#include <Windows.h>

int WINAPI 
WinMain(HINSTANCE hInstance, 
  HINSTANCE hPrevInstance,
  PSTR lpCmdLine, 
  int nCmdShow)
{
  MessageBoxA(
    0,
    "This is Handmade Hero",
    "Handmade Hero",
    MB_OK | MB_ICONINFORMATION
  );  

  return 0;
}
