#include<iostream.h>
#include<conio.h>
void main()
{
    int a[100], n, i, sum=0;
    clrscr();

    cout<<"Enter size: ";
    cin>>n;

    for(i=0;i<n;i++)
        cin>>a[i];

    for(i=0;i<n;i++)
        sum += a[i];

    cout<<"Sum = "<<sum;

    getch();
}
