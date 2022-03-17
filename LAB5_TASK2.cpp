#include <iostream>
using namespace std;

class parity
{
private:
int count=0;
int size=0;
int *NoArr;


public:
parity()
{
    NoArr=new int [size];
}
~parity()
{
    cout<<"Destructer called";
}
void print();
bool test();
void Delete(int num);
void put(int num);
};

void parity :: print()
{
    cout<<"Elements = ";
    for(int i=0;i<size;i++)
    {
        cout<<NoArr[i]<<", ";
    }

}

void parity :: Delete(int num)
{
    size--;
    int *temparray = new int[size];
    int index=0;
    for(int i=0;i<size;i++)
    {
        temparray[i]=NoArr[i];
        index++;
    }

    delete [] NoArr;
    NoArr=temparray;
    
}

void parity :: put(int num)
{
    count++;
    size++;
    int *temparray = new int [size];
    int index=0;
    for(int i=0;i<size-1;i++)
    {
        temparray[i]=NoArr[i];
        index++;
    }
    temparray[index]=num;
    delete [] NoArr;
    NoArr=temparray;
}

bool parity :: test()
{
    if (count % 2 == 0)
    {
        return true;
        cout << "Amount of puts is even.";
    }
    else
    {
        return false;
        cout << "Amount of puts is odd.";
    }
}
int main()
{
parity p;

int num=0;
cout << "1.Put elements" << endl;
cout << "2.Print elements." << endl;
cout << "3.Delete Elements." << endl;
cout << "4.Test." << endl;
cout << "5.Exit" << endl;

while(1)
{
cout << "Enter the option you wish to choose.";
cin >> num;
switch(num)
{
    case 1:
    p.put();
    break;
    case 2:
    p.print();
    break;
    case 3:
    p.delete();
    break;
    case 4:
    p.test()
    break;
    case 5:
    break;

}
}



}