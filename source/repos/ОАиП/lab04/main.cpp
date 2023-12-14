#include <iostream> //директива препроцессора 
#include <iomanip>
using namespace std; //директива using

void draw1();

int main() {
	//setlocale(LC_ALL, "Russian");
	/*int t, n, ans;
	cout << "Enter variables t, n ";
	cin >> t >> n;
	ans = t == n;*/
	int i = 2;
	double d = 2;
	char ans = i == d && d != 2 ? 'y' : 'n';
	cout << ans;
	/*cout << "Ваш символ " << t + n << endl;
	cout << "Размер в байтах:" << sizeof(t) << endl;
	cout << "Тип Размер в байтах" << endl;
	cout << "int: " << sizeof(int) << endl;
	cout << "char: " << sizeof(char) << endl;
	cout << "float: " << sizeof(float) << endl;
	cout << "double: " << sizeof(double) << endl;*/
	//draw1();
	return 0;
}

void draw1()
{
	char space = ' ';
	cout << "Enter a character "; 
	char c;
	cin >> c;

	cout << setw(35) << setfill(space) << space << setw(10) << setfill(c) << c << endl;
	cout << setw(34) << setfill(space) << space << setw(12) << setfill(c) << c << endl;
	cout << setw(33) << setfill(space) << space << setw(14) << setfill(c) << c << endl;
}
