#include<stdio.h>
int main()
{
    char str1[10000],str2[10000];
    int i,legnth;

    while(gets(str1))
    {
        legnth=strlen(str1);

        for(i=0; i<legnth; i++){
            str2[i]=str1[i]-7;
        }
        for(i=0; i<legnth; i++){
            printf("%c",str2[i]);
        }
        printf("\n");
    }
    return 0;
}
