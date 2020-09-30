#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;
        int arr[n];
        int type[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        for(int i=0; i<n; i++){
            cin>>type[i];
        }
        
        int min0 = 100000000;
        int min1 = 100000000;
        
        for(int i=0; i<n; i++){
            if(type[i]==0){
                if(min0>arr[i]){
                    min0 = arr[i];
                }
            }
            else{
                if(min1>arr[i]){
                min1 = arr[i];
            }}
        }
        
        if(k+min0+min1<=100){
            cout<<"yes"<<endl;
        }
        else{
            cout<<"no"<<endl;
        }
        
    }
    return 0;
}