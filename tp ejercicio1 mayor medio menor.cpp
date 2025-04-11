#include <iostream>
using namespace std;

int main ()
{
	int a,b,c ;
	
	int mayor, medio , menor ;
	cout<<"ingresar a:"<<endl;
	cin>>a;
	cout<<"ingresar b:"<<endl;
	cin>>b;
	cout<<"ingresar c:"<<endl;
	cin>>c;
	
	
	if (a>b)
	{
		if(a>c)
		{
			mayor= a;	
			
		
		}
		else
		{
			mayor=c;
			medio=a;
			menor=b;
				
			
		}
		
			if (b>c)
			{
				medio= b;
				menor=c;
			
			
			
			}
			else
			{
				medio=c;
				menor=b;	
			
			}		
	}
	else
	{
		if(b>c)
		{	
			mayor =b;
		
			if(a>c)
			{
				medio=a;
				menor=c;
				
				
			}
			else
			{
				medio=c;
				menor=a;
				
			}			
		}
		else
		{
			mayor=c;
			medio=b;
			menor=a;
			
		}
		
	}
	
	cout<<"el numero mayor es:"<<mayor<<endl<<"el numero medio es: "<<medio<<endl<<"el numero menor es:"<< menor<<endl;
	
}
