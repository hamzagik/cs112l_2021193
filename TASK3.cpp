#include <iostream>
#include <bitset>
#include <iomanip>
using namespace std;

void binary( int x)
{
cout << setw(5) << x << ": "; cout << bitset<16>((int)x);
}
int main()
{
int num1, num2, sum,base;
cout << "Enter base of a number system: ";
cin >> base;
cout << "Enter number 1 with base: ";
cin >> num1;
cout << "Enter number 2 with base: ";
cin >> num2;

binary(num1);
binary(num2);

sum = num1 + num2;

cout << sum;






}


