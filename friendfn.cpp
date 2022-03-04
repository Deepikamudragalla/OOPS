//FRIEND FUNCTIONS TAKE OBJECTS AS ARGUMENTS
#include<iostream>
using namespace std;
class sample
{
  int a;
  int b;
  public :
  void getdata(void)
  {
    cin >> a >> b ;
  }
  friend void avg(int m,int n)
  {
    cout << (m+n)/2 << endl;
  }
};

int main()
{
  sample A;
  A.getdata();
  avg(A.a,A.b);
}
