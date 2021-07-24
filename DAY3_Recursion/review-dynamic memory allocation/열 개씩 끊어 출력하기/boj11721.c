#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    char *line = (char*)malloc(sizeof(char)*101);
    scanf("%s", line);
    int len_line = strlen(line);
    int is_end = 0;
    int len = len_line / 10;
    if(len_line % 10 == 0)
    {
        len--;
    }
    for(int i = 0 ; i <= len ; i++)
    {
        for(int j = 0 ; j < 10; j++)
        {
            if(*(line + 10 * i + j) == '\0')
            {
                is_end = 1;
                break;
            }
            printf("%c", *(line + 10 * i + j));
        }
        if(is_end)
        {
            break;
        }
        printf("\n");
    }
    free(line);
    return 0;
}
