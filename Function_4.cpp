#include <iostream>
using namespace std;

//define necessary functions
void computeCoins(int coinValue, int& num, int& amountLeft);

int main()
{
  int changeAmount;
  int quarters, dimes, pennies;
  char answer = 'y';
  //your code goes here

  while (answer == 'y' || answer == 'Y')
  {
  cout << "Enter the amount of change: ";
  cin >> changeAmount;

  int amountLeft = changeAmount;

  computeCoins(25, quarters, amountLeft);
  computeCoins(10, dimes, amountLeft);
  computeCoins(1, pennies, amountLeft);

  cout << changeAmount << " cents can be given as " <<
  quarters << " quarter(s)" << " " <<
  dimes << " dime(s)" << " " <<
  pennies << " penny(pennies)" << endl;

  cout << "Enter Y or y to continue, any other halts: ";
  cin >> answer;
  }

return 0;
}

//implement functions
void computeCoins(int coinValue, int& num, int& amountLeft)
{
  num = amountLeft/coinValue;
  amountLeft = amountLeft % coinValue;
}
