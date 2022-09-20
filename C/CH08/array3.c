#include <stdio.h>

int main()
{
	char ch = 'a'; //문자 변수는 ''로 담아야 한다.
	char str[10] = "kingdom"; //1차원 문자배열은 문자열을 하나 저장한다.

	printf("%d, %d, %d \n", sizeof(ch), sizeof(str[0]), sizeof(str));
	printf("%c, %p, %p \n", str[0], &str[0], str);

	printf("\n%p, %s \n", str, str); // %s는 포인터로 문자열을 반환(주소 형태)

	printf("문자를 입력해주세요.");
	//scanf("%s", str); //공백 있는 글자는 입력하기 어려움 (tap, space, enter 구분), 문자열은 주소 그 자체
	gets(str); // enter로 문자 구분(숫자도 문자 취급)
	//fgets(str, 10, stdin); //scanf, gets는 배열의 경계를 검사하지 않는다.
	printf("\n%p, %s \n", str, str); 

	int i;
	for (i = 0; i < 10; i++)
		printf("%p: %c, %d \n", &str[i], str[i], str[i]);
}