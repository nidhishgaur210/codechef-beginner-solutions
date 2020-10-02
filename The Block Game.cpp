#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        long long int number = n;
        long long int reverse = 0;
        long long int last = 0;
        while(n!=0){
            last = n % 10;
            n = n / 10;
            reverse = (reverse * 10) + last; 
        }
        if(reverse==number){
            cout<<"wins"<<endl;
        }
        else{
            cout<<"loses"<<endl;
        }
    }
    return 0;
}