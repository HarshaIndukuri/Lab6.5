#include<iostream>



using namespace std;

//First function
	int ask (int& a) {

	cout<<"How many pairs of shoes did you sell this week? ";
	cin>>a;
	}


//Second function
	int hourly (int& b) {
	int sal = 280 + (b*0.1*225);
	return (sal);
	} 

//Third function 
	int com (int& c) {
	int sal2 = (20*c) + (c*0.2*225);
	return (sal2);
	}













	int main () {


	int x, y, z;

	//Calling the functions	
	
	ask (x);
	
	y = hourly (x);

	z = com (x);

	//Giving output to the users
	cout<<"The first option gives 600 rupees per week. "<<endl;
	cout<<"The second option gives "<<y<<" rupees per week. "<<endl;
	cout<<"The third option gives "<<z<<" rupees per week. "<<endl;
	cout<<endl;


	//Conditions to find best salary
	
	if (y>600 && y>z) {

	cout<<"The best option is the second one. You get "<<y<<" rupees per week. "<<endl;

	}


	if (600>y && 600>z) {

	cout<<"The best option is the first one. You get 600 rupees per week. "<<endl;
	}


	if (z>600 && z>y) {
	cout<<"The best option is the third one. You get "<<z<<" rupees per week. "<<endl;

	}






















}
	

