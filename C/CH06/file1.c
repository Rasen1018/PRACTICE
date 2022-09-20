#include "file.h"   //사용자정의 헤더파일

int salary = 3500000;
int main()
{
	myName();
	myAge();
	mySal();

	printf("실수령액: %d \n", salary);

	return 0;
}

void myName()
{
	printf("성명: 김태훈\n");
}

void myAge()
{
	printf("나이: %d\n", AGE);
}