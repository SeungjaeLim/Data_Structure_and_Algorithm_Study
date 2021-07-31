#include<stdio.h>
#include<stack>

using namespace std;

int main()
{
    stack<long long int> cow;
    long long int n, tmp, sum = 0;
    scanf("%d", &n);
    for(int i = 0 ; i < n; i++)
    {
        scanf("%lld", &tmp);
        if(cow.empty())
        {
            cow.push(tmp);
            continue;
        }
        while(!cow.empty()&&cow.top()<=tmp)
        {
            cow.pop();
        }
        sum += cow.size();
        cow.push(tmp);

    }
    printf("%lld", sum);
    return 0;
}

