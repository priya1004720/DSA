#include <iostream.h>
#include <conio.h>

void main()
{
    clrscr();
    int a[10], n, i, min;

    cout << "Enter size: ";
    cin >> n;

    cout << "Enter elements:\n";
    for(i=0;i<n;i++)
        cin >> a[i];

    min = a[0];

    for(i=1;i<n;i++)
    {
        if(a[i] < min)
            min = a[i];
    }

    cout << "Smallest = " << min;

    getch();
}