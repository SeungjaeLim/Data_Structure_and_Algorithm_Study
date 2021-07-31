#include<stdio.h>
#include<stack>
#include<string.h>

using namespace std;

int main()
{
    stack<char> a;
    char arr[100];
    scanf("%s",arr);
    int len = strlen(arr);
    for(int i = 0 ; i < len; i++)
    {
        a.push(arr[i]);
    }
    while(!a.empty())
    {
        printf("%c", a.top());
        a.pop();
    }
    return 0;
}

