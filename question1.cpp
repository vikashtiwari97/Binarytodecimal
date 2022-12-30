/*Q1 - Print the sum of the first 5 decimal numbers from 1 to 5 in binary format.
Sample Input:1,2,3,4,5
Sample Output: 1111*/

#include <iostream>

using namespace std;
int main()
{
    int sum = 0;
    for (int i = 1; i <= 5; i++)
    {
        sum = sum + i;
    }
    int answer = 0;
    int pw = 1;
    while (sum > 0)
    {
        int parity = sum % 2;
        answer += pw * parity;
        pw *= 10;
        sum /= 2;
    }
    cout << answer << endl;
    return 0;
}