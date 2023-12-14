#include <iostream>
using namespace std;

int main()
{
    /*char symbol = ' ';
    int temp = static_cast<int>(symbol);
    cout << hex << temp;*/
    int number = 0x041;
    char temp = static_cast<char>(number);
    //cout << static_cast<char>(number + 0x20);
    printf("Code for number %d: %c \n", number, temp);
}