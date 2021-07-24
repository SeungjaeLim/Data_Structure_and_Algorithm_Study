#include<stdio.h>

void hanoi(int n, int from, int to, int via);

int cnt = 0;

int main()
{
    int n;
    scanf("%d",&n);
    hanoi(n, 1, 3, 2);
    printf("%d", cnt);
}

void hanoi(int n, int from, int to, int via)
{
    if(n == 1)
    {
        cnt++;
    }
    else
    {
        hanoi(n-1, from, via, to);
        cnt++;
        hanoi(n-1, via, to, from);
    }
    return;
}

