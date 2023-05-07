#include<iostream>
using namespace std;
class Reac{
  int width,hight;
  public:
  Reac(int w,int h){
      width=w;
      hight=h;
  }
  int area(){
      return width*hight;
  }
};
int main(){
    int a,b;
    cout<<"Enter the width ::";
    cin>>a;
    cout<<"Enter the hight::";
     cin>>b;
    Reac r(a,b);
    cout<<"\nArea of reactangle is:: "<<r.area()<<endl;
    return 0;
}
