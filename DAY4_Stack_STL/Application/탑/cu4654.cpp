#include<stdio.h>
#include<stack>

using namespace std;
long long int hi[500000] = {0};
long long int ans[500000] = {0};

int main()
{
    stack<long long int> tower;
    stack<long long int> tower_tmp;
    long long int n, tmp, sum = 0;
    scanf("%lld", &n);
    for(long long int i = 0 ; i < n; i++)
    {
        scanf("%lld", &hi[i]);
    }
    tower.push(0);
    for(long long int i = 1; i < n; i++)
    {
        while(!tower.empty() && hi[tower.top()] <= hi[i])
        {
            tower.pop();
        }
        if(tower.empty())
        {
            ans[i] = 0;
        }
        else
        {
            ans[i] = tower.top() + 1;
        }
        tower.push(i);
    }
    for(int i = 0 ; i < n ; i++)
    {
        printf("%d ", ans[i]);
    }
    return 0;
}

