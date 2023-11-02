#include<iostream>
#include<math.h>
using namespace std;
//creating code to find distance between 2 points using parameterized constructor
class snd;
class fst{
  friend void distance(fst ,snd );
  double x,y;
public:
  fst(double a,double b)//using constructor to assign value
  {
    x=a;
    y=b;
  }
  void dis() {
    cout<<"Coordinate of 1st point is ("<<x<<","<<y<<")"<<endl;
  }
};
class snd{
    friend void distance(fst ,snd );
  double x,y;
public:
  snd(double a,double b)//using constructor to assign value
  {
    x=a;
    y=b;
  }
  void dis() {
    cout<<"Coordinate of 2nd point is ("<<x<<","<<y<<")"<<endl;
  }
};
void distance(fst p,snd q)
{
  double xc=(p.x-q.x)*(p.x-q.x);
  double yc=(p.y-q.y)*(p.y-q.y);
  double sum=xc+yc;
  double c=sqrt(sum);
  cout<<"Distance between these 2 points is "<<c;
}
int main(){
  double q,w;
  cout<<"Enter X Coordinate of 1st point"<<endl;
  cin>>q;
  cout<<"Enter Y Coordinate of 1st point"<<endl;
  cin>>w;
  fst p(q,w);
  p.dis();
  cout<<"\nEnter X Coordinate of 2nd point"<<endl;
  cin>>q;
  cout<<"Enter Y Coordinate of 2nd point"<<endl;
  cin>>w;
  snd p1(q,w);
  p1.dis();
  distance(p,p1);
}