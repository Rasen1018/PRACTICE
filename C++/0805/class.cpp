#include <iostream>

using namespace std;

#define NAME_LEN 20
#define SEX_LEN 10
#define JOB_LEN 20
#define CHARACTER_LEN 20

//struct Chulsoo
class Chulsoo
{
	char name[NAME_LEN];
	char sex[SEX_LEN];
	char job[JOB_LEN];
	char character[CHARACTER_LEN];
	int age;
	bool isHuman;

public:
	void introduce() {
	}

	void eat(const char* food) 
	{
		cout << food << endl;
	}

	void sleep() {
	}

	void drive(const char* destination) 
	{
		cout << destination << endl;
	}
};

int main(void)
{
	Chulsoo chulsoo = { "철수", "남성", "작가", "diligent", 32, true };

	chulsoo.drive("레스토랑");
	chulsoo.eat("스테이크");

	return 0;
}