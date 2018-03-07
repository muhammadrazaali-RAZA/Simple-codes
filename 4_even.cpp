#include<iostream>
using namespace std;

int main(){
	int a,b,c,d;
	for (int i=1000; i<=3000 ; i++){
		a=i%10;
		b=i/10%10;
		c=i/100%10;
		d=i/1000%10;
		if (a%2==0 && b%2==0 && c%2==0 && d%2==0)
			cout<<i<<" ";
	}
	return 0;
}

