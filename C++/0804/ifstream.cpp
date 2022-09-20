#include <iostream>
#include <fstream>

using namespace std;

//int main()
//{
//	char message[80];
//	cin >> message;
//	cout << message << endl;
//
//	return 0;
//}

int main()
{
	ifstream input;
	char message[80];
	input.open("test.txt");
	input >> message;
	cout << message << endl;
	input.close();

	return 0;
}