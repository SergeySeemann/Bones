#include <iostream>
#include <Windows.h>
#include <time.h>
using namespace std;

void main()
{

	srand(time(NULL));
	int Rand, calc_u = 0, calc_c = 0, Try = 0, games = 0;
	cout << "!===============================================!" << endl;
	cout << "!             Welcome to BONES                  !" << endl;
	cout << "!===============================================!" << endl;
	cout << "!I`m goin first...                              !" << endl;
	Sleep(2000);
	cout << "!...because computers are smarter than humnity  !" << endl;
	cout << "!===============================================!" << endl;
	do//3 игры
	{
		do //2 кубика компа
		{
			Rand = rand() % 6 + 1;
			switch (Rand)
			{
			case(1):
			{
				cout << char(201) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(187) << endl;
				cout << char(186) << "      " << char(186) << endl;
				cout << char(186) << "  *   " << char(186) << endl;
				cout << char(186) << "      " << char(186) << endl;
				cout << char(200) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(188) << endl;
				calc_c += 1;
				Try++;

			}break;
			case(2):
			{
				cout << char(201) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(187) << endl;
				cout << char(186) << "   *  " << char(186) << endl;
				cout << char(186) << "      " << char(186) << endl;
				cout << char(186) << "   *  " << char(186) << endl;
				cout << char(200) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(188) << endl;
				calc_c += 2;
				Try++;

			}break;
			case(3):
			{
				cout << char(201) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(187) << endl;
				cout << char(186) << "   *  " << char(186) << endl;
				cout << char(186) << "   *  " << char(186) << endl;
				cout << char(186) << "   *  " << char(186) << endl;
				cout << char(200) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(188) << endl;
				calc_c += 3;
				Try++;

			}break;
			case(4):
			{
				cout << char(201) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(187) << endl;
				cout << char(186) << "*    *" << char(186) << endl;
				cout << char(186) << "      " << char(186) << endl;
				cout << char(186) << "*    *" << char(186) << endl;
				cout << char(200) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(188) << endl;
				calc_c += 4;
				Try++;


			}break;
			case(5):
			{
				cout << char(201) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(187) << endl;
				cout << char(186) << "*    *" << char(186) << endl;
				cout << char(186) << "  *   " << char(186) << endl;
				cout << char(186) << "*    *" << char(186) << endl;
				cout << char(200) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(188) << endl;
				calc_c += 5;
				Try++;

			}break;
			case(6):
			{
				cout << char(201) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(187) << endl;
				cout << char(186) << "*    *" << char(186) << endl;
				cout << char(186) << "*    *" << char(186) << endl;
				cout << char(186) << "*    *" << char(186) << endl;
				cout << char(200) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(188) << endl;
				calc_c += 6;
				Try++;

			}break;
			}
			Rand = 0;
		} while (Try != 2);
		cout << "i ve got" << calc_c << " scores" << endl;
		cout << "Ur turn..." << endl;
		do//2 кубика юзера
		{
			Rand = rand() % 6 + 1;
			switch (Rand)
			{
			case(1):
			{
				cout << char(201) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(187) << endl;
				cout << char(186) << "      " << char(186) << endl;
				cout << char(186) << "  *   " << char(186) << endl;
				cout << char(186) << "      " << char(186) << endl;
				cout << char(200) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(188) << endl;
				calc_u += 1;
				Try++;

			}break;
			case(2):
			{
				cout << char(201) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(187) << endl;
				cout << char(186) << "   *  " << char(186) << endl;
				cout << char(186) << "      " << char(186) << endl;
				cout << char(186) << "   *  " << char(186) << endl;
				cout << char(200) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(188) << endl;
				calc_u += 2;
				Try++;

			}break;
			case(3):
			{
				cout << char(201) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(187) << endl;
				cout << char(186) << "   *  " << char(186) << endl;
				cout << char(186) << "   *  " << char(186) << endl;
				cout << char(186) << "   *  " << char(186) << endl;
				cout << char(200) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(188) << endl;
				calc_u += 3;
				Try++;

			}break;
			case(4):
			{
				cout << char(201) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(187) << endl;
				cout << char(186) << "*    *" << char(186) << endl;
				cout << char(186) << "      " << char(186) << endl;
				cout << char(186) << "*    *" << char(186) << endl;
				cout << char(200) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(188) << endl;
				calc_u += 4;
				Try++;


			}break;
			case(5):
			{
				cout << char(201) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(187) << endl;
				cout << char(186) << "*    *" << char(186) << endl;
				cout << char(186) << "  *   " << char(186) << endl;
				cout << char(186) << "*    *" << char(186) << endl;
				cout << char(200) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(188) << endl;
				calc_u += 5;
				Try++;

			}break;
			case(6):
			{
				cout << char(201) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(187) << endl;
				cout << char(186) << "*    *" << char(186) << endl;
				cout << char(186) << "*    *" << char(186) << endl;
				cout << char(186) << "*    *" << char(186) << endl;
				cout << char(200) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(188) << endl;
				calc_u += 6;
				Try++;

			}break;
			}
			Rand = 0;
		} while (Try != 4);
		cout << "u have.." << calc_u << " scores" << endl;
		Try = 0;
		games++;
		cout << "Next tour" << endl;
		Sleep(5000);
	} while (games != 3);

	if (calc_c > calc_u)//подсчет результатов
	{
		cout << "As i said, computers are smarter then humans" << endl;
	}
	if (calc_c < calc_u)
	{
		cout << "..You won, but only this time" << endl;
	}
	if (calc_c == calc_u)
	{
		cout << " No winner in this fight" << endl;

	}
	system("pause");
}