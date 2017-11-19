#include <iostream>
#include <ctime>
#include <iomanip>
#include <locale.h>
#include <Windows.h>
#include <string>
using namespace std;

int new1(int a, int b, int c)
{
    return a*b+c;
}

int main()
{
	while (true)
	{
		int a, b , c;
		setlocale(0, "");
		cout << "¬ведите 3 числа." << endl;
		cin >> a;
		cin >> b;
		cin >> c;
		cout << "ќтвет: " << new1(a,b,c) << endl;S
		system("pause");
		cout << "’отите выйти ?\n 1 : да\n иначе нет\n";
		cin>>a;
		if(a == 1)
			break;
	}
	return 0;
}
