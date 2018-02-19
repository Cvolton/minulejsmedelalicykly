#include <iostream>

using namespace std;

void odpocet(int robloxdeathsound) {
	if (robloxdeathsound <= 0) {
		cout << "oof" << endl;
		return;
	}
	cout << robloxdeathsound << endl;
	odpocet(robloxdeathsound - 1);
}

void main(int lolcra, char** robloxstringxxl) {
	int roblox;
	if (lolcra <= 1) {
		cin >> roblox;
	}
	else {
		roblox = atoi(robloxstringxxl[1]);
	}
	odpocet(roblox);
}
