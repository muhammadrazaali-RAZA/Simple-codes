#include<iostream>
#include <string>
#include <algorithm>
using namespace std;



///Question 18////
int main() {
	int a1,b1,a2,b2,a3,b3,c1,c2,c3;
cout<<"1.colonial, 2.split-entry, 3.single-story Enter Model #: "<<endl;
cin>>a1;
cout<<"Enter base price: "<<endl;
cin>>b1;
cout<<"Enter Sq foot"<<endl;
cin>>c1;
//////////
cout<<"1.colonial, 2.split-entry, 3.single-story Enter Model #: "<<endl;
cin>>a2;
cout<<"Enter base price: "<<endl;
cin>>b2;
cout<<"Enter Sq foot"<<endl;
cin>>c2;
/////////////
cout<<"1.colonial, 2.split-entry, 3.single-story Enter Model #: "<<endl;
cin>>a3;
cout<<"Enter base price: "<<endl;
cin>>b3;
cout<<"Enter Sq foot"<<endl;
cin>>c3;
int x,y,z=0;
x=b1/c1;
y=b2/c2;
z=b3/c3;
int m=min(x,y);
int n=min(y,z);
int p=min(m,n);
int a=p;

if (a==x) 
	cout<<"Colonial(price per foot) "<<a<<endl;
else if (a==y) 
	cout<<"split-entry(price per foot) "<<a<<endl;
else if (a==z) 
	cout<<"single-story(price per foot) "<<a<<endl;
return 0;
}
	 
///// question 17 ////

int main(){
	int in,col,crow;
	char fram;
	cout<<"Enter the lenght and with"<<endl;
	cin>>in;
	cout<<"want to colour enter(1 or 0)"<<endl;
	cin>>col;
	if (col==0)
		col=1;
	else
		col=0.10;
		
	cout<<"want to crown enter(0 or 1)"<<endl;
	cin>>crow;
	if (crow==0)
		crow=1;
	else
		crow=0.35;
			
	cout<<"type of a frame "<<endl;
	cin>>fram;
	
	
	
		
	if ('regular'==fram)
		fram=0.15;
	
	if ('fancy'==fram)
		fram=0.25;
	
	if ('glass'==fram)
		fram=0.07*0.07;
	
	if ('cardboard paper'==fram)
		fram=0.25*0.25;
	int tot;
	tot=fram+col+in+crow;
	cout<<"Your total cost is "<<tot<<"$"<<endl;
	return 0;
}
//////   Question # 19   //////

void body_fat(){
	double a1,a2,a3,a4,a5,b_weight,x,b_fat,B;
	double wrist_measur , waist_measur,hip_measur,forearn_measur;
	 cout <<"Enter you choice  '1' for Women  or '2' for Men :"<<endl;
	 cin >> x;
	 cout << "enter values of b_weight, wrist, and waist measurments in same sequence::"<<endl;
	    cin >> b_weight;
		cin >>wrist_measur ;
		cin >> waist_measur  ;
	 if (x==1)
	 {
	 	cout << " enter the values of hip and forearn measurments in same sequence::"<<endl;
	 	cin >> hip_measur, forearn_measur;
	 	a1=(b_weight* 0.732 + 8.987);
	 	a2=wrist_measur /3.140;
	 	a3=waist_measur * 0.157;
	 	a4=hip_measur * 0.249;
	 	a5=forearn_measur * 0.434;
	 	
	 	B=a1+a2-a3-a4+a5;
	 	b_fat = b_weight -B;
	 	cout << "Body fat for women is :"<<b_fat <<endl;
	 }
	 else if(x==2)
	 {
	 	a1=(b_weight * 1.082 ) + 94.42;
	 	a2=(wrist_measur * 4.15);
	 	B=a1-a2;
	 	b_fat= b_weight - B;
	 	cout << "body fat for Men is :"<< b_fat;
	 }
	 else
	 {
	 	cout <<"Invalid Entry";
	 }

