#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,g,h,i,j,x,y;

    printf("Lumberjacks:\n");

    scanf("%d",&y);
    for(x=1; x<=y; x++)
    {
        scanf("%d %d %d %d %d %d %d %d %d %d",&a, &b, &c,&d,&e,&f,&g,&h,&i,&j);

        if(a>b && b>c && c>d && d>e && e>f && f>g && g>h && h>i && i>j){
            printf("Ordered\n");
        }
        else if (a<b && b<c && c<d && d<e && e<f && f<g && g<h && h<i && i<j){
            printf("Ordered\n");
        }
        else{
            printf("Unordered\n");
        }
    }
    return 0;
}
