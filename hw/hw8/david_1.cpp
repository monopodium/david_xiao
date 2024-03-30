#include<iostream>
using namespace std;

int main()
{
	int i,j,k;
	for (i = 2; i < 12 && i>1; i++)
	{
        cout << "i: " << i << endl;
        for (j = 2;j < 12 && j>1 ; j++)
        {
			k = i * j;
			cout << j << "×" << i << "=" << k << endl;
		}
		cout << endl;

	}
	return 0;
}
