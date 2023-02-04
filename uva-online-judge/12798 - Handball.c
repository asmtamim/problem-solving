#include<stdio.h>
int main()
{
    int n,m;
    int x,y,arr[100],sum,notZ;
    while(scanf("%d %d",&n,&m)==2)
    {
        sum=0;
        for(x=1; x<=n; x++){
            for(y=0; y<m; y++){
                scanf("%d",&arr[y]);
            }
            notZ=0;
            for(y=0; y<m; y++){
                if(arr[y]>0){
                    notZ++;
                }
            }
            if(notZ==m){
                sum++;
            }
        }
        printf("%d\n",sum);
    }
    return 0;
}
