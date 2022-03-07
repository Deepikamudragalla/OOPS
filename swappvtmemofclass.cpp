/* swapping private data of classes :
->this is against data hiding principle
->should be done only when its absolutely necessary
->objects are passed through reference into friend fns;
*/
#include<iostream>
using namespace std;
class B;
class A
{
    int a;
    public :
    
        void display(void)
        {
            cout << "A : " << a << endl;        
            
        }
        void assign(int x)
        {
            a=x;
        }
        friend void swap(A &,B &);
    
};
class B 
{
    int b;
    public :
    
        void display(void)
        {
            cout << "B : " << b << endl;        
            
        }
        void assign(int y)
        {
            b=y;
        }
        friend void swap(A &,B &);
    
};

void swap(A & p,B & q)
{
    int t;
    t=p.a;
    p.a=q.b;
    q.b=t;
}

int main()
{
    A m;
    B n;
    m.assign(8);
    m.display();
    n.assign(9);
    n.display();
    swap(m,n);
    m.display();
    n.display();
}
