#include<iostream>
using namespace std;

void main(){
	int avg=0; int sum=0;
	for(int i=1; i<=100; i++)
		sum=i+sum;
	cout<<"sum is = "<<sum<<endl;
	avg=sum/100;
	cout <<"Average is :" <<avg<<endl;
}