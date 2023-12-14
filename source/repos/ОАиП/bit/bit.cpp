#include <iostream>
using namespace std;

int main()
{
    int maskA = 0, pos = 3;

	for (int i = 0, pr = 1; i < pos; i++, pr *= 2)
	{
		maskA += pr;
	}
	//0001 = 1; 0011 = 1 + 2; 0111 = 1 + 2 + 4 = 7;  1111 = 1 + 2 + 4 + 8
	int A = 15;
	int B = A & ~maskA; //0000 0000 0000 1111 & 1111 1111 1111 1000
	cout << B;
}