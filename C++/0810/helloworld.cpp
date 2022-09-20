#include <iostream>
#include <array>
#include <vector>
using namespace std;

class shape {

};

class Rect : public shape {

};

template<typename T>
T add(T a, T b) {
	if (a < 0 || b < b) return -1;
	return a + b;
}

struct Array {
	int* _array;
	int _size;

	Array(int size) {

	}

		~Array() {
		if (_array) {
			delete[] _array;
		}

		void setAt(int idx, int value) {
			if (0 > idx || idx >= _size) return;
			_array
		}
	}
};

template<typename T>

vector<int> arr;
arr[0] = 10;
arr[1] = 10;
arr[2] = 10;
arr[3] = 10;
arr[4] = 10;

arr.push_back(10);
arr.push_back(20);
arr.push_back(30);
arr.push_back(40);
arr.push_back(50);

arr.size();

int arr2[] = { 1,2,3,4 };

for (int i = 0; i < 4; i++) {
	cout << i << " = " << arr2[i] << endl;
}

for (const auto& value : arr2) {
	cout << " = " << value << endl;
}

// 상수를 많이 써서 코드를 만들지 말자!
int main()
{
	Array array1(10);
	Array array2(10);

	int a = 'A';
	char c = static_cast<char>(a);

	return 0;
}

int add(int a, int b)
{

}