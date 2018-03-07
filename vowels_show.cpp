#include<iostream>
#include<string>
using namespace std;

int main ()
{
	string str;
	getline(cin,str);
	int var=str.length();
	int i=0;
	while (i<(var))
	{
		if(str[i]=='a')
		{
			cout<<"i found a int this name"<<endl;
		}
		else if(str[i]=='e')
		{
			cout<<"i found e int this name"<<endl;
		}	
		else if(str[i]=='i')
		{
			cout<<"i found i int this name"<<endl;
		}
		else if(str[i]=='o')
		{
			cout<<"i found o int this name"<<endl;
		}
		else if(str[i]=='u')
		{
			cout<<"i found u int this name"<<endl;
		}
		i++;
	}
	return 0;
}
