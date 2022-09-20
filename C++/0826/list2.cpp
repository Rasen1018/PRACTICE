#include <iostream>
#include <list>
using namespace std;

int main()
{
	list<int> inList;
	list<int> in;

	inList.push_back(10);
	inList.push_front(20);
	inList.push_back(30);
	inList.push_front(-10);
	inList.push_back(-20);
	inList.push_back(-30);

	for (auto i = inList.begin(); i != inList.end(); i++)
		cout << *i << " ";
	cout << endl;


	for (auto i = 0; i < 10; i++)
		in.push_back(i);

	for (auto i = in.begin(); i != in.end(); i++)
		cout << *i << " ";
	cout << endl;

	for (auto p = inList.begin(); p != inList.end(); p++) {
		if (*p == -20) {
			inList.splice(p, in);
			break;
		}
	}
	for (auto i = inList.rbegin(); i != inList.rend(); i++) //°Å²Ù·Î ÇÒ ¶© rbegin, rend
		cout << *i << " ";
	cout << endl;
	return 0;

}