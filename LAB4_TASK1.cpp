 #include <iostream>
 using namespace std;
 
 class swapp
 {
 int a, b;
 public:
 void setter();
 void swap();
 void display();
 };
 
 void swapp :: setter()
 {
     cout << "Enter the two numbers: ";
     cin >>a>>b;
 }
void swapp:: swap()
{
    a=a+b;
    b=a-b;
    a=a-b;
}
void swapp::display()
{
    cout << "a= " << a << "b= " << b;
}

int main()
{
    swapp s;
    s.setter();
    cout << "Before Swapping: ";
    s.display();
    
    s.swap();
    cout << "After swapping: ";
    s.display();

    return 0;
}