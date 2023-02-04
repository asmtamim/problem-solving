#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cout << "Test Case: ";
    cin >> T;
    while(T--)
    {
        int num, i;
        cout << "Enter a Number: ";
        cin >> num;

        for(i=2; i<=num; i++)
        {
            if(num%i==0)
                break;
        }

        if(i == num)
            cout << num << " is Prime." << endl;
        else
            cout << num << " is not Prime." << endl;
    }
}
