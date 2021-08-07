#include<stdio.h>
#include<queue>

using namespace std;

int main()
{
    int t;
    int pri[10] = {0};
    queue <int> printer;
    queue <int> idx;
    int n, m, tmp, pass, cnt = 0;
    scanf("%d", &t);
    for(int i = 0 ; i < t; i++)
    {
        pass = 0;
        cnt = 0;
        for(int k = 0 ; k < 10; k++)
        {
            pri[k] = 0;
        }
        while(!printer.empty())
        {
            printer.pop();
            idx.pop();
        }
        scanf("%d %d", &n, &m);
        for(int j = 0 ; j < n; j++)
        {
            scanf("%d", &tmp);
            printer.push(tmp);
            idx.push(j);
            pri[tmp]++;

        }
        while(1)
        {
            pass = 0;
            for(int p = printer.front() + 1; p < 10; p++)
            {
                if(pri[p] != 0)
                {
                    pass = 1;
                }
            }
            if(pass)
            {
                printer.push(printer.front());
                idx.push(idx.front());
                printer.pop();
                idx.pop();
            }
            else
            {
                if(idx.front() == m)
                {
                    cnt++;
                    printf("%d\n", cnt);
                    break;
                }
                else
                {
                    cnt++;
                    pri[printer.front()]--;
                    printer.pop();
                    idx.pop();
                }
            }
        }

    }
    return 0;
}