#include<iostream>
using namespace std;

int main(){
    long long int t;
    cin>>t;
    while(t--){
       long long int n, k;
        cin>>n>>k;
        long long int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        long long int diff = 0;
        for(int i=0; i<n; i++){
            if(arr[i]>k){
                diff += arr[i] - k;
            }
        }
        cout<<diff<<endl;
    }
    return 0;
    
}