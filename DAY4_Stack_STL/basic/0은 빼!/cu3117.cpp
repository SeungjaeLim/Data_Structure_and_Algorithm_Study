#include<stdio.h>
#include<stack>

using namespace std;

int main()
{
    stack<int> a;
    int n, tmp, sum = 0;
    scanf("%d",&n);
    for(int i = 0 ; i < n; i++)
    {
        scanf("%d", &tmp);
        if(tmp == 0)
        {
            a.pop();
        }
        else
        {
            a.push(tmp);
        }
    }
    while(!a.empty())
    {
        sum += a.top();
        a.pop();
    }
    printf("%d", sum);
    return 0;
}

