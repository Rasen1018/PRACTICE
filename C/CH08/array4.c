#include <stdio.h>
#include <string.h>

int main()
{
	char s1[20] = "king", s2[20] = "";
	char name[20], tmp[100];

	printf("s1: %s s2: %s \n", s1, s2);
	printf("%d, %d \n", sizeof(s1), strlen(s1));
	
	strcpy(s2,s1);
	printf("s1: %s s2: %s \n", s1, s2);
	
	//printf("문자를 입력하세요. ");
	//gets(s1);

	//strcat(s2, s1);

	printf("s1: %s s2: %s \n\n", s1, s2);

	printf("%d \n", strcmp(s2, s1)); //문자열 크기 비교는 ASCII코드를 기준으로 비교(길이 상관 X)
	printf("%d \n", strcmp(s1, s2)); //앞이 크면 양수, 같으면 0, 뒤가 크면 음수
	printf("%d \n", strcmp(s2, "kingdom"));
	printf("%d \n", strcmp("apple", "Apple"));
	printf("%d \n", strcmp("Apple", "Apple"));
	printf("%d \n\n", strcmp("culTure", "culture"));

	do {
		printf("문자를 입력해주세요.");
		gets(tmp);
	} while (strlen(tmp) >= sizeof(name));
	strcpy(name, tmp);

	printf("name: %s \n", name);


	return 0;
}