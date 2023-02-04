#include<stdio.h>
#include<string.h>
int main()
{
    char ch[1000];
    while(gets(ch))
    {
        int i,flag=0,sum=0;
        for(i=0; ch[i]; i++)
        {
            if(ch[i]>='a' && ch[i]<='z' || ch[i]>='A' && ch[i]<='Z'){
                flag=1;
            }

            else if(((ch[i]>=0 && ch[i]<=64||ch[i]>=91 && ch[i]<=96||ch[i]>=123 && ch[i]<=127) && flag==1)){
                sum=sum+1;
                flag=0;
            }
        }
        printf("%d\n",sum);
    }
    return 0;
}

