#include <iostream>
using namespace std;

int main()
{
    int n, num, i, even = 0, odd = 0;

    cout << "Enter how many numbers: ";
    cin >> n;

    for(i = 0; i < n; i++)
    {
        cout << "Enter number: ";
        cin >> num;

        if(num % 2 == 0)
            even++;
        else
            odd++;
    }

    cout << "Even = " << even << endl;
    cout << "Odd = " << odd;

    return 0;
}