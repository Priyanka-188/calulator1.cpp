#include<iostream>
#include<math.h>
using namespace std;

class simple_calculator
{
protected:
    float a, b;
public:
    void set_number1()
    {
        cout<<"Enter value of a for simple calulation: "<<endl;
        cin>>a;
         cout<<"Enter value of b for simple calulation: "<<endl;
        cin>>b;
    }
    void operation_simple()
    {
        cout<<"THe sum of two numbers is :" << a+b<<endl;
        cout<<"THe sub of two numbers is :" << a-b<<endl;
        cout<<"THe mul of two numbers is :" << a*b<<endl;
        cout<<"THe div of two numbers is :" << a/b<<endl;
    }
};
class scientific_calculator
{
protected:
    float a, b;
public:
    void set_number2()
    {
        cout<<"Enter value of a for scientific calulation: "<<endl;
        cin>>a;
         cout<<"Enter value of b for scientific calulation: "<<endl;
        cin>>b;
    }
    void operation_scientific()
    {
        cout<<"\n\n SCIENTIFIC CALCULATIONS :"<<endl;
        cout<<"THe  cos(a):" << cos(a)<<endl;
        cout<<"THe sin(a) :" << sin(a)<<endl;
        cout<<"THe tan(a) :" << tan(a)<<endl;
        cout<<"THe log(a) :" << log(a)<<endl;
    }
};
class hybrid_calculator : public simple_calculator, public scientific_calculator
    {
    public:
        void display()
        {
            cout<<"\n\nthe calulations are:" <<endl;
            operation_simple();
            operation_scientific();
        }
    };
    int main()
    {
        hybrid_calculator cal;
        cal.set_number1();
        cal.set_number2();
        cal.display();

        return 0;
    }
