#include <stdio.h>

int main()
{
    int n, i, k;
    int *card = (int*)malloc(sizeof(int)*55);
    scanf("%d", &n);
    for(i = 0; i < n - 1; i++)
    {
        scanf("%d", &k);
        (*(card + k))++;
    }

    for(i = 1; i <= n; i++)
        if (*(card + i) == 0)
        {
            printf("%d", i);
            break;
        }
    return 0;
}

