#include<iostream>



using namespace std;







	int main () {


	int a, m;
	float b;//b is float because cost of banana is a fraction

	
	//looping bananas in mangoes and then mangoes in apples
	for (a=0; a<=100; a++) {


	for (m=0; m<=100; m++) {


	for (b=0; b<=100; b++) {

	//No. of fruits should be 100 and total cost should also be 100
	if ( a+b+m ==100 && a+(3*m)+(b/2) == 100) {

	cout<<"The number of apples could be "<<a<<endl;
	cout<<"The number of mangoes could be "<<m<<endl;
	cout<<"The number of bananas could be "<<b<<endl;
	cout<<endl;

	} 	
	}
	}
	}






	}
	
