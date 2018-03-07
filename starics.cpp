#include<iostream>
using namespace std;

int main()
{
	int i, j, k;
	for(i=6;i>=1;i--){
		for(j=6;j>i;j--){
			cout<<" ";
	}
		for(k=1;k<(i*2);k++){
		cout<<"*";
		}
	cout<<"\n";	
	}
	return 0;
}

