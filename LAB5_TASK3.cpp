#include <iostream>
using namespace std;

class stringType
{
string str1;
string str2;

public:

void setValues(string str1, string str2)
{
    str1= "Good Morning";
    str2= "Good Night";
}
void printValues()
{
    cout << "The string 1 is: " << str1;
    cout << "The string 2 is: " << str2;
}
int maxLength()
{
    int l=0;
    cout << "Input a string: ";
    cin >> str1;
    for(int i-0;str1[i]!='\0';i++)
    {
     l++;
    }
    cout << "length of the string is: " << l << endl;
}
int compare(string str1, string str2)
{
    int i=0, check=0;
    while(str1[i]!='\0' || str2[i]!='\0')
    {
        if(str1[i]!=str2[i])
        {
            check = 1;
            break;
        }
        i++;
    }
    if(check==0)
        cout<<"Strings are Equal" << endl;
    else
        cout<<"Strings are not Equal" << endl;
    cout<<endl;
    return 0;
}
void copy()
{
for(i=0; str1[i]!='\0'; ++i)
{
str2[i]=str1[i];
}
str2[i]= '\0';
cout << "The copied string is: ";
}

string concatenate(string str1, string str2)
{
int result;
result = str1 + str2;
cout << "The resultant string is: " << result << endl;
}

int searchWord(string word)
{

}

int searchChar(char ch)
{

}
};

int main()
{
 str1 s;
 s.setValues();
 s.printValues();
 s.maxLength();
 s.compare();
 s.copy();
 s.concatenate();
 


}