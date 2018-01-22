//intan syazriena binti mohd. shahidon
//a17dw2281
#include <iostream>
using namespace std;

void masuk_tak();

int main()
{
	masuk_tak();
}

void masuk_tak()
{
	char ans;
	int c=4;
	
	cout<<endl<<"Dia shoot masuk tak? (answer y-yes atau n-tidak"<<endl;
	
	cin >> ans;

	while(c<4){
	if(ans=='n' and ans=='n'){
		cout<<endl<<"cakap lah bebetul, try again: "<<endl;
		cin>>ans;
		}}
		

	if(ans=='n')
	{
		cout<<endl<<"the fudge?!";
		masuk_tak();
	}
	cout<<endl<<"chantek!"<<endl;
}


