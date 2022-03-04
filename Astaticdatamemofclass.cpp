/*static members of class : ->data members of a class can be declared as static 
                            ->similar to static variables in C.
                            PROPERTIES :
                            *initialised to 0 when FIRST OBJECT of class is created,no other initializations permitted
                            *same copy of variable for all objects of that class 
                            *present in class,but lifetime is entire program
                            *generally used when values common for entire class
                              eg : can be used for keeping a count of num of objects of a given class */

//PROGRAM :

#include<iostream>
using namespace std;
class sample
{
  static int count ;
  int n;
  public:
  void assign(int a)
  {
    n=a;
    ct++;
  }
  void getct(void)
  {
    cout << "COUNT : " << ct << endl;
  }
};

int sample :: count ;  //definition of static data member 
int main()
{
  sample a,b,c;
  a.getcount();
  b.getcount();
  c.getcount();
  a.assign(10);
  b.assign(20);
  c.getcount();
}

