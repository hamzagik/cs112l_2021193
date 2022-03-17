#include <iostream>
using namespace std;

class twoDarray
{
public:
const static int size=5;
int array1[2][2];
int array2[2][2];
int transposearray[size][size];


void initialize()
{
    cout << "Enter elements of first array: ";
    for(int i =0; i<2;i++)
    {
        for(int i=0;i<2;i++)
        {
            cin >> array1[i][j];
        }
    }
    cout << endl;

    cout << "Enter elements of second array: ";
    for(int i=0;i<2;i++)
    {
        for(int i=0;i<2;i++)
        {
            cin >> array2[i][j];
        }
    }
}
void transpose()
{
cout << "The transpose of the matrix is: ";
for(int i=0;i<size;i++)
{
    for(int j=0;j<5;j++)
    {
        transposearray[i][j] = array1[j][i];
        cout << transposearray[i][j] << " ";
    }
    cout << endl;
}
}
void isSymmetry()
{
for(int i=0;i<size;i++)
{
    for(int j=0;j<5;j++)
    {
        transposearray[i][j] = array1[j][i];
        cout << transposearray[i][j] << " ";
    }
}
for(int i=0;i<size;i++)
{
    for(int j=0;j<5;j++)
    {
        if(array2[i][j] == transposearray[i][j])
        {
            cout << "It is a transpose matrix."
        }
        else
        {
            cout << "It is not symmetrical."
            break;
        }
    }
}

}

void multiply()
{

}

void print()
{
    cout << "Enter elements of first array: ";
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<5;j++)
        {
            cout << array1[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Enter elements of second array: "
    for(int i=0;i<size;i++)
    {
        for(int j-0;j<5;j++)
        {
            cout << array2[i][j] << " ";
        }
        cout << endl;
    }
}

};

int main()
{
  twoDarray a;
  a.initialize();
  int o;

    cout << "Press 1- Initialize 2D arrays with random values. ";
    cout << "Press 2- Print values of 2D arrays: ";
    cout << "Press 3- Take transpose of 2D array: ";
    cout << "Press 4- Check if matrix is symmetric or not: ";
    cout << "Press 5- Multiply the 2D arrays: ";
    
}