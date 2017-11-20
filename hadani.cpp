#include <stdio.h>
#include <chrono>
#include <thread>
#include <Windows.h>
#include <stdlib.h>
#include <time.h>
#include <h:\upg\funkce.h>

void hadani() {
	int staryx, novyx;
	srand(time(NULL));
	staryx = rand() % 99 + 1;
	bool neuhadl = true;
	printf_s("\r\n\r\n==================\r\n== HADANI CISLA ==\r\n==================\r\n\r\nZadejte cislo: ");
	while (neuhadl) {
		scanf_s("%i", &novyx);
		if (novyx == staryx) {
			printf("\r\n\r\n================\r\n== 100 VYHRAL ==\r\n================\r\n\r\n");
			copyright();
			neuhadl = false;
		}
		else if (novyx > staryx) {
			printf("Moc, zkus to jeste jednou: ");
		}
		else {
			printf("Malo, zkus to jeste jednou: ");
		}
	}
}
void main() {
	std::this_thread::sleep_for(std::chrono::milliseconds(1000));
	printf("spousti se program cislo 5\r\n");
	int staryx;
	srand(time(NULL));
	staryx = rand() % 99 + 1;
	int zivot;
	srand(time(NULL));
	zivot = rand() % 2 + 1;
	if (zivot == 2) {
		staryx = 100;
	}
	for (int x = 0; x <= staryx; x++) {
		std::this_thread::sleep_for(std::chrono::milliseconds(100));
		system("cls");
		printf("spousti se program cislo 5\r\n|");
		
		for (int novyx = 0; novyx <= x; novyx++) {
			printf("=");
		}

		for (int novyx = 0; novyx <= (99 - x); novyx++) {
			printf(" ");
		}
		printf("|\r\n %i%%",x);
	}
	std::this_thread::sleep_for(std::chrono::milliseconds(500));
	if (staryx == 100) {
		hadani();
	}
	else {
		printf("\r\nspousteni selhalo");
	}
	
}
