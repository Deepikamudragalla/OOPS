/* these functions can only access other static members(functions and data members) of the SAME class
 can be called using class name only */

#include<iostream>
using namespace std;
class sample
{
  int code;
  static int count;
  public :
  void assign(int a)
  {
    code=a;
    count++;
  }
  static void showcount(void)
  {
    cout << "COUNT : " << count << endl;
  }
  
  int sample :: count;
  
  int main()
  {
    sample A,B,C;
    A.assign(5);
    B.assign(6);
    sample :: showcount();
  }
