#include <iostream>
using namespace std;

class Sosimple
{
	int num;
public:
	Sosimple(int n) : num(n) {
		num++;
		cout << num << "��° SoSimple ��ü" << endl;
	}
	
	void ShowShimpleData() {
		cout << num << endl;
		//cout << nu2 << endl;
	}
	
	// ���� �ҷ���
	Sosimple(const Sosimple& copy) : num(copy.num) {
		cout << "called Sosimple(const sosimple &copy)" << endl;
	}
	
	Sosimple& AddNum(int n1) {
		num += n1;
		return *this;
	}
};

Sosimple simpleFuncObj(Sosimple ob) {
	cout << "return ����" << endl;
	return ob;
}

//int Sosimple::num = 0;

int main()
{
	Sosimple sim1(15);
	simpleFuncObj(sim1).AddNum(30).ShowShimpleData(); // num 45
	sim1.ShowShimpleData(); // num 15

	Sosimple sim2 = simpleFuncObj(sim1); // sim1 ��ü -> ob ��ü -> ���ϰ� ��ȯ(�ӽð�ü) -> sim2 ��ü
	sim2.AddNum(30); // ��ü ���� ���ص� �� ( stack �ڸ� ���� ����)
	sim2.ShowShimpleData();

	return 0;
}