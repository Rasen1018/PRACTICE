#include <iostream>
using namespace std;

void handler() {
	cout << "in handler" << endl;
}

void f1(void) noexcept(false) {
	cout << "About to throw 1" << endl;
	if (1)
		throw 1;
}

void f2(void) /*noexcept(false)*/ {
	try {
		f1();
	}
	catch (...) {
		handler();
		throw 1; // 무조건 던진다
	}
}

int main()
{
	//f1(); -> f1()만 단독으로 실행시키면 catch할 곳이 없어서 죽음

	try {
		f2();
	}
	catch (...) {
		cout << "Caught exception from f2" << endl;
	}
}