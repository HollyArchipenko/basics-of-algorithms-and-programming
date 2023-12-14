#include <iostream>
using namespace std;

class smallobj
{
private:
	int somedata;
public:
	void setdata(int d) { somedata = d; }
	void getdata() { cout << "Put somedata: \t"; cin >> somedata; }
	void showdata() { cout << "Somedata: " << somedata << endl; }
};

int main()
{
	smallobj s1, s2;
	s1.setdata(1066);
	s2.getdata();
}