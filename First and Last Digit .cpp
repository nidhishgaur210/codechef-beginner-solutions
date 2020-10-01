#include<iostream>
using namespace std;

int find_digit(long long int n){
    long long int sum = 0;
    long long int last = n%10;
    while(n>=10){
        n = n/10;
    }
    sum = n + last;
    return sum;
}

int main(){
    long long int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        cout<<find_digit(n)<<endl;
        
    }
    return 0;
}