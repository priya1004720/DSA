#include <iostream>
using namespace std;

int main()
{
    char str[100];
    int i = 0, v = 0, c = 0;

    cout << "Enter string: ";
    cin >> str;

    while(str[i] != '\0')
    {
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||
           str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
            v++;
        else
            c++;

        i++;
    }

    cout << "Vowels = " << v << endl;
    cout << "Consonants = " << c;

    return 0;
}
