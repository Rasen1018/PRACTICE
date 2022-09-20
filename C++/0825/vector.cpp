#include <iostream>
#include <vector>

using namespace std;

#if 0
int main()
{
	vector<int> v(8,1); // capacity�� size�� 8 �Ҵ�, ���� 1�� ä��
	cout << "v.capacity(): " << v.capacity() << " / v.size(): " << v.size() << endl;
	for (auto i = 0; i < v.size(); i++)
		cout << v[i] << " ";
	cout << endl << endl;

	v.assign(6,3); // size�� 6���� ����, ���� 3���� ä��
	cout << "v.capacity(): " << v.capacity() << " / v.size(): " << v.size() << endl;
	for (auto i = 0; i < v.size(); i++)
		cout << v[i] << " ";
	cout << endl << endl;

	v[2] = 7;
	for (vector<int>::iterator it = v.begin() + 4; it != v.end(); it++)
		*it = 9;
	v.push_back(10); v.push_back(20); // �� �߰�
	cout << "v.capacity(): " << v.capacity() << " / v.size(): " << v.size() << endl;
	for (auto i = 0; i < v.size(); i++)
		cout << v[i] << " ";
	cout << endl << endl;

	v.push_back(30); // �� �߰�
	cout << "v.capacity(): " << v.capacity() << " / v.size(): " << v.size() << endl;
	for (auto i = 0; i < v.size(); i++)
		cout << v[i] << " ";
	cout << endl << endl;

	v.resize(17); // capacity = 17�� �Ҵ�
	cout << "v.capacity(): " << v.capacity() << " / v.size(): " << v.size() << endl;
	for (auto i = 0; i < v.size(); i++)
		cout << v[i] << " ";
	cout << endl << endl;

	return 0;
}

#else
// vector::begin/end
int main()
{
	std::vector<int> myvector;
	for (int i = 1; i <= 5; i++) myvector.push_back(i);

	std::cout << "myvector contains:";
	for (std::vector<int>::iterator it = myvector.begin(); it != myvector.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << '\n';

	return 0;
}

#endif