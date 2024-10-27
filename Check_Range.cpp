#include<iostream>
#include<cmath>
using namespace std;
void f(double x){
	double numer = (x-1);
	double den = sqrt((x*x)-2);
	double solution = numer/den;
	cout<<"Range is= "<<solution<<endl;
}
int main()
{
	start:
	double domain;
	string check;
	cout<<"Enter Domain to be Checked: ";
	cin>>domain;
	point:
	if(domain>=-1 && domain<1)
	{
		cout<<"Domain Does Not Lie in The Function.."<<endl;
	}
	else{
		f(domain);
		cout<<"(Press 2. If wanted to try Again)\n (Press'end' to exit) \n = ";
		cin>>check;
		if(check=="end")
		{
			return 0;
		}
		else{
			goto start;
		}
	}
	return 0; 
}
