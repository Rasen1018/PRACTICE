#include <iostream>
#include <memory>
using namespace std;

class Chulsoo {
	int age;
public:
	Chulsoo(int age) : age(age) {
		cout << "Chulsoo::Chulsoo(age) ������ �Ϸ�" << endl;
	}
	Chulsoo() {
		cout << "Chulsoo::Chulsoo() ������ �Ϸ�" << endl;
	}
	~Chulsoo() {
		cout << "Chulsoo::Chulsoo() �Ҹ��� �Ϸ�" << endl;
	}

	void introduce();
};

void Chulsoo::introduce() {
	cout << "ö�� ����: " << age << endl;
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

	} // ����Ʈ ������ �Ҹ��� ����

	unique_ptr<Chulsoo> chulsooUnique(new Chulsoo(29));
	chulsooUnique->introduce();


#else
	shared_ptr<Chulsoo> chulsooSmptr1(new Chulsoo(28));
	cout << chulsooSmptr1.use_count() << endl;
	chulsooSmptr1->introduce();
	cout << "shared_ptr<Chulsoo> Ÿ�԰� ���� ������ ȣ�� ��" << endl;

	shared_ptr<Chulsoo> chulsooSmptr2 = chulsooSmptr1;
	cout << chulsooSmptr1.use_count() << endl;
	chulsooSmptr1->introduce();
	chulsooSmptr2->introduce();
#endif
	return 0;
} // ����Ʈ ������ �Ҹ��� ����