#include<stdio.h>
#include<string.h>
int main()
{
    int length,i=1;
    char str[50];
    for(;;i++){
        gets(str);
        length=strlen(str);
        if(length==4){
            printf("Case %d: Hajj-e-Akbar\n",i);
        }
        else if(length==5){
            printf("Case %d: Hajj-e-Asghar\n",i);
        }
        else if(!strcmp(str, "*")){
            break;
        }
    }
    return 0;
}
