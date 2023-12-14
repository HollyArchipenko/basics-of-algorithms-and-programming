#include <iostream>
using namespace std;

int main()
{
	float y, x = 0;
	while (x < 7)
	{
		if (x < 4)
			y = x;
		else
			if (x > 4)
				y = x * x;
			else
				y = 1;
		printf("x=%f\t", x);
		printf("y=%0.2f\n", y);
		//cout << x << '\t' << y << endl;
		x = x + 2;
	}
    return 0;
}