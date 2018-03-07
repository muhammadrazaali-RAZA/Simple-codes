#include<iostream>
using namespace std;

int main(){
	float sum=0, num=1.0;
	for(int i=1; i<=100; i++){
		sum=sum+num/i;
	}
	cout<<"Total sum is = "<<sum<<endl;
	return 0;
}
