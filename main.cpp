#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main() 
{

  int age = 0;

  cout << "What is your age?: ";
  cin >> age;

  // condition determines if you are old enough to ride the roller coaster

  if (age >= 7)
  {
    cout << "You are old enough! Yay!" << endl;
  }
  if (age < 7)
  {
    cout << "You are too young! Sorry!" << endl;
  }

  int height = 0;

  cout << "\nWhat is your height in inches? ";
  cin >> height;

  // condition determines if you are tall enough to ride the roller coaster

  if (height >= 48)
  {
    cout << "You are tall enough! Yay!" << endl;
  }
  if (height < 48)
  {
    cout << "Maybe next time champ!" << endl;
  }

  return 0;
}