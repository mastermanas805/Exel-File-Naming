#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<string.h>
using namespace std;

int power(int x,int y)
{
	for(int i=1;i<y;i++)
	{
		x *=x;
	}
	
	return x;
}

int main() {
    int no,i=0,rem;
    char str[100];
    cin>>no;
    
    //Collecting multiples 
    while(no>0)
    {
    	rem = no%26;
    	
    	if(rem == 0)
    	{
    		str[i++] = 'Z';
    		no = no/26 -1;
		}
		
		else
		{
			str[i++] = 'A' + rem-1 ;
			no = no/26;
		}
	}
	str[i] = '\0';
	
	strrev(str);
	
	cout<<str;
}

