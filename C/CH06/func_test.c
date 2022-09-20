#include <stdio.h>
#include <math.h>
//함수: 어떤 일을 처리하는 논리적인 코드들의 집합
/*함수사용: 1.함수정의
            2. 함수호출
			 3. 함수선언(옵션)*/

void funcA(); /* 3. 함수선언 : 컴파일러에게 함수의 원형(형식)을 알린다. 
이를 생략하면 컴파일러는 모든 인자를 int로 간주한다.*/
void funcB(int salary);
int funcD();
//float funcE(int salary, float rate);

float funcE(int salary, float rate)
{
	//printf("funcE() %d, %f \n", salary, rate);
	printf("funcE() 세금 : %f \n", salary * rate);
	return salary * rate;
}

int main()
{
	int salary = 3400000; //지역변수(자신이 선언된 함수에서만 사용)
	int 수당;
	float tax;

	printf("main() start. \n");

	funcA(); //함수호출(무인수)
	funcB(salary); //실인수

	수당 = funcD();

	printf("main() 수당: %d \n", 수당);

	tax = funcE(salary+수당, 0.03);
	printf("실수령액: %f \n", (salary + 수당)-tax);

	printf("10의 제곱근: %lf \n", sqrt(10.0));

	printf("main() end. \n");

	return 0;
}

void funcA() //함수 헤더
{            //함수 바디
	printf("funcA() start. \n");
	return; //즉시 부모함수로 복귀
	printf("funcA() end. \n");
} 

//실인수와 가인수는 갯수와 자료형이 같아야 한다.
void funcB(int salary) //가인수
{
	printf("funcB() salary: %d \n", salary);
}

int funcD() //int 함수() -> 기본
{
	int over_time=15;
	//printf("funcD() 수당 : %d \n", over_time * 37000);
	return over_time * 37000;
}