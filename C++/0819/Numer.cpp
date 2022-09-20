/*
�ӽ� ��ü���� �ڵ� �� ��ȯ
*/

#include <iostream>
using namespace std;

class Number {
private:
	int num;
public:
	Number(int n = 0) : num(n) {
		cout << "Number(" << n << ")" << endl;
	}

	Number& operator=(const Number& ref)
	{
		cout << "operator=()" << endl;
		num = ref.num;
		return *this;
	}

	void printNumber() {
		cout << num << endl;
	}
};

int main()
{
	Number num1(3.14);
	Number num2{static_cast<int>(3.14)}; // {}���� Ÿ�� �ƴϸ� �ȹ���
	num1 = 30;
	num1.printNumber();

	return 0;
}