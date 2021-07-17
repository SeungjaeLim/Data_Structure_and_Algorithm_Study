#include <stdio.h>

int main()
{
    char *str = (char *)malloc(sizeof(char)*1000);
    scanf("%s",str);
    printf("%s",str);
}

