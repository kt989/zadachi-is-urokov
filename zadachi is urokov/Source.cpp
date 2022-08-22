#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
using std:: cout;
using std::cin;
using std::endl;

//#define podbor_koda
#define random

void main()
{
	setlocale(LC_ALL, "");

#ifdef podbor_koda
	int i, k, j;
	int time = 0;
	for (i = 0; i < 10;i++)
	{
		for (j = 0; j < 10; j++)
		{
			for (k = 0; k < 10; k++)
			{
				if ((k != j) && (k != i) && (j != i))
				{
					cout << endl << k << j << i;
					cout << "\t" << k << i << j;
					cout << "\t" << i << k << j;
					cout << "\t" << j << k << i;
					cout << "\t" << j << i << k;
					cout << "\t" << i << j << k;
					time += 18;
				}
				
			}
		}
	}

	cout << "\n\nМаксимальное время на подбор кода составляет " << time << " секунд" << endl;

#endif // podbor_koda

#ifdef random
	srand(time(NULL));
	int a = rand();
	cout << a << endl;
	a = rand();
	cout << a << endl;

#endif // random

}