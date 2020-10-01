#include<iostream>
using namespace std;

long long int GCD(long long int a, long long int b){
    if(a==0){
        return b;
    }
    return GCD(b%a, a);
}

long long int LCM(long long int a, long long int b){
    return ((a*b)/GCD(a, b));
}

int main(){
    int t;
    cin>>t;
    while(t--){
        long long int a, b;
        cin>>a>>b;
        GCD(a, b);
        LCM(a, b);
        cout<<GCD(a, b)<<" "<<LCM(a, b)<<endl;
    }
    return 0;
}