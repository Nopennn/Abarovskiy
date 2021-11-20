#include <iostream>
#include "triangle.h"
#include "tvector.h"

using namespace std;

int main()
{
	cout << "Comands:" << endl;
	cout << "a - add new triangle (a [input])" << endl;
	cout << "d - erase triangle by index (d [idx])" << endl;
	cout << "s - set triangle by index (s [idx] [input])" << endl;
	cout << "p - print all containing triangles (p)" << endl;
	cout << "q - quit (q)" << endl;
	char f = 1;
	TVector *vect = new TVector();
	char cmd;
	while(f)
	{
		cout << "> ";
		cin >> cmd;
		switch(cmd)
		{
			case 'a':
			{
				vect->InsertLast(Triangle(cin));
				break;
			}
			case 'd':
			{
				int di;
				cin >> di;
				vect->Erase(di);
				break;
			}
			case 's':
			{
				int si;
				cin >> si;
				Triangle csq(cin);
				(*vect)[si] = csq;
				break;
			}
			case 'p':
			{
				cout << *vect << endl;
				break;
			}
			case 'q':
			{
				f = 0;
				break;
			}
			default:
				cout << "wrong input" << endl;
		}
	}
	delete vect;
}