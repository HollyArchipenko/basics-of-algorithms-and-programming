#include <iostream>
using namespace std;

int Euclid(int, int);

int main()
{
	int m = 1, n = 3;
	cout << m << '\t' << n << endl;
	cout << n * m++ << '\t' << m << endl;

	cout << Euclid(m, n) << endl;
	//cout << m << '\t' << n << endl;
}

int Euclid(int m, int n)
{
	int r;
	do
	{
		r = m % n;
		if (r == 0) {
			return n;
		}
		m = n;
		n = r;

	} while (true);
}
