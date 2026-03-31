#include <iostream>
using namespace std;

int main()
{
    int a[10], n, i, max;

    cout << "Enter size: ";
    cin >> n;

    cout << "Enter elements:\n";
    for(i=0;i<n;i++)
        cin >> a[i];

    max = a[0];

    for(i=1;i<n;i++)
    {
        if(a[i] > max)
            max = a[i];
    }

    cout << "Largest = " << max;

    return 0;
}
