#include "time.h"

int main()
{
	Time time(2, 35, 44);
	Time time2(4, 20, 44);
	cout << time.showTime() << endl;
	printf("시간이 %s이 더 큽니다\n", time.operator>=(time2) ? "Time1" : "Time2");
	cout << "t1 <= t2 :" << (time.operator>=(time2) ? "Time1" : "Time2") << endl;
	                                                            
	return 0;
}