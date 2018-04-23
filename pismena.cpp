#include <iostream>

using namespace std;

int delka(char* text) {
	bool mamHotovo = false;
	int kolikMam = 0;
	while (!mamHotovo) {
		if (text[kolikMam] == 0) {
			mamHotovo = true;
		}
		else {
			kolikMam++;
		}
	}
	return kolikMam;
}

void naVelka(char* text) {
	bool mamHotovo = false;
	int kolikMam = 0;
	while (!mamHotovo) {
		if (text[kolikMam] == 0) {
			mamHotovo = true;
		}
		else {
			if (text[kolikMam] < 123 && text[kolikMam] > 96) {
				text[kolikMam] = text[kolikMam] - 32;
			}
			kolikMam++;
		}
	}
}

void main() {
	char text[6] = "Ahoj";
	int x = delka(text);
	naVelka(text);
	cout << text << endl;
}
