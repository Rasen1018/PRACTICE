#include <stdio.h>

int main()
{
	// 1.메모리 할당(변수선언)
	int i, sum = 0;
	int start, end, tmp;

	// 2. 데이터 입력
	printf("처음 숫자\n");
	scanf("%d", &start);
	printf("끝 숫자\n");
	scanf("%d", &end);

	// 3. 프로세스 처리(누적)

	if (start > end) // 교환 알고리즘
	{
		tmp = start;
		start = end;
		end = tmp;
	}
	for (i = start; i <= end; i++)
	{
		sum += i;
		if (sum > 3000)
			break;
	}

	//if (start > end)
	//{
	//	for (i = end; i <= start; i++)
	//		sum += i;
	//}
	//else
	//{
	//	for (i = start; i <= end; i++)
	//		sum += i;
	//}

	// 4. 출력
	if(sum<=3000) // if(i-1==end)
		printf("%d부터 %d까지의 합은 %d입니다. \n", start, end, sum);
	else
		printf("%d부터 %d까지의 합은 %d입니다. \n", start, i, sum);
	return 0;
}