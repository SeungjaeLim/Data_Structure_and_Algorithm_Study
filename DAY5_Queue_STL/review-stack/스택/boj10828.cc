#include<stdio.h>
#include<stack>
#include<string.h>

using namespace std;

int main()
{
    stack <int> st;
    int n, param;
    scanf("%d", &n);
    char buf[10] = {0};
    for(int i = 0; i < n; i++)
    {
        scanf("%s", buf);
        if(!strcmp(buf,"push"))
        {
            scanf("%d", &param);
            st.push(param);
        }
        if(!strcmp(buf, "pop"))
        {
            if(st.empty())
            {
                printf("-1\n");
            }
            else
            {
                printf("%d\n", st.top());
                st.pop();
            }
        }
        if(!strcmp(buf, "size"))
        {
            printf("%d\n", (int)st.size());
        }
        if(!strcmp(buf,"empty"))
        {
            printf("%d\n", st.empty());
        }
        if(!strcmp(buf, "top"))
        {
            if(st.empty())
            {
                printf("-1\n");
            }
            else
            {
                printf("%d\n", st.top());
            }
        }
        for(int i = 0 ; i < 10; i++)
        {
            buf[i] = 0;
        }
    }
    return 0;
}