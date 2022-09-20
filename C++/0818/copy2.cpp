#include <iostream>
using namespace std;

class Sosimple
{
	int num;
public:
	Sosimple(int n) : num(n) {
		num++;
		cout << num << "번째 SoSimple 객체" << endl;
	}
	
	void ShowShimpleData() {
		cout << num << endl;
		//cout << nu2 << endl;
	}
	
	// 먼저 불려짐
	Sosimple(const Sosimple& copy) : num(copy.num) {
		cout << "called Sosimple(const sosimple &copy)" << endl;
	}
	
	Sosimple& AddNum(int n1) {
		num += n1;
		return *this;
	}
};

Sosimple simpleFuncObj(Sosimple ob) {
	cout << "return 이전" << endl;
	return ob;
}

//int Sosimple::num = 0;

int main()
{
	Sosimple sim1(15);
	simpleFuncObj(sim1).AddNum(30).ShowShimpleData(); // num 45
	sim1.ShowShimpleData(); // num 15

	Sosimple sim2 = simpleFuncObj(sim1); // sim1 객체 -> ob 객체 -> 리턴값 반환(임시객체) -> sim2 객체
	sim2.AddNum(30); // 객체 생성 안해도 됨 ( stack 자리 차지 안함)
	sim2.ShowShimpleData();

	return 0;
}