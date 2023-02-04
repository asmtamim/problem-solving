#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, i;

    cin >> n;
    cout << "Input Array: ";
    int arr[n];

    for(i=0; i<n; i++){
        cin >> arr[i];
    }

    sort(arr, arr+n);

    cout << "Sorted: ";
    for(i=0; i<n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}
