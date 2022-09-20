#include <iostream>
#include <vector>
using namespace std;

template <typename T, int init /* =3 */>
class MyArray {
	vector<T> list;
public:
	MyArray() {
		for (int i = 0; i < init; i++)
			list.push_back(i);
	}
	void add_list(T const&);
	void delete_last_list(void);
	void show_list(void);
};

template <typename T, int init>
void MyArray<T, init>::add_list(T const& element) {
	list.push_back(element);
}

template <typename T, int init>
void MyArray<T, init>::delete_last_list(void) {
	list.pop_back();
}

template <typename T, int init>
void MyArray<T, init>::show_list(void) {
	cout << "[My Array list look up]" << endl;
	for (typename vector<T>::iterator i = list.begin(); i != list.end(); ++i) //++i도 상관없음
		cout << *i << endl;
}

int main(void)
{
	MyArray<int, 3> array1; //후입선출, 맨 앞에 3개 추가
	array1.add_list(1);
	array1.add_list(2);
	array1.add_list(3);
	array1.add_list(4);
	array1.add_list(5);
	array1.show_list();

	array1.delete_last_list();
	array1.delete_last_list();
	array1.show_list();

	//MyArray<double, 5> array2;
	//array2.add_list(1.53);
	//array2.add_list(2.235);
	//array2.add_list(3.52);
	//array2.add_list(4.45);
	//array2.add_list(5.7);
	//array2.show_list();

	//array2.delete_last_list();
	//array2.delete_last_list();
	//array2.show_list();

	return 0;
}
