#include<iostream>
using namespace std;

void main(){
	int n,c,no;
	c=0;
	no=0;
	for(int i=1; i<=10; i++){
		cout<<"Enter "<<i<<" interger"<<endl;
		cin>>n;
		
		if (n==no){
			c++;
		}
		else if(n<no){
			continue;
		}
		else if(n>no){
			no=n;
			c=1;
		}

	}
	cout<<c<<endl;
	
}