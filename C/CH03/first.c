#include <stdio.h> //�������(��,��°� ���õ� �Լ� ������ ����)
//#: ��ó����

//�Լ��� ����
funcA() //ȣ��� �� ����
{
	printf("funcA() start. \n");
	printf("funcA() end.\n");
}

int main() //main(): �ڵ����� �����ϴ� ������ �Լ�
{
	printf("main() start. \n"); //����Լ�
	funcA(); //�Լ�ȣ��
    printf("main() end. \n");

	return 0;
}

