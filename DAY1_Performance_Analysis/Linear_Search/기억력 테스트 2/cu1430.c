#include<stdio.h>
#include<stdlib.h>
int main()
{
    int data, db_cnt, query, query_cnt;
    scanf("%d", &db_cnt);
    int* db = (int *)calloc(sizeof(int),10000001);
    for(int i = 0 ; i < db_cnt ; i++)
    {
        scanf("%d", &data);
        db[data] = 1;
    }
    scanf("%d", &query_cnt);
    for(int i = 0 ; i < query_cnt ; i++)
    {
        scanf("%d", &query);
        printf("%d ",db[query]);
    }
    free(db);
    return 0;
}
