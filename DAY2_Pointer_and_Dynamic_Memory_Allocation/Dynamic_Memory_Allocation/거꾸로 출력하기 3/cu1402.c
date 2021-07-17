#include <stdio.h>

int main()
{
    int* a = (int *)malloc(sizeof(int)*10001);
    int k;
    scanf("%d", &k);
    for(int i = 0; i < k ; i++)
    {
        scanf("%d", a + i);
    }
    for(int i = k-1 ; i >= 0 ; i--)
    {
        printf("%d ", *(a + i));
    }
}

