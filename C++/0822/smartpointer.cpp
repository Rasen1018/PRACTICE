#include <iostream>
#include <memory>
using namespace std;

class Chulsoo {
	int age;
public:
	Chulsoo(int age) : age(age) {
		cout << "Chulsoo::Chulsoo(age) 생성자 완료" << endl;
	}
	Chulsoo() {
		cout << "Chulsoo::Chulsoo() 생성자 완료" << endl;
	}
	~Chulsoo() {
		cout << "Chulsoo::Chulsoo() 소멸자 완료" << endl;
	}

	void introduce();
};

void Chulsoo::introduce() {
	cout << "철수 나이: " << age << endl;
}

int main(void)
{

#if 0
	Chulsoo* chulsooPtr2 = new Chulsoo(32);
	chulsooPtr2->introduce();
	delete chulsooPtr2;

	{
		auto_ptr<Chulsoo> chulsooSmrtptr(new Chulsoo(32));
		chulsooSmrtptr->introduce();

	} // 스마트 포인터 소멸자 생성

	unique_ptr<Chulsoo> chulsooUnique(new Chulsoo(29));
	chulsooUnique->introduce();


#else
	shared_ptr<Chulsoo> chulsooSmptr1(new Chulsoo(28));
	cout << chulsooSmptr1.use_count() << endl;
	chulsooSmptr1->introduce();
	cout << "shared_ptr<Chulsoo> 타입간 복사 생성자 호출 후" << endl;

	shared_ptr<Chulsoo> chulsooSmptr2 = chulsooSmptr1;
	cout << chulsooSmptr1.use_count() << endl;
	chulsooSmptr1->introduce();
	chulsooSmptr2->introduce();
#endif
	return 0;
} // 스마트 포인터 소멸자 생성