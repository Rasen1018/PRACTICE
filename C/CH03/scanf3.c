#include <stdio.h>
void func_1(void);
void func_2(void);
void func_3(void);

int main()
{
	
	//func_1();
	//func_2();
	func_3();

	return 0 ;

}

void func_1(void)
{
    int first, second;
	
	printf("두 수를 입력하세요 ? ");
	scanf("%d%d", &first, &second); //두 수를 엔터, 스페이스바, 탭키로 구분

	printf("first : %d, second : %d \n", first, second);
}

void func_2(void)
{
     int first, second;
	 char op = 0;

	 printf("전화번호를 입력하세요 ? "); //4485-0974
	 //scanf("%d%c%d", &first, &op, &second);
	 scanf("%d%*c%d", &first, &second); // %*c -> 한 문자 버리기

	 printf("first : %d, second : %d \n", first, second);
	 printf("op: %d, %c \n", op, op);
}

void func_3(void)
{
     int first, second;
	 
	 printf("5자리이상 숫자를 입력하세요 ? "); //1538115
	 scanf("%2d%d", &first, &second); // 앞에 3자리 먼저 first에, 나머지 second
	 
	 printf("first : %d, second : %d \n", first, second);
}
