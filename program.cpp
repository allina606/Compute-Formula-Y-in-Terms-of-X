//Allina Khan
//HW #2
#include <iostream>
#include <cmath>
#include <fstream>
using namespace std;
int main() {
	ofstream cout("c:\\prob1.txt");

	cout << "This is the output of my first program." <<endl;
	cout << "Allina Khan" <<endl<<endl;

	double x,y;
	int negative=0,positive=0,zero=0,bigy=0,bigx=0;

	cout<<"\t\tValues of Y and X"<<endl;
	cout << "X =\t\tY =\t\t\tMessage:"<<endl;
	for(x=-3; x<=4; x+=.5) {
    	y=(9*x*x*x-27*x*x-4*x+12)/(sqrt(3*x*x+1)+abs(5-x*x*x*x));
    	cout <<x<<"\t\t"<<y;
    	if (y>0) {
        	cout<<"   	\t\tY is positive"<<endl;
        	positive++;
    	}
    	else if (y<0) {
        	cout<<"  	\t\tY is negative"<<endl;
        	negative++;
    	}
    	else {
        	cout<<"   	\t\tY is zero."<<endl;
        	zero++;
    	}
    	if (y>bigy) {
        	bigy=y;
        	bigx=x;
    	}
	}
	cout << endl<< "The closest y-value to ten is "<<bigy<<
	" and the corresponding x-value is "<<bigx<<endl;
	bigy=10-bigy;
	cout<<"The y-value is "<<bigy<<" points away from 10."<< endl<<endl;

	cout<<"number of Y values when: "<<endl <<
	"Positive: " << positive << "\tNegative: "<<negative
	<<"\tZero: "<<zero<<endl<<endl;

	cout << "The program is halting.";
	cout.close();
	return 0;
}
