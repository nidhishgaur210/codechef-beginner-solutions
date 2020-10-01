#include<iostream>
using namespace std;


int main(){
    long long int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        long long int last = n % 10;
        if(last==5){
            cout<<1<<endl;
        }
        else if(last==0){
            cout<<0<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
    return 0;
}