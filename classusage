#include<iostream>//include files
using namespace std;
class person//class definition
{
    char name[30];//if not said anything by default members of class are considered private
    int age;
    public :
     void getdata(void);
     void display(void);
};
void person :: getdata(void)//member func definition
{
    cout << "enter name:";
    cin >> name;
    cout << "enter age:";
    cin >> age;
}
void person :: display(void)
{
    cout << name << endl;
    cout << age << endl;
}
int main()//main function
{
    person p;
    p.getdata();
    p.display();
    return 0;
}
