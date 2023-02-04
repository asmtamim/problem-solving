#include<bits/stdc++.h>
using namespace std;
int main()
{
   int N, firstNum = 0, secondNum = 1, nextNum;

   cin >> N;
   printf("First %d terms of Fibonacci:\n",N);

   for (int i=0; i<N; i++)
   {
      if (i<=1)
        nextNum=i;
      else{
         nextNum = firstNum + secondNum;
         firstNum = secondNum;
         secondNum = nextNum;
      }

      cout << nextNum << " ";
   }

   return 0;
}
