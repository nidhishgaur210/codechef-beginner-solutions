#include<iostream>
using namespace std;

int main(){
    long long int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        long long int fact = 1;
        for(int i=1; i<=n; i++){
            fact = fact*i;
        }
        cout<<fact<<endl;
    }
    return 0;
}