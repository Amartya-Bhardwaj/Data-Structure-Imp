#include<iostream>
#include<stdlib.h>
#include<algorithm>
using namespace std;

int gcd(int a, int b)
{
    if (a == 0)
       return b;
    if (b == 0)
       return a;
    if (a == b)
        return a;
  
    if (a > b)
        return gcd(a-b, b);
    return gcd(a, b-a);
}

int main(){
	int t,a,b;
	cin>>t;
	for(int i=0; i<t; i++){
		cin>>a>>b;
		if(a == b){
			cout<<"0 0"<<endl;
		}
		else if (b - a == 1)
		{
			/* code */
			cout<<gcd(a,b)<<" 0"<<endl;
		}
		else if (b == 0)
		{
			cout<<a<<" 0"<<endl;
		}
		else if (a == 0)
		{
			cout<<b<<" 0"<<endl;
		}
		
		else if(a > 0 && b > 0){
			int temp = gcd(a,b);
			int count = 0;
			int count2 = 0;
			int x = a, y = b;
			for(int i = 0;i<2;i++){
				switch(i){
					case 0: while(temp >= gcd(a,b)){
						a = a+1;
						b = b+1;
						count ++;
					}
					case 1: while (temp == gcd(a,b))
					{
						x = x - 1;
						y = y - 1;
						count2++;
					}
				}
			}
			if(gcd(a,b) > gcd(x,y)){
				cout<<gcd(a,b)<<" "<<count<<endl;
			}
			else{
				cout<<gcd(x,y)<<" "<<count2<<endl;
			}
		}
	}
	return 0;
}