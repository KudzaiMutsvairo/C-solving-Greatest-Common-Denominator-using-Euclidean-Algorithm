#include<iostream>

using namespace std;

void gcd(int a, int b);

int main()
{
	std::cout << "type in the values" <<endl;
	int valA, valB;
	std::cin>>valA;
	std::cin>>valB;
	gcd(valA, valB);
}

void gcd(int a, int b)
{
	int x = a;
	int y = b;
	std::cout << "gcd( "<<b<<", "<<a<<" Mod "<<b<< ")"<<endl;
	if(x<y)
	{
		std::cout << "Error a should be greater than b"<<endl;
	}
	else
	{
		if(y != 0){
			gcd(y, x%y);
			
		}else{
			std::cout << x <<endl;
		}
	}
}
