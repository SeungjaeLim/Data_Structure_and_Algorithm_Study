#include<stdio.h>
#include<math.h>

void move(int from, int to);

int main()
{
    int n;
    int cnt;
    scanf("%d",&n);
    cnt = pow(2,n) - 1;
    printf("%d\n", cnt);
}
