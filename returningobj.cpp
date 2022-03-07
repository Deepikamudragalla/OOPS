// returning objects 
/* points to remember :
keep semicolon after class
while declaring mem fn outside first return type and then scope resolution operator
*/
#include<iostream>
using namespace std;
class COMP
{
    int x;
    int y;
    public :
    void assign(int a, int b)
    {
        x=a;
        y=b;
    }
    void display(COMP);
    friend COMP sum(COMP,COMP);
};
void COMP ::  display(COMP c)
{
    cout << c.x << "+i" << c.y << endl;
}
COMP sum(COMP c1,COMP c2)
{
    COMP c3;
    c3.x=c1.x+c2.x;
    c3.y=c1.y+c2.y;
    return (c3);
}

int main()
{
    COMP c1,c2,c3;
    c1.assign(2,3);
    c2.assign(1,4);
    c3=sum(c1,c2);
    c3.display(c3);

}
