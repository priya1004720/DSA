#include <iostream>
using namespace std;

int main()
{
    int n, num, rev = 0, rem, i;

    cout << "Enter how many numbers: ";
    cin >> n;

    for(i = 0; i < n; i++)
    {
        cout << "Enter number: ";
        cin >> num;

        rev = 0;

        while(num > 0)
        {
            rem = num % 10;
            rev = rev * 10 + rem;
            num = num / 10;
        }

        cout << "Reversed = " << rev << endl;
    }

    return 0;
}