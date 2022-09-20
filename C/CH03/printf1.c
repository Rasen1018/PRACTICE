#include <stdio.h>

int main()
{
    printf("%d%c%c",555,10,13);
    printf("/%d/ \n",555);
    printf("/%10d/ \n",555); //오른쪽 정렬
    printf("/%-10d/ \n",555); //왼쪽 정렬
    printf("/%010d/ \n\n",555); //공백에 0채우기

    printf("/%f/ \n",8192.1978); //기본 소수점 이하 6자리까지 표현
    printf("/%13f/ \n",8192.1978); //13자리 보여주셈
    printf("/%*.*f/ \n",13,2,8192.1978); //*=13, *=2
    printf("/%13.2f/ \n",8192.1978); //소수점 아래 2자리만 표현
    printf("/%-13.2f/ \n\n",8192.1978);

    printf("%c %d %c %d \n",'A','A',97,97);
    printf("%s \n", "C Language...");
    printf("%25s\n", "C Language..."); //정렬기능 포함
    printf("%.5s \n\n", "C Language..."); //5자리 자르기

    printf("%d %o %x \n",67,67,67);
    printf("%d %#o %#x \n",067,067,067); //8진수 표현
    printf("%d %#o %#x \n",0x67,0x67,0x67); //16진수 표현
	printf("%x, %#10x, %#010x \n\n", 0x1234, 0x1234, 0x1234); 

	 return 0 ;
}

