#include <iostream>
using namespace std;

int main()
{
    char str[100];
    int i, len = 0;

    cout << "Enter string: ";
    cin >> str;

    for(i = 0; str[i] != '\0'; i++)
        len++;

    cout << "Reverse = ";

    for(i = len - 1; i >= 0; i--)
        cout << str[i];

    return 0;
}
