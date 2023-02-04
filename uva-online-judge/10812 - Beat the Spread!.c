#include<stdio.h>
int main()
{
    int x,y;
    int sum,diff;
    int first,second;
    scanf("%d",&y);
    for(x=1; x<=y; x++)
    {
        scanf("%d %d",&sum,&diff);

        if(sum>=diff && (sum+diff)%2==0){

            first=(sum+diff)/2;
            second=(sum-diff)/2;

            printf("%d %d\n",first,second);
        }

        else{
            printf("impossible\n");
        }
    }
    return 0;
}
