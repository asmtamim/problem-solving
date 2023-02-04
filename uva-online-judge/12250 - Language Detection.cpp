#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    for(int t=1; ;t++)
    {
        cin>>s;
        if(s=="#") break;
        else if(s=="HELLO") printf("Case %d: ENGLISH\n",t);
        else if(s=="HOLA") printf("Case %d: SPANISH\n",t);
        else if(s=="HALLO") printf("Case %d: GERMAN\n",t);
        else if(s=="BONJOUR") printf("Case %d: FRENCH\n",t);
        else if(s=="CIAO") printf("Case %d: ITALIAN\n",t);
        else if(s=="ZDRAVSTVUJTE") printf("Case %d: RUSSIAN\n",t);
        else printf("Case %d: UNKNOWN\n",t);
    }
    return 0;
}
