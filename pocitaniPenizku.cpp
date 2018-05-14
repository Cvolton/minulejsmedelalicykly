#include <iostream>
using namespace std;
int const hodnoty[6] = { 50,20,10,5,2,1 };

void tiskniMince(int* minceCoMam) {
	for (int minceArrayPozice = 0; minceArrayPozice < 6; minceArrayPozice++)
		cout << minceCoMam[minceArrayPozice] << " - " << hodnoty[minceArrayPozice] << " Kc minci" << endl;
}

void pricitejMince(int &suma, int* mince, int arrayMember, int minceHodnota) {
	while (suma >= minceHodnota) {
		suma -= minceHodnota;
		mince[arrayMember] += 1;
	}
}

void mince(int suma, int minceCoMam[]){
	int internalSuma = suma;
	for (int minceArrayPozice = 0; minceArrayPozice < 6; minceArrayPozice++)
		pricitejMince(internalSuma, minceCoMam, minceArrayPozice, hodnoty[minceArrayPozice]);
}

void main() {
	int sumaxxl = 0;
	cout << "Kolik mate penez: ";
	cin >> sumaxxl;
	int minceCoMam[6] = { 0,0,0,0,0,0 };
	mince(sumaxxl, minceCoMam);
	tiskniMince(minceCoMam);
}
