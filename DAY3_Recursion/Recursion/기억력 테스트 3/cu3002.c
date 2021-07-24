#include<stdio.h>

int n[1000001];
int m[100001];

int bsearch(int request, int left, int right);

int main()
{
    int data, query;
    scanf("%d", &data);

    for(int i = 0; i < data; i++)
    {
        scanf("%d", &n[i]);
    }

    scanf("%d", &query);
    for(int i = 0; i < query; i++)
    {
        scanf("%d", &m[i]);
    }
    for(int i = 0; i < query; i++)
    {
        printf("%d ", bsearch(m[i],0,data-1));

    }
    return 0;
}

int bsearch(int request, int left, int right)
{
    int mid = (left + right)/2;
    if(left > right)
    {
        return -1;
    }
    if(n[mid] == request)
    {
        return mid+1;
    }
    if(n[mid] < request)
    {
        return bsearch(request, mid+1, right);
    }
    else
    {
        return bsearch(request, left, mid-1);
    }
}

