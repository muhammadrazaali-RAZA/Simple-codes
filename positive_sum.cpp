#include<iostream>
using namespace std;

void main(){
	int intg,sum;
	sum=0;
	for(int i=1; i<= 10; i++){
		cout<<"Enter "<<i<<" Interger"<<endl;
		cin>>intg;

		while (intg<0){
			cout<<"Try again with positive integer"<<endl;
			cin>>intg;
		}
		sum=intg+sum;
		cout<<"Sum is : "<<sum<<endl;
	}
}
