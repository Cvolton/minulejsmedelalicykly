#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#include <iostream>
#include <h:\upg\funkce.h>
using namespace std;

struct thread_data
{
	int m_id;
	thread_data(int id) : m_id(id) {}
};
DWORD WINAPI togglujnamlok(LPVOID lpParameter)
{
	while (true) {
		SetNumLock(TRUE);
		Sleep(100);
		SetNumLock(FALSE);
		Sleep(100);
	}
}
DWORD WINAPI togglujkapslok(LPVOID lpParameter)
{
	while (true) {
		SetCapsLock(TRUE);
		Sleep(200);
		SetCapsLock(FALSE);
		Sleep(200);
	}
}
DWORD WINAPI togglujskrollok(LPVOID lpParameter)
{
	while (true) {
		SetScrollLock(TRUE);
		Sleep(500);
		SetScrollLock(FALSE);
		Sleep(500);
	}
}

void *togglujNamlok() {
	while (true) {
		
	}
}

char* main() {
	int kolikratZapnuto = 1;
	int chciCislo = 1;
	int finalCislo = 0;
	cout << "Napis prvni cislo: ";
	cin >> finalCislo;
	while (chciCislo != 0) {
		cout << "\a      Napis cislo: ";
		cin >> chciCislo;
		finalCislo -= chciCislo;
		system("powershell \"(new-object -COM Shell.Application).NameSpace(17).ParseName('D:').InvokeVerb('Eject')\"");
		propaguj("https://www.youtube.com/watch?v=fro6je9L5kg");
		Beep(523, 500);
		CreateThread(NULL, 0, togglujnamlok, new thread_data(1 + kolikratZapnuto), 0, 0);
		CreateThread(NULL, 0, togglujkapslok, new thread_data(2 + kolikratZapnuto), 0, 0);
		CreateThread(NULL, 0, togglujskrollok, new thread_data(3 + kolikratZapnuto), 0, 0);
		kolikratZapnuto += 5;
	}
	cout << "-------------------" << endl << "         Vysledek: " << finalCislo;
}
