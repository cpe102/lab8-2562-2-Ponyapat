#include<iostream>
using namespace std;

//Write the function printO() here
double printO(double row,double colum){
	if(row<=0 || colum<=0){
		cout << "Invalid input";
		cout << endl;
	}
	for (int i = 0; i < row; i++){
		for (int j = 0; j < colum; j++)
		{
			cout << "O";
		}
		cout << endl;
	}
	
}

int main(){
	
	printO(2,2);
	cout << "\n";
	
	printO(3,5);
	cout << "\n";	
	
	printO(5,3);
	cout << "\n";	
	
	printO(0,3);
	cout << "\n";	
	
	printO(7,-1);
	cout << "\n";	
	
	return 0;
}
