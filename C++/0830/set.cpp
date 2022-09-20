#include <iostream>
#include <set>
using namespace std;

int main()
{
#if 0
	set<int> s;
	pair<set<int>::iterator, bool> pr;
	s.insert(10);
	s.insert(30);
	s.insert(60);
	s.insert(20);
	s.insert(50);
	pr = s.insert(40);

for (auto i = s.begin(); i != s.end(); i++) {
	cout << *i << " ";
}
cout << endl;

s.insert(pr.first, 55);

for (auto i = s.begin(); i != s.end(); i++) {
	cout << *i << " ";
}
cout << endl;

auto f = s.find(55);
if (f != s.end()) { cout << *f << endl }
#else
	multiset<int> ms;
	multiset<int>::iterator ms_iter;
	ms.insert(10);
	ms.insert(30);
	ms.insert(60);
	ms.insert(20);
	ms.insert(50);
	ms.insert(40);
	ms_iter=ms.insert(40);
	
	for (auto i = ms.begin(); i != ms.end(); i++) { cout << *i << " "; }

	cout << endl;
	cout << "40 °³¼ö: " << ms.count(40) << endl;

	auto f = ms.find(40);
	auto lo_bo = ms.lower_bound(40);
	auto up_bo = ms.upper_bound(40);
	cout << *lo_bo << "/" << *up_bo << endl;

	for (auto i = lo_bo; i != up_bo; i++)
		cout << *i << endl;

	if (f != ms.end()) { cout << *f << endl; }

	return 0;
#endif
return 0;
}