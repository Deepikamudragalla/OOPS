/* nesting of member functions : the member function can call other member function directly without using dot operator */

#include<iostream>
using namespace std;
class set{
  int m;
  int n;
  public :
  void getdata(void);
  void putdata(void);
  int  greater(void);
};

void set :: getdata(void)
{
  cin >> m >> n;
}
void set :: putdata(void)
{
  cout << greater() << endl;
}
int set :: greater(void)
 {
   if(m>=n)
   return m;
  else
    return n;
}
int main()
{
    set A;
  A.getdata();
  A.putdata();
}
     
     
      
