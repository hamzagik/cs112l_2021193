#include <iostream>
#include <string>
using namespace std;

struct birthday
{
    int day;
    string month;
    int year;
};
struct user
{
    int age;
    string name;
    string city;
    birthday birth;
};

int negExp()
{
    int x;
    cin >> x;
    while (x <= 0)
    {
        cout << "Please enter +ve value greater than 0" << endl;
        cin >> x;
    }
    return x;
}
int main()
{
    user u[3];
    int tm, tm2;
    for (int i = 0; i < 3; i++)
    {
        cout << "Enter record of user " << i + 1 << endl;
        cout << "________________________________" << endl;
        cout << "Enter name: ";
        getline(cin, u[i].name);
        cout << "Enter city: ";
        getline(cin, u[i].city);
        cout << "Enter age: ";
        u[i].age = negExp();
        cout << endl;
        cout << "Enter your DOB" << endl;

        cout << "Enter day: ";
        do
        {
            cout << "Enter day between 1 to 31" << endl;
            tm = negExp();

        } while (tm > 32);

        u[i].birth.day = tm;

        cout << "Enter year: ";
        u[i].birth.year = negExp();
        cout << "Enter month: ";
        cin.ignore();
        getline(cin, u[i].birth.month);
        cout << endl
             << endl;
    }
    cout << "________________________________" << endl;
    cout << endl
         << "Enter DOB to Check" << endl;
    birthday b;
    cout << "Enter day: ";
    do
    {
        cout << "Enter day between 1 to 31" << endl;
        tm2 = negExp();

    } while (tm2 > 32);

    b.day = tm2;

    cout << "Enter year: ";
    b.year = negExp();
    cout << "Enter month: ";
    cin.ignore();
    getline(cin, b.month);

    bool found;
    for (int i = 0; i < 3; i++)
    {
        if (u[i].birth.day == b.day && u[i].birth.year == b.year && u[i].birth.month == b.month)
        {
            cout << endl
                 << "_______________________________________________" << endl;
            cout << "Its " << u[i].name << " Birthday .Happy Birth Day" << endl;
            found = true;
            break;
        }
    }
    if (!found)

        cout << "No user found with this birthday" << endl;

    return 0;
}