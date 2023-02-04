#include<bits/stdc++.h>
using namespace std;
int main()
{
    char text[1000];
    cout << "String: ";
    gets(text);
    int length=strlen(text);

    int flag=0, words=0;
    for(int i=0; i<=length; i++)
    {
        if((text[i]>='a' && text[i]<='z') || (text[i]>='A' && text[i]<='Z'))
        {
            flag=1;
        }

        if((text[i]==' ' && flag==1) || (text[i]=='\0' && flag==1))
        {
            words++;
            flag=0;
        }
    }
    cout << "How many words? : " << words << endl;

    return 0;
}
