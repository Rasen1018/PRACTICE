#include <iostream>
#include <fstream>

using namespace std;

//int main()
//{
//	cout << "��ſ� ���α׷��� !!" << endl;
//
//
//	return 0;
//}

int main()
{
	ofstream output;
	output.open("test.txt");
	output << "��ſ� ���α׷���!!" << endl;
	output.close();


	return 0;
}