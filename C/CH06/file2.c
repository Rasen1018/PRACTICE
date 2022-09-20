#include "file.h"
extern int salary; //메모리를 할당받지 않고 컴파일러에게 자료형을 알린다.

void mySal()
{
	//printf("\n수당: %d \n", EARN);
	salary += EARN;	
}