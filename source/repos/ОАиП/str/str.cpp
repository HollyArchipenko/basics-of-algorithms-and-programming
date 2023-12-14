#include <iostream>
using namespace std;

int main()
{
    char str[] = "11 222 33 4";
	int ctrLetter = 0, ctrSpace = 0;

	for (int i = 0; str[i] != '\0'; i++) {

		if (str[i] == ' ') {
			ctrSpace++;
		}

		if (ctrSpace % 2 == 0) {
			
			if (i != 0) {
				i++;
			}

			ctrLetter = 0;

			for (int j = i; str[j] != ' '; j++) {
				
				cout << str[j];

				ctrLetter++;

			}

			cout << ' ';

			i = i + ctrLetter - 1;

		}

	}

    return 0;
}