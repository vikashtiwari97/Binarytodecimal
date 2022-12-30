/*Q3 - Given two binary numbers, return the greatest of these numbers in decimal format.
Sample Input:1001 and 0100
Sample Output: 9*/

#include <iostream>

using namespace std;
int main()
{
    int number1;
    int number2;
    cout << "Enter the two binary numbers : ";
    cin >> number1 >> number2;
    int pw = 1;
    int dec1 = 0;
    int dec2 = 0;
    while (number1 > 0)
    { 
        int units_digit = number1 % 10;
        dec1 += pw * units_digit;       // converting number1 to decimal
        number1 /= 10;
        pw *= 2;
    }
    pw = 1;
    while (number2 > 0)
    {
        int units_digit = number2 % 10;
        dec2 += pw * units_digit;        // converting number2 to decimal
        number2 /= 10;
        pw *= 2;
    }
    if (dec1 > dec2) // comparing the decimal numbers dec1 and dec2
    {
        cout << "The greater number is : " << dec1;
    }
    else
    {
        cout << "The greater number is : " << dec2;
    }
    return 0;
}