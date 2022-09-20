#include <iostream>
using namespace std;

class A {
public:
	virtual string ClassMessage()
	{
		return "class A";
	}
};

class B : public A {
public:
	string ClassMessage()
	{
		return "class B";
	}
};
#if 0
void TestFunction1(A* x) {
	cout << x->ClassMessage().data() << endl;
}
#else
void TestFunction1(A& x) {
	cout << x.ClassMessage().data() << endl;
}
#endif
int main()
{
	A a;
	B b;

	//TestFunction1(&a);
	//TestFunction1(&b);
	TestFunction1(a);
	TestFunction1(b);

	return 0;

}