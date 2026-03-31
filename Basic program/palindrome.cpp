#include <iostream>
using namespace std;

int main()
{
    char str[100];
    int i = 0, j = 0;

    cout << "Enter string: ";
    cin >> str;

    while(str[j] != '\0')
        j++;

    j = j - 1;

    while(i < j)
    {
        if(str[i] != str[j])
        {
            cout << "Not Palindrome";
            return 0;
        }
        i++;
        j--;
    }

    cout << "Palindrome";

    return 0;
}
