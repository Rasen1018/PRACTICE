#include "ConTest.h"

// ��� ���� �ڽ� Ŭ������ �����ص� �θ� Ŭ������ �ڵ� ������ �Ҹ�
int main()
{
#if 1 //�ڵ� �׽�Ʈ �� �� ���(1�� �ٲٸ� ��� ����)
	//CON2* p_obj = new CON2;
	//delete p_obj;
	//free(p_obj);
	
#else //���ο� �ڵ�
	CON2* p_obj = (CON2*)malloc(sizeof(CON2));
	delete p_obj;
#endif

	CON2* p_TEST = new CON2;

	delete p_TEST;

	return 0;
}