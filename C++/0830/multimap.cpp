#include <iostream>
#include <map>
using namespace std;

int main()
{
	multimap<string, int> mm;
	mm.insert(make_pair("A", 10));
	mm.insert(make_pair("B", 20));
	mm.insert(make_pair("C", 30));
	mm.insert(make_pair("D", 40));
	mm.insert(make_pair("E", 50));
	mm.insert(make_pair("C", 100));
	mm.insert(make_pair("C", 200));

	for (auto i = mm.begin(); i != mm.end(); ++i) {
		cout << "[" << i->first << " " << i->second << "]";
	}
	cout << endl;

	auto lo_bo = mm.lower_bound("C");
	auto up_bo = mm.upper_bound("C");

	cout << "key C�� value ��: ";
	for (auto i = lo_bo; i != up_bo; ++i) {
		cout << i->second << " ";
	}
	cout << endl;

	return 0;


}