#include<stdio.h>
#include<queue>
#include<string.h>

using namespace std;

int main()
{
    queue <int> deck;
    int n, card;
    scanf("%d", &n);
    for(int i = 0 ; i < n ; i++)
    {
        deck.push(i+1);
    }
    while(deck.size()>1)
    {
        deck.pop();
        if(deck.size() == 1)
        {
            break;
        }
        card = deck.front();
        deck.pop();
        deck.push(card);
    }
    printf("%d", deck.front());
    return 0;
}
