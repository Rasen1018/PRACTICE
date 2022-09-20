#include <iostream>
using namespace std;

class First {
public:
#if 0
	virtual void print() = 0;
#else
	virtual void print() {
		cout << "First" << endl;
	}
#endif
};

class Second : public First {
public:
	void print() override
	{
		cout << "Second" << endl;
	}
};

class Third : public Second {
public:
	void print() {
		cout << "Third" << endl;
	}
};

int main()
{
#if 1
	Third third = Third();
	Second second = third;
	First first = third;

	third.print();
	second.print();
	first.print();
#else
	Third* third = new Third();
	Second* second = third;
	First* first = third;
	second->print();
	third->print();
	first->print();
#endif

	return 0;
}