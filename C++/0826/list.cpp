#include <list>
#include <iostream>
using namespace std;

int main()
{
	// int Ÿ���� ���� ��ũ�� ����Ʈ ����
	list<int> inList;
	
	//1~10���� ��ũ�� ����Ʈ�� �ִ´�.
	for (int i = 0; i < 10; ++i)
		inList.push_back(i);

	//5�� ã�Ƽ� �����Ѵ�.
	inList.remove(5);

	//��ũ�� ��ũƮ�� ������ ����Ѵ�.
	list<int>::iterator it;

	for (it = inList.begin(); it != inList.end(); it++)
		cout << *it << endl;

	return 0;

}