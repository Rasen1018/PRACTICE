#include <iostream>
extern char* input();
extern void print(char*);

char* input()
{
	//char *s = (char*)malloc(sizeof(char)*BUFSIZ);
	char s[BUFSIZ];
	scanf("%s", s);
	return s;
}

void print(char* s)
{
	printf("%s\n", s);
}

int main()
{
	char* s = input();
	print(s);
	return 0;
}