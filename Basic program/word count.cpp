#include <iostream>
using namespace std;

int main()
{
    char str[200];
    int i = 0, count = 1;

    cout << "Enter sentence: ";
    cin.getline(str, 200);

    while(str[i] != '\0')
    {
        if(str[i] == ' ')
            count++;

        i++;
    }

    cout << "Words = " << count;

    return 0;
}
