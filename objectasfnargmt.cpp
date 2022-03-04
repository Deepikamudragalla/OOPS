#include<iostream>
using namespace std;
class time{
  int hrs;
  int mins;
  public:
  void gettime(int a,int b)
  {
    hrs=a;
    mins=b;
  }
  void puttime(void)
  {
    cout << hrs << "HOURS" << " " << mins << "MINS" << endl;
  }
  void sum(time t1,time t2)
  {
    int x=t1.mins+t2.mins;
    hrs=x/60;
    mins=x%60;
  }
  
  int main()
  {
    time T1,T2,T3;
    T1.gettime(3,2);
    T2.gettime(4,5);
    T3.sum(T1,T2);
    T3.puttime();
  }
