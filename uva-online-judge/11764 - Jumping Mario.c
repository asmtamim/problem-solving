#include<stdio.h>
int main()
{
    int x,y,a,b;
    int arr[50],i,j,high,low;
    scanf("%d",&y);
    for(x=1; x<=y; x++)
    {
        high=0; low=0;
        scanf("%d",&b);
        for(a=0; a<b; a++){
            scanf("%d",&arr[a]);
        }
        i=arr[0];
        for(j=1; j<b; j++){
            if(arr[j]>i){
                high=high+1;
                i=arr[j];
            }
            else if(arr[j]<i){
                low=low+1;
                i=arr[j];
            }
        }

       printf("Case %d: %d %d\n",x,high,low);
    }
    return 0;
}
