// input 1. Test case의 갯수
//		 2. 바둑판의 크기 N
//		 3. n개씩 n줄로 알이 표시

#include <cstdio>
int main(void) {
	int AnswerN;
	int N = 10;
	int t;

#if 1
	scanf("%d", &t);

	do {
		scanf("%d", &N);
	} while (8 > N || 100 < N);

	int test_case, i, j;
	char go = 'L';
	for (test_case = 1; test_case <= t; test_case++)
	{
		for (i = 0, AnswerN = 0; i < N; i++)
		{
			for (j = 0; j < N; j++) {
				printf("%c ", go);
				AnswerN += go % 75;
			}
			printf("\n");

		}
		printf("\n");
		printf("#%d %d\n", test_case, AnswerN);
		printf("*************************\n");

		if (test_case < t)
			printf("%d\n", N);
		else;
	}

	return 0;
}

#else
	scanf("%d", &t);

	do {
		scanf("%d", &N);
	} while (8 > N || 100 < N);

	int test_case, i, j;
	char go = 'L';
	for (test_case = 1; test_case <= t; test_case++)
	{
		for (i = 0, AnswerN = 0; i < N; i++)
		{
			for (j = 0; j < N; j++) {
				AnswerN += go % 75;
			}
		}
		printf("#%d %d\n", test_case, AnswerN);
	}

	return 0;
}
#endif

//L L H L L L L L
//L L H L L L L L
//L L Y L L L L L
//H H X L L L H H
//L L L L L L L L
//L L Y L L L L L
//L L Y L L L L L
//L L L L L L L L
//
//L L H L L L L L
//L L H H L L L L
//L L Y H L L L L
//H H L L L L H H
//H H L X H Y H L
//L L Y H L L L L
//L L Y H L L L L
//L L L Y L L L L
//
//L L H L L L L L
//L L H H L L L L
//L H Y X L Y H Y
//H H L L L L H H
//H L L H H Y H L
//L L Y H L L L L
//L L Y H L L L L
//L L L Y L L L L