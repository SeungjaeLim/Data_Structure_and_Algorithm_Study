#include<stdio.h>
int main()
{
    int n[10], d;
    for(int i = 0 ; i < 10 ; i++)
    {
        scanf("%d",&n[i]);
    }
    scanf("%d", &d);
    printf("%d",n[d-1]);
    return 0;
}
