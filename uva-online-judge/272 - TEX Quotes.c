#include<stdio.h>
int main()
{
    char ch;
    long int count=0;
    while(scanf("%c",&ch)==1)
    {
        if(ch=='"'){
            count=count+1;;

            if(count%2==1){
                printf("``");
            }

            else if(count%2==0){
                printf("''");
            }
        }
        else{
            printf("%c",ch);
        }
    }
    return 0;
}
