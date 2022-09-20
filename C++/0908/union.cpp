#include <iostream>

using namespace std;

union data
{
	char cdata[4];
	int idata;
};

int main()
{
	union data d;
	d.idata = 0x01020304;
	for (int i = 0; i < 4; i++)
		printf("0x%02x\n", d.cdata[i]);
	return 0;
}