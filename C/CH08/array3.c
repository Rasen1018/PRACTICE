#include <stdio.h>

int main()
{
	char ch = 'a'; //���� ������ ''�� ��ƾ� �Ѵ�.
	char str[10] = "kingdom"; //1���� ���ڹ迭�� ���ڿ��� �ϳ� �����Ѵ�.

	printf("%d, %d, %d \n", sizeof(ch), sizeof(str[0]), sizeof(str));
	printf("%c, %p, %p \n", str[0], &str[0], str);

	printf("\n%p, %s \n", str, str); // %s�� �����ͷ� ���ڿ��� ��ȯ(�ּ� ����)

	printf("���ڸ� �Է����ּ���.");
	//scanf("%s", str); //���� �ִ� ���ڴ� �Է��ϱ� ����� (tap, space, enter ����), ���ڿ��� �ּ� �� ��ü
	gets(str); // enter�� ���� ����(���ڵ� ���� ���)
	//fgets(str, 10, stdin); //scanf, gets�� �迭�� ��踦 �˻����� �ʴ´�.
	printf("\n%p, %s \n", str, str); 

	int i;
	for (i = 0; i < 10; i++)
		printf("%p: %c, %d \n", &str[i], str[i], str[i]);
}