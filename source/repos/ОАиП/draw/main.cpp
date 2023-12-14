#include <iostream>

using namespace std;

struct circle
{
    int xCo, yCo;
    int radius;
};
bool isDiveded(int, int, int&, int&);

int main()
{
    int count = 0, sum = 0;
    int n, p, q;
    cin >> n >> p >> q;
    isDiveded(n, 5, sum, count);
    isDiveded(p, 5, sum, count);
    isDiveded(q, 5, sum, count);

    count == 1 ? cout << count << " number" : count > 1 ? cout << count << " numbers" : cout << "No numbers";
    /*switch (count)
    {
    case 1: cout << count << " number"; break;
    case 2:
    case 3: cout << count << " numbers"; break;
    default: cout << "No numbers";
    }
    return 0;*/
    //count ? cout << "Sum is " << sum : cout << "There are no numbers";
}

bool isDiveded(int a, int b, int& sum, int& count)
{
    if (a % b == 0) {
        sum += a;
        count++;
        return true;
    }
    else {
        return false;
    }   
}
