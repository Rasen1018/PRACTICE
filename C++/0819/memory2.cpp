/*
	
*/
#include <iostream>
using namespace std;

class Chulsoo {
	int age;
	char name;
public:
	Chulsoo(int age) :age(age) {
		cout << "Chulsoo::Chulsoo(age) 생성자 완료" << endl;
	}

	Chulsoo() {
		cout << "Chulsoo::Chulsoo() 생성자 완료" << endl;
	}

	~Chulsoo() {
		cout << "Chulsoo::~Chulsoo() 소멸자 완료" << endl;
	}

	void setAge(int age) {
		this->age = age;
	}

	void introduce();
};

int main(void) {
	//Chulsoo* chulsooPtr1 = (Chulsoo*)malloc(sizeof(Chulsoo)); // 생성자와 소멸자가 안불림
	Chulsoo* chulsooPtr1 = new Chulsoo(32);
	//chulsooPtr1->setAge(32);
	chulsooPtr1->introduce();  
	delete chulsooPtr1;			// free(chulsooPrt1)

	return 0;
}

void Chulsoo::introduce() {
	cout << "철수 나이: " << age << endl;
} 