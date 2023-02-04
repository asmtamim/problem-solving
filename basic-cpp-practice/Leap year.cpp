#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T, year;
    cin >> T;

    while(T--)
    {
        cin >> year;

        if(year%400==0)
            cout << "Leap Year!" << endl;

        else if(year%4==0 && year%100!=0)
            cout << "Leap Year!" << endl;

        else
            cout << "Not Leap Year!" << endl;
    }
    return 0;

}
