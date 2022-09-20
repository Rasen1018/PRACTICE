#include <stdio.h>

int main()
{
	char ch;           //A
	short int num1;    //100
	int num2;          //200
	long int num3;     //300
	float f_num;       //1.1
	double d_num;      //5.2

	printf("input short int ? ");
	scanf("%hd%*c", &num1);

	//getchar();

	printf("input char ? ");
	scanf(" %c", &ch); //"_%c" -> 공백지정자 -> 한 문자를 받기전에 버퍼를 검사함

	printf("input  int ? ");
	scanf("%d", &num2);

	printf("input long  int ? ");
	scanf("%ld", &num3);
	
    printf("input float ? ");
	scanf("%f", &f_num);

    printf("input double ? ");
	scanf("%lf", &d_num);

	printf("ch: %c, num1 : %hd, num2 : %d, num3: %ld, f_num : %f , d_num : %lf \n",
		                       ch, num1, num2, num3, f_num, d_num );

	return 0 ;
}
