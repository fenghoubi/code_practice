#include<iostream>
#include"point.h"
#include"circle.h"
void contest(const Point& p,const Circle& c);
int main()
{
    using namespace std;
    Point p1;
    Circle c1;
    cout<<"输入点的下x,y坐标\n";
    int x,y;
    cin>>x>>y;
    p1.setX(x);
    p1.setY(y);
    cout<<p1.getX()<<" "<<p1.getY()<<"\n";
    cout<<"输入圆的圆心"<<endl;
    int x1,y1,r1;
    cin>>x1>>y1;
    cout<<"输入半径\n";
    cin>>r1;
    c1.setR(r1);
    Point temp;
    temp.setX(x1);
    temp.setY(y1);
    c1.setCenter(temp);
    cout<<c1.getCenter().getX()<<" "<<c1.getCenter().getY()<<"\n";
    contest(p1,c1);
    return 0;

}
void contest(const Point& p,const Circle& c)
{
    using std::cout;
    int x1 =p.getX();
    int x2 =c.getCenter().getX();
    int y2 =c.getCenter().getY();
    int y1 = p.getY();
    int r = c.getR();
    int d1 = ((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
    if(d1 == r)
    cout<<"点在圆上\n";
    else if(d1<r)
    cout<<"点在圆内\n";
    else
    cout<<"点在圆外\n";
}