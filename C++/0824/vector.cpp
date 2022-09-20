#include <iostream>
#include <vector>
using namespace std;

template <typename T>
class MyArray {
	vector<T> list;
public:
	void add_list(T const&);
	void delete_last_list(void);
	void show_list(void);
};

template <typename T>
void MyArray<T>::add_list(T const& element) {
	list.push_back(element);
}

template <typename T>
void MyArray<T>::delete_last_list(void) {
	list.pop_back();
}

template <typename T>
void MyArray<T>::show_list(void) {
	cout << "[My Array list look up]" << endl;
	for (typename vector<T>::iterator i = list.begin(); i != list.end(); ++i) //++i도 상관없음
		cout << *i << endl;
}

int main(void)
{
	MyArray<int> array1; //후입선출
	array1.add_list(1);
	array1.add_list(2);
	array1.add_list(3);
	array1.add_list(4);
	array1.add_list(5);
	array1.show_list();

	array1.delete_last_list();
	array1.delete_last_list();
	array1.show_list();

	MyArray<double> array2;
	array2.add_list(1.53);
	array2.add_list(2.235);
	array2.add_list(3.52);
	array2.add_list(4.45);
	array2.add_list(5.7);
	array2.show_list();

	array2.delete_last_list();
	array2.delete_last_list();
	array2.show_list();

	return 0;
}

