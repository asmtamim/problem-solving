#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,ArraySize,temp,ArrayNum[50];

    cout << "Enter the size of Array: ";
    cin >> ArraySize;
    cout << "Enter Array: ";

    for(a=0; a<ArraySize; a++){
        cin >> ArrayNum[a];
    }
    
    cout << "Sorted Array: ";
    for(a=1; a<ArraySize; a++)
    {
        temp=ArrayNum[a];
        b = a-1;
        while(b>=0 && ArrayNum[b]<temp){
            ArrayNum[b+1]=ArrayNum[b];
            b = b-1;
        }
        ArrayNum[b+1]=temp;
    }

    for(a=0; a<ArraySize; a++){
        cout << ArrayNum[a] << " ";
    }
    
    cout << endl;
    return 0;
}
