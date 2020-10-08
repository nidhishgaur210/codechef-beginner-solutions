#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long int n, k;
        cin>>n>>k;
        long long int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        long long int sum = 0;
        for(int i=0; i<n; i++){
            sum += arr[i];
        }
        long long int ans = sum % k;
        cout<<ans<<endl;
    }
    return 0;
}