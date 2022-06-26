//Hoppock, Zachary
//theTrumps.cpp
//9/12/2020
//Answer questions about Donald Trump and his wife
//Version #1
#include <iostream>
using namespace std;

int main()
{
int trump_age;
string wife_name;
string answer;

  cout << "How old do you think Donald Trump is?\nType in a number ";
  cin >> trump_age;
  cout << "You entered:   " << trump_age << endl;

  cout << "What is his wife's name?" << endl;
  cin >> wife_name;
  cout << "You typed, " << wife_name << endl;

  cout << "Do you think she will contribute to our country?  Yes or No?" << endl;
  cin >> answer;
  cout << "You typed, \"" << answer << "\", that's only your opinion.";
  return 0;
}