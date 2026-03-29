#include <iostream>
using namespace std;

int main()
{
    char str[100];
    int i = 0;

    cout << "Enter string: ";
    cin >> str;

    while(str[i] != '\0')
    {
        i++;
    }

    cout << "Length = " << i;

    return 0;
}