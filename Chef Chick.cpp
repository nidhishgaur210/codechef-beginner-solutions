#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        long long int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        
        int min = arr[0];
        for(int i=0; i<n; i++){
            if(arr[i]<min){
                min = arr[i];
            }
        }
        cout<<min<<endl;
    }
    return 0;
}