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
	TVector<Triangle> *vect;
	char cmd;
	while(f)
	{
		cout << "> ";
		cin >> cmd;
		switch(cmd)
		{
			case 'a':
			{
				vect->InsertLast(std::shared_ptr<Triangle>(new Triangle(cin)));
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
				break;
			}
			case 'p':
			{
				
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
