#include<iostream>
using namespace std;
int count =0;
class Alpha{
	public:
		Alpha(){
			count++;
			cout<<"\nNo of object created "<<count;
		}
		~Alpha(){
			cout<<"\nNo. of object destroyed "<<count;
			count--;
		}
};
int main(){
	cout<<"\n\nEnter main\n";
	Alpha a1,a2,a3,a4;{
		cout<<"\n\nEnter block\n";
		Alpha a5;
	}
	{
		cout<<"\n\nEnter Block\n";
		Alpha a6;
	}
	cout<<"\n\nRE-ENTER MAIN\n";
	return 0;
}
