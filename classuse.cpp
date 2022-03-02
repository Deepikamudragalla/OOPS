#include<iostream>
using namespace std;
class item{
  int num;
  float cost;
  public :
  void getdata(int a,float b);
  void putdata()
  {
    cout << "NUM : " << num << endl;
    cout << "COST : " << cost << endl;
    
  }
};

void item :: getdata(int a, float b)
{
  num=a;
  cost=b;
}
int main()
{
  item A;
  A.getdata(6,0.35);
  A.putdata();
}
