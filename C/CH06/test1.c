#include <stdio.h>
#define PI 3.14159

//키보드로부터 반지름을 입력받아(main())
// 원의 넓이(area()), 원의 둘레(cir())를 구하여 출력하기
//실행결과
//반지름 7
//원의 넓이
//원의 둘레

double Area(int radius);
double Cir(int radius);

int main()
{
	//1. 메모리 할당(변수 선언)
	int radius;
	double area, cir;

	//2. 데이터 입력
	printf("반지름을 입력하시오.\n");
	scanf("%d", &radius);

	//3. 처리(넓이, 둘레 계산)
	area=Area(radius);
	cir=Cir(radius);

	//4. 출력
	printf("원의 넓이 : %lf\n", area);
	printf("원의 둘레 : %lf\n", cir);

	printf("End");

	return 0;
}

double Area(int radius)
{
	return radius * radius * PI; 
}

double Cir(int radius)
{
	return 2 * radius * PI;
}
