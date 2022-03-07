#include<iostream>
using namespace std;
class sample
{
    int m;
    public :
    void assign(int i)
    {
        m=i;
    }
    void display(void)
    {
        cout << m << endl;
    }
    void sum(sample,sample);
};
//------------------see the below box carefully-----------------------
void sample :: sum(sample a,sample b)
{
    sample * ap= &a;
    int sample :: * mp =  & sample :: m;
    ap->*mp = (b.*mp)+(ap->*mp);
}
//---------------------------------------------------------------------
int main()
{
    sample a,b;
    a.assign(10);
    a.display();
    b.assign(5);
    b.display();
    a.sum(a,b);
    a.display();
}
