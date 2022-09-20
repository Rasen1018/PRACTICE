#include <cstdio>

int main()
{
    int N, Testcase, i, j, left = 0, right = 0, result = 0;
    char po[105][105] = { 0 };
    char c;

    scanf("%d", &Testcase);
    scanf("%d", &N);

    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            scanf(" %c", &po[i][j]);
        }
    }

    printf("\n");

    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            printf("%c ", po[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}


//L L H L L L L L
//L L H H L L L L
//L H Y X L Y H Y
//H H L L L L H H
//H L L H H Y H L
//L L Y H L L L L
//L L Y H L L L L
//L L L Y L L L L

