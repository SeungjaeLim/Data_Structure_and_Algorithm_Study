#include<stdio.h>
#include<stack>

using namespace std;

int main()
{
    stack<char> a;
    stack<char> b;
    int n, cnt = 0;
    char num[200];
    scanf("%d",&n);
    scanf("%s", num);
    for(int i = 0 ; i < n; i++)
    {
        a.push(num[i]);
    }
    while(!a.empty())
    {
        if(cnt%3 == 0 && cnt != 0)
        {
            b.push(',');
        }
        b.push(a.top());
        a.pop();
        cnt++;
    }
    while(!b.empty())
    {
        printf("%c", b.top());
        b.pop();
    }
    return 0;
}

