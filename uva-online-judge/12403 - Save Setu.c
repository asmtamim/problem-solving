#include<stdio.h>
int main()
{
    char str[6];
    int money,total=0;
    int x,y;
    scanf("%d",&y);
    for(x=1; x<=y; x++)
    {
        scanf("%s",&str);
        if(str[0]=='d'){
            scanf("%d",&money);
            total=total+money;
        }

        else if(str[0]=='r'){
            printf("%d\n",total);
        }
    }
    return 0;
}
