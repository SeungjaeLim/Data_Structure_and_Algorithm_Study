#include<stdio.h>
int n[100001];
int lsearch(int request, int len);
int main()
{
    int len,query;
    scanf("%d",&len);
    for(int i = 0; i<len ;i++)
    {
        scanf("%d", &n[i]);
    }
    scanf("%d", &query);
    printf("%d", lsearch(query, len));
    return 0;
}
int lsearch(int request, int len)
{
    for(int i = 0 ; i < len; i++)
    {
        if(n[i] == request)
        {
            return i+1;
        }
    }
    return -1;
}


