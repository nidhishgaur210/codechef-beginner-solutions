#include<iostream>
using namespace std;

int max(long long int a, long long int b){
    if(a>b){
        return a;
    }
    return b;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        long long int a, b;
        cin>>a>>b;
        long long int sum = a + b;
        cout<<max(a, b)<<" "<<sum<<endl;
    }
    return 0;
}