#include <iostream>
using namespace std;


int main()
{
int num;
cout << "Please enter the values: ";
cin >> num;

int *a = new int[num];

cout << "Please enter the array: ";
for(int i=0; i<num;i++)
{
    cin >> a[i];
}

 cout<<"Initial Array: ";
    for(int i=0;i<num;i++)
    {
    cout<<a[i]<< " ";
    }

    cout<<endl;
    int *resarray = new int[num-1];

    for(int i=0;i<num-1;i++)
    {
    resarray[i]=a[i+1]-a[i];
    }
    
    cout<<"Resultant Array: [ ";
    for(int i=0;i<num-1;i++)
    {
    cout<<resarray[i]<< " ";
    }
    cout<<"]\n";
    

}

