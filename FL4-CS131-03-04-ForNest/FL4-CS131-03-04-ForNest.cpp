// This program counts cans into six-packs and cases.
// How could you change this program to be a countdown timer with hours, minutes, seconds?
#include <iostream>
#include <Windows.h>
using namespace std;
int main() {
	int cans, sixPacks, cases;
	for (cases = 0; cases < 10; cases++) {
		for (sixPacks = 0; sixPacks < 4; sixPacks++) {
			for (cans = 0; cans < 6; cans++) {
				Sleep(1000);
				system("cls");
				cout << "cases: " << cases << " six-packs: " << sixPacks;
				cout << " cans: " << cans << endl;
			}
		}
	}
	system("pause");
	return 0;
}