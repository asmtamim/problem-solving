#include <bits/stdc++.h>
using namespace std;

int  main()
{
    int T, A, B;
    cin >> T;
    int i=T;
    while(i--)
    {
        cin >> A >> B;
        if(A>B) cout << ">" << endl;
        else if(B>A) cout << "<" << endl;
        else cout << "=" << endl;
    }

    return 0;
}
