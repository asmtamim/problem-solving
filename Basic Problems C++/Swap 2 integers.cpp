#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n1, n2, temp;
    cout << "Enter 2 inputs: ";
    cin >> n1 >> n2;

    temp=n1;
    n1=n2;
    n2=temp;

    cout << n1 << " " << n2;

    return 0;
}
