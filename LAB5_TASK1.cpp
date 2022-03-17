#include <iostream>
using namespace std;

class heater{
int temp;
public:
heater()
{
    temp = 15;
}
void cooler()
{
    temp = temp - 5;
    cout << "Temperature cooled.";
}
void warmer()
{
temp = temp + 5;
cout << "Temperature warmed.";
}
void print()
{
    cout << "Temperature: " << temp << endl;
}
~heater(){};
};


int main()
{
heater h;


    int num=0;
    
    cout << "1.Cooler." << endl;
    cout << "2.Warmer." << endl;
    cout << "3.Temperature." << endl;
    cout << "4.Exit." << endl;
    while(1)
    {
        cout << "Enter option you wish to choose: ";
        cin >> num;
    switch(num)
    {
        
        case 1:
        h.cooler();
        break;
        case 2:
        h.warmer();
        case 3:
        h.print();
        break;
        case 4:  
        break;

    }

    }


}