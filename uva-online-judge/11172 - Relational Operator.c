#include<stdio.h>
int main()
{
    int x,y;
    int a,b;
    scanf("%d",&y);
    for(x=1;x<=y;x++){
        scanf("%d %d",&a,&b);
        if(a>b){
            printf(">\n");
        }
        else if(a<b){
            printf("<\n");
        }
        else if(a==b){
            printf("=\n");
        }
    }
    return 0;
}
