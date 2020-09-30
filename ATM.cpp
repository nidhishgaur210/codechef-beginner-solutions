#include<iostream>
#define boost ios_base::sync_with_stdio(false); cin.tie(NULL);
#include<iomanip>
using namespace std;

int main(){
    boost;
    int x;
    double y, sum=0;
    cin>>x>>y;
    
    if(x%5==0){
        sum = (y - x - 0.5);
    }
    
    else{
        sum = y;
    }
    if(sum<0){
        sum = y;
    }
    cout<<setprecision(2)<<fixed<<sum<<endl;
    
    return 0;
    
    
}