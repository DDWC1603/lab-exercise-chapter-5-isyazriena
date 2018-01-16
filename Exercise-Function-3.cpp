//complete the program below
//its a program to find the average value.
//intan syazriena bt. mohd. shahidon
//a17dw2281

#include <iostream>
using namespace std;

double avg(double m,double n)
{
	/*return the average value of m and n*/

	double result = (m+n)/2;
	return (result);	
}

int main()
{
	double m;
	double n;
    
	cout << "Enter first number" << endl;
	cin >> m;
	cout << "Enter second number" << endl;
	cin >> n;

	cout << "Average is: " << avg(m,n) << endl;
    std::cin.get();	
    
    getchar();
}
