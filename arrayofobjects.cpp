// array of objects in the class
#include<iostream>
using namespace std;
class employee
{
  char name[30];
  flaot age;
  public :
  void getdata(void);
  void putdata(void);
};

void employee :: getdata(void)
{
  cin >> name;
  cin >> age;
}

void employee :: putdata(void)
{
  cout << "NAME : "  << name << endl;
  cout << "AGE  : "  << age << endl;
}

int main()
{
  employee company1[3];
  for(int i=0;i<3;i++)
    company[i].getdata();
  for(int i=0;i<3;i++)
    company[i].putdata();
}
  
