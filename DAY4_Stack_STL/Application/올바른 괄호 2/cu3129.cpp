#include<stdio.h>
#include<stack>
#include<string.h>

using namespace std;
char par[50000];

int main()
{
    stack<int> a;
    scanf("%s", par);
    int len = strlen(par);
    for(int i = 0 ; i < len; i++)
    {
        if(par[i] == '(')
        {
            a.push(0);
        }
        else
        {
            if(a.empty())
            {
                printf("bad");
                return 0;
            }
            a.pop();
        }
    }
    if(a.empty())
    {
        printf("good");
    }
    else
    {
        printf("bad");
    }
    return 0;
}

