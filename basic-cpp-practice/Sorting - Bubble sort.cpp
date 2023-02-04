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

    for(a=0; a<ArraySize-1; a++)
    {
        for(b=0; b<ArraySize-1; b++)
        {
            if(ArrayNum[b+1] < ArrayNum[b])
            {
                temp = ArrayNum[b];
                ArrayNum[b] = ArrayNum[b+1];
                ArrayNum[b+1] = temp;
            }
        }
    }

    for(a=0; a<ArraySize; a++)
    {
        cout << ArrayNum[a] << " ";
    }
    cout << endl;
    return 0;
}
