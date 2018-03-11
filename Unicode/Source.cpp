#include <windows.h>

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance,
	PSTR szCmdLine, int iCmdShow)
{
	char a[] = "normal-char";
	char a_cap[] = "Normal";
	MessageBoxA(NULL, a, a_cap, MB_OK);

	wchar_t b[] = L"wide-char";
	wchar_t b_cap[] = L"Wide";
	MessageBoxW(NULL, b, b_cap, MB_OK);
	return 0;
}