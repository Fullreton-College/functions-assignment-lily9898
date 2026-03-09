#include <iostream>
#include <cstdlib>
using namespace std;

/* Define your function here */
string CoinFlip()
{
   int randomValue = rand() % 2;

   if (randomValue == 1)
   {
      return "Heads";
   }

   else
   {
      return "Tails";
   }
}

int main()
{
   // Add more variables as needed
   int TimesCoinFlip;

   srand(2);  // Unique seed

   /* Type your code here */
   cout << "Enter the desired number of coin flips: ";
   cin >> TimesCoinFlip;

   for (int i = 0; i < TimesCoinFlip; i ++)
   {
      cout << CoinFlip() << " ";
   }
   cout << endl;

   return 0;
}