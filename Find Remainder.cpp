#include<iostream>
#define boost ios_base::sync_with_stdio(false); cin.tie(NULL);
#include<iomanip>
using namespace std;

int main(){
    boost;
    int t;
    cin>>t;
    while(t--){
    int a, b;
    cin>>a>>b;
    int rem = a%b;
    cout<<rem<<endl;
    }
    return 0;
    
    
}