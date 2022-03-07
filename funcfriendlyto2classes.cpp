#include<iostream>
using namespace std;
class sampleB;
class sampleA{
  int i;
  public :
  void assign(int j)
  {
   i=j;
   }
  friend void maxi(sampleA a,sampleB b);
   
   };
   class sampleB
   {
     int j;
     public :
     void assign(int i)
     {
      j=i;}
       friend void maxi(sampleA a,sampleB b);
   };
   void maxi(sampleA a,sampleB b)
   {
      if(a.i > b.j)
      cout << a.i << endl;
      else
      cout << b.j << endl;
   }
   
   


int main()
{
 sampleA a;
 sampleB b;
  a.assign(5);
  b.assign(2);
  maxi(a,b);
}
