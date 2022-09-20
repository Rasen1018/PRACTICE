#include <iostream>
using namespace std;

class Integer {
public:
	int* m_plnt;
	Integer(int value) {
		m_plnt = new int;
		*m_plnt = value;
	}
	Integer(Integer& obj) {             //Integer타입의 객체를 변수로 받는다
		m_plnt = new int(*obj.m_plnt);
	}
};

class MyProfile {
	int* ptrNum;
	int zipcode;
public:
	MyProfile(int n, int zc) {
		ptrNum = new int;
		*ptrNum = n;
		zipcode = zc;
	}

	MyProfile(const MyProfile& obj) : zipcode(obj.zipcode) {
		ptrNum = new int;
		*ptrNum = *obj.ptrNum;
		cout << "Copy Constructor" << endl;
	}

	void setProfile(int n, int zc) {
		*ptrNum = n;
		zipcode = zc;
	}

	void getProfile() {
		cout << "ptrNum: " << ptrNum << endl;
		cout << "ptrNum: " << *ptrNum << endl;
		cout << "zipcode: " << zipcode << endl;
		cout << endl;
	}

	~MyProfile() {
		delete ptrNum;
	}

};

int main()
{

#if 0

	MyProfile profile1(10, 90031);
	profile1.getProfile();

	MyProfile profile2(profile1); //profile2 = profile1;
	profile1.getProfile();
	profile2.getProfile();
	profile2.setProfile(500, 90000); //unique_ptr
	profile1.getProfile();
	profile2.getProfile();

	//unique_ptr<MyProfile>profile1 = make_unique<profile2>();

#else
	Integer i1(3);
	Integer i2 = i1;

#endif

	return 0;
}