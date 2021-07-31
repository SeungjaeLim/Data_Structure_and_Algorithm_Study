#include<stdio.h>
#include<stack>

using namespace std;

int main()
{
    stack<int> a;
    int n, tmp;
    scanf("%d",&n);
    for(int i = 0 ; i < n; i++)
    {
        scanf("%d", &tmp);
        a.push(tmp);
    }
    while(!a.empty())
    {
        printf("%d ", a.top());
        a.pop();
    }
    return 0;
}

