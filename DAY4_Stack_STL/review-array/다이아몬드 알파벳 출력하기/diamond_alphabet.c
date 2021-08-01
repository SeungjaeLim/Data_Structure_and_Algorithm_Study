#include<stdio.h>
int arr[100][100] = {0};
int main()
{
    int n, cnt = 'A', step;
    int row, col;
    scanf("%d", &n);
    row = 1;
    col = n;
    step = n - 1;
    while(step > 0)
    {
        for(int i = 0; i < step; i++)
        {
            arr[row][col] = cnt;
            cnt++; row++; col--;
        }
        for(int i = 0; i < step; i++)
        {
            arr[row][col] = cnt;
            cnt++; row++; col++;
        }
        for(int i = 0; i < step; i++)
        {
            arr[row][col] = cnt;
            cnt++; row--; col++;
        }
        for(int i = 0; i < step - 1; i++)
        {
            arr[row][col] = cnt;
            cnt++; row--; col--;
        }
        arr[row][col] = cnt;
        cnt++; col--;
        step--;
    }
    arr[row][col] = cnt;
    for(int i = 1 ; i <= n*2-1; i++ )
    {
        for(int j = 1 ; j <= n*2-1; j++)
        {
            if(arr[i][j] != 0)
            {
                printf("%c ", arr[i][j]);
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
}
