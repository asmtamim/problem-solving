#include<iostream>
using namespace std;

int main()
{

    int T, num;
    cin >> T;
    while(T--)
    {
        cin >> num;
        int LastDigit = num%10;

        while(num>9){
            num = num/10; //Calculate FirstDigit.
        }

        cout << num + LastDigit << endl;
    }
  
    return 0;
}
