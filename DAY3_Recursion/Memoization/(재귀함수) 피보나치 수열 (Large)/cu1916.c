#include<stdio.h>
long long int mem_fibo[201] = {0, };
long long int fibo(int n);
int main()
{
    int n;
    scanf("%d", &n);
    printf("%d", fibo(n));
}
long long fibo(int n)
{
    if(mem_fibo[n] != 0)
    {
        return mem_fibo[n];
    }
    if(n == 1 || n == 2)
    {
        mem_fibo[n] = 1;
        return 1;
    }
    mem_fibo[n] = (fibo(n-1) % 10009 + fibo(n-2) % 10009) % 10009;
    return mem_fibo[n];
}
