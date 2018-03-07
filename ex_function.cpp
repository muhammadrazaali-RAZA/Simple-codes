#include<string>
#include<iostream>
using namespace std;

string ex1(){
	string str;
	cout<<"Give your name: ";
    getline( cin, str );
    return  str;
}

string ex2(){
	string str;
	cout<<"Give your cast: ";
	getline(cin,str);
	return str;
}
int main() {
    cout<<"My name is "<<ex1()<<" and , I am " <<ex2();
	return 0;
}
