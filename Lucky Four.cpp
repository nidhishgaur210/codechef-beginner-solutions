#include<iostream>
#include<cstring>
using namespace std;
    
int main()
{
   	int t; char a[1500];
   	cin>>t;
   	while(t--)
   	{
	   	cin>>a;
	   	int count=0;
    	for(int i=0;i<strlen(a);i++)
    	{
	    	if(a[i]=='4'){
	    	  count++;  
	    	} 
    	}
    	cout<<count<<endl;
    }
}