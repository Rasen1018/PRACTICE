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
	
	//printf("���ڸ� �Է��ϼ���. ");
	//gets(s1);

	//strcat(s2, s1);

	printf("s1: %s s2: %s \n\n", s1, s2);

	printf("%d \n", strcmp(s2, s1)); //���ڿ� ũ�� �񱳴� ASCII�ڵ带 �������� ��(���� ��� X)
	printf("%d \n", strcmp(s1, s2)); //���� ũ�� ���, ������ 0, �ڰ� ũ�� ����
	printf("%d \n", strcmp(s2, "kingdom"));
	printf("%d \n", strcmp("apple", "Apple"));
	printf("%d \n", strcmp("Apple", "Apple"));
	printf("%d \n\n", strcmp("culTure", "culture"));

	do {
		printf("���ڸ� �Է����ּ���.");
		gets(tmp);
	} while (strlen(tmp) >= sizeof(name));
	strcpy(name, tmp);

	printf("name: %s \n", name);


	return 0;
}