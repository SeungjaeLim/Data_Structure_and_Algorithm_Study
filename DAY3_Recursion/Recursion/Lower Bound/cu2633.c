#include<stdio.h>

long long int data[100000];

int bsearch(int x, int n);

int main()
{
    int n,k;
    scanf("%d %d", &n, &k);
    for(int i = 0 ; i < n ; i++)
    {
        scanf("%d", &data[i]);
    }
    printf("%d", bsearch(k-1, n) + 1);
    return 0;
}


int bsearch(int x, int n)
{
    int left = -1;
    int right = n;
    while(left + 1 < right)
    {
        int mid = (left + right) / 2;
        if (x >= data[mid])
        {
            left = mid;
        }
        else
        {
            right = mid;
        }
    }
    return right;
}

