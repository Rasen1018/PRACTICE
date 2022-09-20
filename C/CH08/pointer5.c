#include <stdio.h>

//void ConvertString(char ptr[30]);
void ConvertString(char* ptr);

int main()
{
	char msg[30] = "Hello World.";

	printf("before msg: %s \n", msg);
	ConvertString(msg);
	printf("after msg: %s \n", msg);


	return 0;
}

//대소문자 변환
void ConvertString(char *ptr)
//void ConvertString(char ptr[30])
//void ConvertString(char ptr[])
{
	printf("ptr size: %d \n", sizeof(ptr));
	while (*ptr)
	{

			if (*ptr >= 'A' && *ptr <= 'Z')
				*ptr += 32;
			else if (*ptr >= 'a' && *ptr <= 'z')
				*ptr -= 32;

			*ptr++;
		
	}
}