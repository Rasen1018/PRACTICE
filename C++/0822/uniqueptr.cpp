#include <iostream>
#include <memory>
using namespace std;

int main(void)
{
	unique_ptr<int> ptr01(new int(5));
	//unique_ptr<int> ptr01 = make_unique<int>();

	auto ptr02 = move(ptr01);

	//unique_ptr<int> ptr03 = ptr01; -> ����

	ptr02.reset(); // ���ϴ� ������ �޸� ����
	ptr01.reset();

	return 0;
} // ����Ʈ ������ �Ҹ��� ����