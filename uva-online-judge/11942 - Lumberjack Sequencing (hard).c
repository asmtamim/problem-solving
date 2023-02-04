#include<stdio.h>
int main()
{
    int x,y,a,i;
    int arr[10],large,small;

    printf("Lumberjacks:\n");
    scanf("%d",&y);

    for(x=1; x<=y; x++)
    {
        for(a=0; a<10; a++){
            scanf("%d",&arr[a]);
        }
        large=arr[0]; small=arr[1];
        int sum=0;

        if(large>small){
            for(i=0; i<9; i++){
                if(arr[i]>arr[i+1]){
                    sum++;
                }
            }
        }
        else if(small>large){
            for(i=0; i<9; i++){
                if(arr[i]<arr[i+1]){
                    sum++;
                }
            }
        }

        if(sum==9){
            printf("Ordered\n");
        }
        else{
            printf("Unordered\n");
        }
    }
    return 0;
}
