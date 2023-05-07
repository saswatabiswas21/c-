#include<iostream>
using namespace std;
class area{
	int circle;
	int rect;
	public:
		void cir(int r){
			circle=3.14*r*r;
			cout<<"Area of circle:: "<<circle<<"\n";
		}
		void rectangle(int a, int b){
			rect=2*(a+b);
			cout<<"Area of rectangle:: "<<rect<<"\n";
		}
	/*	void show(void){
		
		}
		void show2(void){
		
		}*/
};
int main(){
	area c;
	int l,b,r1;
	cout<<"Enter the area:: ";
	cin>>r1;
	c.cir(r1);
	//c.show();
	area r;
	cout<<"Enter the length:: ";
	cin>>l;
	cout<<"Enter the breath:: ";
	cin>>b;
	r.rectangle(l,b);
	//r.show2();
}
