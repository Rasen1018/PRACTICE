/*
	
*/
#include <iostream>
using namespace std;

class Chulsoo {
	int age;
	char name;
public:
	Chulsoo(int age) :age(age) {
		cout << "Chulsoo::Chulsoo(age) ������ �Ϸ�" << endl;
	}

	Chulsoo() {
		cout << "Chulsoo::Chulsoo() ������ �Ϸ�" << endl;
	}

	~Chulsoo() {
		cout << "Chulsoo::~Chulsoo() �Ҹ��� �Ϸ�" << endl;
	}

	void setAge(int age) {
		this->age = age;
	}

	void introduce();
};

int main(void) {
	//Chulsoo* chulsooPtr1 = (Chulsoo*)malloc(sizeof(Chulsoo)); // �����ڿ� �Ҹ��ڰ� �ȺҸ�
	Chulsoo* chulsooPtr1 = new Chulsoo(32);
	//chulsooPtr1->setAge(32);
	chulsooPtr1->introduce();  
	delete chulsooPtr1;			// free(chulsooPrt1)

	return 0;
}

void Chulsoo::introduce() {
	cout << "ö�� ����: " << age << endl;
} 