#include <iostream>
#include <Windows.h>
#include <conio.h>
#include <string>
#include <MMSystem.h>
using namespace std;

int main() {

	char input;

	while (!_kbhit()) {
			//input = _getch();
		//	break;
		
		PlaySound(TEXT("C:\\Users\\Lily\\Desktop\\test\\source\\Buzzer.wav"), NULL, SND_FILENAME);

		PlaySound(NULL, 0, 0);

	} 

	//if (input)
	cout << "You hit: " << _getch() << endl;
	
	system("pause");

	return 0;
}