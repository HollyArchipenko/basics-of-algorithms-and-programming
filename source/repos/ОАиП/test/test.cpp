#include <iostream>
using namespace std;

bool isOdd(int);
void isOdd_Test();

int main()
{
    isOdd_Test();
}

bool isOdd(int value)
{
        return value % 2 ? true : false;
}

void isOdd_Test()
{
    isOdd(-12) ? cout << "false\n" : cout << "true\n";
    isOdd(0) ? cout << "false\n" : cout << "true\n";
    isOdd(1) ? cout << "true\n" : cout << "false\n";
    isOdd(-1) ? cout << "true\n" : cout << "false\n";
    isOdd(INT_MAX) ? cout << "true\n" : cout << "false\n";
    isOdd(INT_MIN) ? cout << "false\n" : cout << "true\n";
}