#include<iostream>
#include<conio.h>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Russian");
	int n;
	int t;
	int o=1;
	char program;
	
	
		cout << "¬ведите номер программы от 1 до 7: "; cin >> program;
		
	
		switch (program)
		{
		case '1':
			cout << "¬видите размер сторон фигуры: "; cin >> n;
			for (int i = 1; i <= n; i++)
			{
				for (int j = 1; j < n; j++)
				{
					cout << '*' << " ";
				}
				cout << endl;
			}
			break;
		case '3':
			cout << "¬видите размер сторон фигуры: "; cin >> t;
			for (int i = 0; i <= t; i++)
			{

				for (int j = t; j != i; --j)
				{

					cout << "*" << " ";
				}
				cout << endl;
			}
			break;
		case '2':
			cout << "¬видите размер сторон фигуры: "; cin >> t;
			for (int i = 0; i <= t; i++)
			{
				for (int j = 0; j != i; j++)
				{
					cout << "*" << " ";
				}
				cout << endl;
			}
			break;

		case '4':
			cout << "¬видите размер сторон фигуры: "; cin >> t;
			for (int i = 0; i <= t; i++)
			{
				for (int j = 0; j != i; j++)
				{
					cout << " ";
				}
				for (int j = t; j != i; --j)
				{
					cout << "*";
				}
				cout << endl;
			}
			break;
		case '5':
			cout << "¬видите размер сторон фигуры: "; cin >> t;
			for (int i = 0; i <= t; i++)
			{
				for (int j = t; j != i; --j)
				{
					cout << " ";
				}
				for (int j = 0; j != i; j++)
				{

					cout << "*";
				}
				cout << endl;
			}
			break;
		case '6':
			cout << "¬видите размер сторон фигуры: "; cin >> t;
			for (int i = 1 ;i <= t; ++i)
			{
				for (int j = t; j != i; j--)
				{
					cout << " ";
				}
				cout << "/";
				for (int j = 1; j != i; ++j)
				{

					cout << " ";
				}
				for (int j = 1; j != i; j++)
				{
					cout << " ";
				}
				cout << "\\";
				cout << endl;
			}
			for (int i = 1; i <= t; i++)
			{
				for (int j = 1; j != i; j++)
				{
					cout << " ";
				}
				cout << "\\";
				for (int j = t; j != i; --j)
				{
					cout << " ";
				}
				for (int j = t; j != i; --j)
				{
					cout << " ";
				}
				cout << "/";
				cout << endl;
			}
			break;
		case '7':
			cout << "¬видите размер сторон фигуры: "; cin >> t;
			for (int i = 1; i <= t; i++)
			{
				for (int j = 0; j < t; j++)
				{
					if (o % 2 == 0) {
						cout << "+";
					}
					else
					{
						cout << "-";
					}
					o++;
				}
				cout << endl;
			}
			break;
		default:; break;
		}

}