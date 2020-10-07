#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        long long int arr[n];
        long long int arr1[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        for(int i=0; i<n; i++){
            cin>>arr1[i];
        }
        sort(arr, arr+n);
        sort(arr1, arr1+n);
        long long int sum = 0;
        
        for( int i=0; i<n; i++){
            if(arr[i]>arr1[i]){
                sum+=arr1[i];
            }
            if(arr[i]<arr1[i]){
                sum+=arr[i];
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}