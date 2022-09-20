#include <iostream>

using namespace std;

namespace AAA {
	namespace BBB {
		namespace CCC {
			int num1;
			int num2;
		}
	}
}

int main(void)
{
	AAA::BBB::CCC::num1 = 20;
	AAA::BBB::CCC::num2 = 30;

	cout << "AAABBBCCC () :" << AAA::BBB::CCC::num1 << endl;
	cout << "AAABBBCCC () :" << AAA::BBB::CCC::num2 << endl;

	namespace ABC = AAA::BBB::CCC;
	cout << "ABC () : " << ABC::num1 << endl;
	cout << "ABC () : " << ABC::num2 << endl;

	cin >> ABC::num1;
	cout << "ABC () num1 : " << ABC::num1;

	return 0;
}