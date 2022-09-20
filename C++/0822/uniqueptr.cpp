#include <iostream>
#include <memory>
using namespace std;

int main(void)
{
	unique_ptr<int> ptr01(new int(5));
	//unique_ptr<int> ptr01 = make_unique<int>();

	auto ptr02 = move(ptr01);

	//unique_ptr<int> ptr03 = ptr01; -> 오류

	ptr02.reset(); // 원하는 순간에 메모리 해제
	ptr01.reset();

	return 0;
} // 스마트 포인터 소멸자 생성