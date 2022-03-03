#include<iostream>
using namespace std;
const int n = 10;
class shoppinglist
{
    int cost[n];
    int id[n];
    int ct=0;
    public:
    void display(void);
    void CNT(void)
    {
        ct=0;
    }
    void getdata(void);
    void remove(void);
};
void shoppinglist :: display()
{
    for(int i=1;i<=ct;i++)
    {
        cout << "cost of " << i << "th = " << cost[i-1] << endl;
        cout << "id of " << i << "th = " << id[i-1] << endl;
        
    }
}
void shoppinglist :: getdata()
{
    cout << "enter cost : ";
    cin >> cost[ct];
    cout << "enter id : ";
    cin >> id[ct];
    ct++;
}
void shoppinglist :: remove()
{
    cout << "enter id to be removed : ";
    int a;
    cin >> a;
    for(int i=0;i<ct;i++)
    {
       if(id[i]==a)
       cost[i]=0;
    }
    ct--;
}
int main()
{
    shoppinglist order;
    order.CNT();
    int x;
    do{
         cin >> x;
         switch(x)
         {
             case 1: order.getdata();
                      break;
             case 2 : order.remove();
                      break;
             case 3 : order.display();
                      break;   
             case 4 : break;
             default : cout << "WRONG I/p";    
         }
    }while(x!=4);
}
