#include<iostream>
using namespace std;

void matrices(){
	int mat_1[3][3], mat_2[3][3] , result[3][3];
	
	for (int i=0; i<3; i++){
		for(int n=0; n<3; n++){
			mat_1[i][n]=n;
			mat_2[i][n]=n;
			result[i][n]=mat_1[i][n]*mat_2[i][n];
			cout<<"Multiplication of  "<<mat_1[i][n]<<"*"<<mat_2[i][n]<< "   is :  "<<result[i][n]<<endl;
		}
	}
}





int main(){
	matrices();
	return 0;
}
