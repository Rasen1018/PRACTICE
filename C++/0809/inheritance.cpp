#include "str.h"

void StringCharArray::toCharArray(char* str)
{
	int i, len = this->length();
	for (i = 0; i < len; i++)
		*(str + i) = this->at(i);

	*(str + i) = '\0';



}
using namespace std;



int main()
{
	char str[10] = "±§∞≥≈‰";
	//char str[BUFSIZ];
	StringCharArray sca(str);
	sca.toCharArray(str);

	cout << str << endl;




	return 0;
}