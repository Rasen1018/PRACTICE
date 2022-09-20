#include "ConTest.h"

// 상속 받은 자식 클래스만 실행해도 부모 클래스는 자동 생성과 소멸
int main()
{
#if 1 //코드 테스트 할 때 사용(1로 바꾸면 사용 중지)
	//CON2* p_obj = new CON2;
	//delete p_obj;
	//free(p_obj);
	
#else //새로운 코드
	CON2* p_obj = (CON2*)malloc(sizeof(CON2));
	delete p_obj;
#endif

	CON2* p_TEST = new CON2;

	delete p_TEST;

	return 0;
}