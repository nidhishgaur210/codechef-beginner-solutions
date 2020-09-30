#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long int n, amount;
        cin>>n>>amount;
        long long int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        
        for(int i=0; i<n; i++){
            if(arr[i]<=amount){
                amount -= arr[i];
                cout<<"1";
            }
            else{
                cout<<"0";
            }
            
        }
        cout<<endl;
    }
    return 0;
}