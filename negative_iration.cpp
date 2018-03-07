#include<iostream>
using namespace std;

void main(){
	int intg,sum;
	sum=0;
	for(int i=1; i<= 10; i++){
		cout<<"Enter "<<i<<" Interger"<<endl;
		cin>>intg;
		

		if (intg<0)
			break;
		sum=intg+sum;
		cout<<sum<<endl;
	}
}