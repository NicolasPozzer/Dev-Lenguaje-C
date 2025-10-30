#include <windows.h>

/* Aquí es donde toda la entrada a la ventana va a */
LRESULT CALLBACK WndProc(HWND hwnd, UINT Message, WPARAM wParam, LPARAM lParam) {
	switch(Message) {
		
		/* Tras la destrucción, dile al hilo principal que se detenga */
		case WM_DESTROY: {
			PostQuitMessage(0);
			break;
		}
		
		/* Todos los demás mensajes (muchos de ellos) se procesan utilizando procedimientos predeterminados */
		default:
			return DefWindowProc(hwnd, Message, wParam, lParam);
	}
	return 0;
}

/* La función 'main' de los programas GUI de Win32: aquí es donde comienza la ejecución */
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow) {
	WNDCLASSEX wc; /* Una estructura de propiedades de nuestra ventana */
	HWND hwnd; /* Un 'HANDLE', por lo tanto, la H, o un puntero a nuestra ventana */
	MSG Msg; /* Una ubicación temporal para todos los mensajes */

	/* Poner a cero la estructura y configurar las cosas que queremos modificar */
	memset(&wc,0,sizeof(wc));
	wc.cbSize		 = sizeof(WNDCLASSEX);
	wc.lpfnWndProc	 = WndProc; /* Aquí es donde enviaremos mensajes a */
	wc.hInstance	 = hInstance;
	wc.hCursor		 = LoadCursor(NULL, IDC_ARROW);
	
	/* Blanco, COLOR_WINDOW es solo un #define para un color de sistema, intente Ctrl + clic */
	wc.hbrBackground = (HBRUSH)(COLOR_WINDOW+1);
	
	wc.lpszClassName = "WindowClass";
	wc.hIcon		 = LoadIcon(NULL, IDI_APPLICATION); /* Cargar un icono estándar */
	wc.hIconSm		 = LoadIcon(NULL, IDI_APPLICATION); /* Usa el nombre "A" para usar el ícono del proyecto */

	if(!RegisterClassEx(&wc)) {
		MessageBox(NULL, "Window Registration Failed!","Error!",MB_ICONEXCLAMATION|MB_OK);
		return 0;
	}

	hwnd = CreateWindowEx(WS_EX_CLIENTEDGE,"WindowClass","Caption",WS_VISIBLE|WS_OVERLAPPEDWINDOW,
		CW_USEDEFAULT, /* x */
		CW_USEDEFAULT, /* y */
		640, /* width = width */
		480, /* height = height */
		NULL,NULL,hInstance,NULL);

	if(hwnd == NULL) {
		MessageBox(NULL, "Window Creation Failed!","Error!",MB_ICONEXCLAMATION|MB_OK);
		return 0;
	}

	/*
		Este es el corazón de nuestro programa donde se procesan todas las entradas y
        enviado a WndProc. Tenga en cuenta que GetMessage bloquea el flujo de código hasta que recibe algo, por lo que
        este bucle no producirá un uso excesivamente alto de la CPU
	*/
	while(GetMessage(&Msg, NULL, 0, 0) > 0) { /* Si no se recibe ningún error ... */
		TranslateMessage(&Msg); /* Traducir los códigos clave a caracteres si están presentes */
		DispatchMessage(&Msg); /* Envíalo a WndProc */
	}
	return Msg.wParam;
}
