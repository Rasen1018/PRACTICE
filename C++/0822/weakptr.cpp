#include <memory>
#include <iostream>
using namespace std;

int main(int agrc, char** agrv)
{
	shared_ptr<int> sp1(new int(5));
	weak_ptr<int> wp1 = sp1; // 
	{
		shared_ptr<int> sp2 = wp1.lock();
		if (sp2) {

		}
	}

	sp1.reset();

	shared_ptr<int> sp3 = wp1.lock();

	return 0;
}