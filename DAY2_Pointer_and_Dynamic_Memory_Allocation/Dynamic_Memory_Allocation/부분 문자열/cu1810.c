#include<stdio.h>
#include<stdlib.h>
int main()
{
    char *str = (char*)malloc(sizeof(char)*100);
    int a, b;
    scanf("%s", str);
    scanf("%d %d", &a, &b);
    for(int i = a - 1 ; i < b; i++)
    {
        printf("%c", *(str+i));
    }
}

