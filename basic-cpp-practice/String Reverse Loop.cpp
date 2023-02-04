#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,length;
    char text[99],revs[99];

    cout << "input: ";
    gets(text);
    length=strlen(text);

    for(a=0,b=length-1; a<length ; a++,b--)
    {
        revs[b]=text[a];
    }
    // revs[b]='\0';

    cout << "Reversed: " << revs << endl;
    return 0;
}
