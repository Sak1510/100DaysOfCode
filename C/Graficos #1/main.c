#include <windows.h>

int WINAPI WinMain(HINSTANCE hInstanciaActual, HINSTANCE hInstanciaPrevia, LPSTR lpCmdLinea, int nCmdShw) {
	
	MessageBox(NULL, "Hola Mundo", "Mensage emergente", MB_OKCANCEL|MB_ICONQUESTION);
	return 0;
}
