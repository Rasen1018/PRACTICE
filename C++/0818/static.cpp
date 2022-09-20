#include <iostream>
using namespace std;

class Sosimple
{
	static int num;
public:
	Sosimple()
	{
		num++;
		cout << num << "¹øÂ° SoSimple °´Ã¼" << endl;
	}

	void setsimple(int n)
	{
		num = n;
	}

	void getsimple()
	{
		cout << num << endl;
	}
};

int Sosimple::num = 0;

int main()
{
	//cout << Sosimple::num << 

	Sosimple sim1;
	Sosimple sim2;
	Sosimple sim3;
	printf("\n");
	sim1.setsimple(40);
	sim1.getsimple();

	return 0;
}