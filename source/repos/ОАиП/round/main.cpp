#include <iostream>
using namespace std;

int main()
{
    double n = 2.0, h = 0.1;

	while (n <= 2.6)
	{
		n += h;
		n = ceil(n * 10) / 10.0;
	}

	/*char a[] = "Hello World ";
	char b[40] = {};
    
	int i = 0;

	while (a[i] != '\0') {
		cout << a[i++];
	}
	i--;

	int j = 0;

	while (i >= 0)
	{
		b[j++] = a[i--];
	}
	i++;

	while (b[i] != '\0') {
		cout << b[i++];
	}*/
}