#include <memory>
#include <iostream>
using namespace std;

int main()
{
	shared_ptr<int> ptr1 = make_shared<int>(6);
	cout << ptr1.use_count() << endl;
	auto ptr2(ptr1);
	cout << ptr1.use_count() << endl;
	auto ptr3 = ptr1;
	cout << ptr1.use_count() << endl;
	cout << *ptr1 << endl;

}