#include<stdio.h>

void hanoi(int n, int from, int to, int via);

int main()
{
    int n;
    scanf("%d",&n);
    hanoi(n, 1, 3, 2);
}

void hanoi(int n, int from, int to, int via)
{
    if(n == 1)
    {
        printf("Disk %d : %c to %c\n", n, from + 'A' - 1, to + 'A' - 1);
    }
    else
    {
        hanoi(n-1, from, via, to);
        printf("Disk %d : %c to %c\n", n, from + 'A' - 1, to + 'A' - 1);
        hanoi(n-1, via, to, from);
    }
    return;
}

