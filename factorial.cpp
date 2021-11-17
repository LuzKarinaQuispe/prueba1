#include<iostream>
using namespace std;
int factorial (int);
int main()
{
	int n;
	cout<<"Ingresa un numero"<<endl;
	cin>>n;
	cout<<"factorial es:"<<factorial(n)<<endl;
	return 0;
}
int factorial (int n)
{
	if(n==0)
		return 1;
	else
		return n*factorial(n-1);
}