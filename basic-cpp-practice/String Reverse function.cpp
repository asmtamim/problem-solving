#include<bits/stdc++.h>
using namespace std;
int main()
{
    string text;
    cout << "input: ";
    cin >> text;

  /*
      char text[99];
      gets(text);
      strrev(text);
  */
  
    reverse(text.begin(), text.end());
    cout << "Reversed: " << text << endl;
}
