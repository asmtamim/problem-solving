#include<stdio.h>
#include<string.h>
int main()
{
    char str[100000];
    long long i,length,count=0;
    while(gets(str))
    {
        length=strlen(str);
        for(i=0; i<length; i++)
        {
            if(str[i]=='"'){
                count=count+1;
                if(count%2==1){
                    printf("``");
                }
                else if(count%2==0){
                    printf("''");
                }
            }
            else{
                printf("%c",str[i]);
            }
        }
        printf("\n");
    }
    return 0;
}
