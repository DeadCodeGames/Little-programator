#include <iostream>
#include <windows.h>
#include <conio.h>
#include <cstdio>
using namespace std;
void Start_text() {
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(h, 4);
	cout << "!! As first thing before you start playing this game you'll need to maximaze size of your screen. !!";
	cout << "\n   Then when you maximazed your screen you can continue by presing any key.\n\t And when text stops for long time press ";
	system("pause");
	system("cls");
	SetConsoleTextAttribute(h, 15);
}
void Logo() {
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	cout << "                                                                    WELCOME TO GAME" << endl;
	Sleep(400);
	SetConsoleTextAttribute(h, 10);
	cout << "                                    ________________________________________________________________________________ " << endl;
	Sleep(100);
	cout << "                                   /  __            __    ____________    ____________    __            __________  \\" << endl;
	Sleep(100);
	cout << "                                  |  |  |          |  |  |____    ____|  |____    ____|  |  |          |   _______|  |" << endl;
	Sleep(100);
	cout << "                                  |  |  |          |  |       |  |            |  |       |  |          |  |          |" << endl;
	Sleep(100);
	cout << "                                  |  |  |          |  |       |  |            |  |       |  |          |  |          | " << endl;
	Sleep(100);
	cout << "                                  |  |  |          |  |       |  |            |  |       |  |          |  |_______   |" << endl;
	Sleep(100);
	cout << "                                  |  |  |          |  |       |  |            |  |       |  |          |   _______|  |" << endl;
	Sleep(100);
	cout << "                                  |  |  |          |  |       |  |            |  |       |  |          |  |          |" << endl;
	Sleep(100);
	cout << "                                  |  |  |          |  |       |  |            |  |       |  |          |  |          |" << endl;
	Sleep(100);
	cout << "                                  |  |  |_______   |  |       |  |            |  |       |  |_______   |  |_______   |" << endl;
	Sleep(100);
	cout << "                                  |  |__________|  |__|       |__|            |__|       |__________|  |__________|  |" << endl;
	Sleep(100);
	cout << "                                   \\________________________________________________________________________________/";
	Sleep(50);
	cout << "       by team deadcode" << endl;
	Sleep(150);
	cout << "  _____________________________________________________________________________________________________________________________________________________" << endl;
	Sleep(100);
	cout << " /  _______	_______      ________	   ________     _______	         __         ___      ___         __     ____________    ________     _______   \\" << endl;
	Sleep(100); 
	cout << "|  |   __  \\   |   __  \\    /   __   \\    /  ____  \\   |   __  \\        /  \\	   |   \\    /   |       /  \\   |____    ____|  /   __   \\   |   __  \\   |" << endl;
	Sleep(100);
	cout << "|  |  /  \\  |  |  /  \\  |  |   /  \\   |  |  |    \\__|  |  /  \\  |      /    \\	   |    \\  /    |      /    \\       |  |      |   /  \\   |  |  /  \\  |  |" << endl;
	Sleep(100);
	cout << "|  |  \\__/  |  |  \\__/  |  |  |    |  |  |  |	       |  \\__/  |     /  /\\  \\	   |  |  \\/  |  |     /  /\\  \\      |  |      |  |    |  |  |  \\__/  |  |" << endl;
	Sleep(100);
	cout << "|  |   ____/   |     __/   |  |    |  |  |  |    ____  |     __/     /  /__\\  \\	   |  |\\____/|  |    /  /__\\  \\	    |  |      |  |    |  |  |     __/   |" << endl;
	Sleep(100);
	cout << "|  |  |	       |     \\     |  |    |  |  |  |   |_   | |     \\      /   ____   \\   |  |      |  |   /   ____   \\    |  |      |  |    |  |  |     \\     |" << endl;
	Sleep(100);
	cout << "|  |  |	       |  |\\  \\    |  |    |  |  |  |     |  | |  |\\  \\    /   /    \\   \\  |  |      |  |  /   /    \\   \\   |  |      |  |    |  |  |  |\\  \\    |" << endl;
	Sleep(100);
	cout << "|  |  |	       |  | \\  \\   |   \\__/   |  |   \\___/   | |  | \\  \\  /   /      \\   \\ |  |      |  | /   /      \\   \\  |  |      |   \\__/   |  |  | \\  \\   |" << endl;
	Sleep(100);
	cout << "|  |__|	       |__|  \\__\\   \\________/    \\_________/  |__|  \\__\\ |__|        |__| |__|      |__| |__|        |__|  |__|       \\________/   |__|  \\__\\  |   " << endl;
	Sleep(100);
	cout << " \\_____________________________________________________________________________________________________________________________________________________/" << endl;
	Sleep(500);
	SetConsoleTextAttribute(h, 15);
	cout << "\n                                                              Press [ANY] key to continue" << endl;
	_getch();
	system("cls");
}
//----------------------------------------------------------
void Language_chose(int& language) {
	cout << "Choose language of the game." << endl;
	Sleep(100);
	cout << "(1)  English" << endl;
	Sleep(100);
	printf("(2)  Slovenčina\n");
	Sleep(100);
	printf("(3)  Čeština\n");
	Sleep(100);
	cout << "(4)  Deutsch" << endl;
	Sleep(100);
	cout << "(5)  Polski" << endl;
	Sleep(100);
	cout << "(6)  Magyar" << endl;
	Sleep(100);
	printf("(7)  Nihongo\n");
	Sleep(100);
	printf("(8)  Filipino\n");
	char jazyk;
	jazyk = _getch();
	switch (jazyk) {
		case '1':
			language = 1;
			system("cls");
			printf("You've choosen English.");
			_getch();
			break;
		case '2':
			language = 2;
			system("cls");
			printf("Zvolil si si Slovenčinu.");
			_getch();
			break;
		case '3':
			system("cls");
			language = 3;
			printf("Zvolil sis Češtinu.");
			_getch();
			break;
		case '4':
			system("cls");
			language = 4;
			printf("Sie haben sich für Deutsch entschieden.");
			_getch();
			break;
		case '5':
			system("cls");
			language = 5;
			printf("Wybraliście Polskę");
			_getch();
			break;
		case '6':
			system("cls");
			language = 6;
			printf("A magyart választottad");
			_getch();
			break;
		case '7':
			system("cls");
			language = 7;
			printf("Anta wa nihongo o sentaku shimashita.");
			_getch();
			break;
		case '8':
			system("cls");
			language = 8;
			printf("Filipino ang pinili mo.");
			_getch();
	}
}
//----------------------------------------------------------
void pravidla_en() {
	system("cls");
	cout << "Rules:\n";
	Sleep(100);
	cout << "  This game has only one rule and that's:\n";
	Sleep(100);
	cout << "\t1) Cheating.\n\t\tDon't try to cheat by rewriting system saves in the .txt file.";
	Sleep(100);
	cout << "\n\t\tThis is checked for and by rewriting this file you can corrupt the game.";
}
void pravidla_cz() {
	system("cls");
	cout << "Pravidlá:\n";
	Sleep(100);
	cout << "  Tato hra má jen jedno pravidlo a to je:\n";
	Sleep(100);
	cout << "\t1) Podvádění.\n\t\tNetřeba ani zkoušet podvádět přepisováním uložených souborů .txt";
	Sleep(100);
	cout << "\n\t\tNicméně toto je ošetřeno a přepisování souborů může poškodit hru.";
}
void pravidla_sk() {
	system("cls");
	cout << "Pravidla:\n";
	Sleep(100);
	cout << "  Táto hra má len jedno pravidlo a to je:\n";
	Sleep(100);
	cout << "\t1) Podvázdzanie.\n\t\tNetreba ani skúšať podvádzať prepisovánim uložených súborov .txt";
	Sleep(100);
	cout << "\n\t\tAvšak toto je ošetrené a prepisovanie súborov môže poškodiť hru.";

}
void pravidla_ge() {
	system("cls");
	cout << "Regeln:\n";
	Sleep(100);
	cout << "  Dieses Spiel hat nur eine Regel und das ist alles:\n";
	Sleep(100);
	cout << "\t1) Schummeln.\n\t\tSie müssen nicht einmal versuchen, durch Überschreiben gespeicherter TXT-Dateien zu schummeln";
	Sleep(100);
	cout << "\n\t\tDies ist jedoch behoben und das Überschreiben von Dateien kann das Spiel beschädigen.";
}
void pravidla_pl() {
	system("cls");
	cout << "Zasady:\n";
	Sleep(100);
	cout << "  Ta gra ma tylko jedną zasadę i tyle:\n";
	Sleep(100);
	cout << "\t1) Oszukiwanie.\n\t\tNie musisz nawet próbować oszukiwać, nadpisując zapisane pliki .txt";
	Sleep(100);
	cout << "\n\t\tZostało to jednak naprawione i nadpisywanie plików może przerwać grę.";
}
void pravidla_hu() {
	system("cls");
	cout << "Szabályok:\n";
	Sleep(100);
	cout << "  Ennek a játéknak csak egy szabálya van, és ennyi:\n";
	Sleep(100);
	cout << "\t1) Csalás.\n\t\tMég csak meg sem kell próbálnia csalni a mentett .txt fájlok felülírásával";
	Sleep(100);
	cout << "\n\t\tEz azonban rögzített, és a fájlok felülírása megszakíthatja a játékot.";


}
//----------------------------------------------------------
void uvittanie_en() {
	system("cls");
	cout << "Introduction:\n";
	cout << "Again welcome to the game: LITTLE PROGRAMATOR.\nThis is simple game to train your programator thinking.\nThis game was made in programing language C++, in program Microsoft Visual Studio.\nThis game was made by Zem0, student from Slovakia.\n";
}
//----------------------------------------------------------
int main() {
	setlocale(LC_ALL, "");
	int language;
	Start_text();
	Logo();
	if (language == 1) {
		pravidla_en();
		cout << endl << endl;
		system("pause");
		uvittanie_en();
	}
	else if (language == 2) {
		pravidla_sk();
		cout << endl << endl;
		system("pause");
		}
	else if (language == 3) {
		pravidla_cz();
		cout << endl << endl;
		system("pause");
		}
	else if (language == 4) {
		pravidla_ge();
		cout << endl << endl;
		system("pause");
		}
	else if (language == 5) {
		pravidla_pl();
		cout << endl << endl;
		system("pause");
		}
	else if (language == 6) {
		pravidla_hu();
		cout << endl << endl;
		system("pause");
		}
/*	else if (language == 7) {
		}
	else if (language == 8) {
		}    */
	return 0;
}
//----------------------------------------------------------