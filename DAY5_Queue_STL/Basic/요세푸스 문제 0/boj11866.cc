#include<stdio.h>
#include<queue>
#include<string.h>

using namespace std;

int main()
{
    queue <int> josephus;
    queue <int> ans;
    int n, k, human;
    scanf("%d %d", &n, &k);
    for(int i = 0 ; i < n ; i++)
    {
        josephus.push(i+1);
    }
    while(!josephus.empty())
    {
        for(int i = 0 ; i < k-1 ; i++)
        {
            if(josephus.empty())
            {
                break;
            }
            human = josephus.front();
            josephus.pop();
            josephus.push(human);

        }
        if(!josephus.empty())
        {
            ans.push(josephus.front());
            josephus.pop();
        }
    }
    printf("<");
    for(int i = 0 ; i < n - 1; i++)
    {
        printf("%d, ", ans.front());
        ans.pop();
    }
    printf("%d>",ans.front());
    return 0;
}