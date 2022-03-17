#include <iostream>
using namespace std;

#define read(type, var) \
    type var;           \
    cin >> var;         
int sec_high(int a[], int Length);
int sec_low(int a[], int Length);

int main()
{
cout << "Please enter array length: ";
read(int, length);

int *a = new int[length];

cout << "Please enter the elements of the array: ";

for(int i=0; i< length;i++)
{
    cin >> a[i];
}

cout<<"Second Highest: "<< sec_high(a,length)<<endl;
cout << "Second Lowest: " << sec_low(a,length);

}

int sec_high(int a[], int Length)
{
    int max, secondmax;
    if(a[0]> a[1])
    {
        max= a[0];
        secondmax= a[1];
    }

    else
    {
        max = a[1];
        secondmax = a[0];
    }
    for(int i=2;i<Length;i++)
    {
        if(a[i]>max)
        {
            secondmax=max;
            max=a[i];
        }
        else if(a[i]> secondmax && a[i] < max)
        {
            secondmax = a[i];
        }
    }
    return secondmax;
}

int sec_low(int a[], int Length)
{
    int min, secondmin;
    if(a[0] < a[1])
    {
        min= a[0];
        secondmin= a[1];
    }

    else
    {
        min = a[1];
        secondmin = a[0];
    }
    for(int i=2;i<Length;i++)
    {
        if(a[i]<min)
        {
            secondmin=min;
            min=a[i];
        }
        else if(a[i] < min && a[i] > secondmin)
        {
            secondmin = a[i];
        }
    }
    return secondmin;
}
