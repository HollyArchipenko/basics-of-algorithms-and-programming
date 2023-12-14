//Ввести целое число N. Выделить из этого числа цифры, кратные m, и записать их в одномерный массив
#include <iostream>
using namespace std;

int main()
{
	int N, m, count = 0, a[10] = {}, temp;
	cout << "Input N, m ";
	cin >> N >> m;
	
	while (N > 0) {
		if (N % 10 % m == 0)
		{
			*(a + count) = N % 10;
			count++;
		}
		N /= 10;
	}

	for (int i = count - 1, j = 0; j < i; i--, j++)
	{
		temp = *(a + j);
		*(a + j) = *(a + i);
		*(a + i) = temp;
	}

	for (int i = 0; i < count; i++)
	{
		cout << *(a + i) << ' ';
	}

	/*int a[5],
    int* ptr;
	ptr = a;
	for (int i = 0; i < 5; i++)
	{
		*(a+i) = rand() % 1000;
		cout << *(a + i) << ' ';
	}
	cout << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << *(ptr + i) << ' ';
	}*/
}