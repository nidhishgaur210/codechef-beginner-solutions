#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m, k;
        cin>>n>>m;
        int arr[n+1] = {0};
        int completed_job[m+1];
        for(int i=0; i<m; i++){
            cin>>k;
            arr[k] = 1;
        }
        
        k=0;
        
        for(int i=1; i<=n; i++){
            if(arr[i] == 0){
                completed_job[k++]=i;
            }
            
        }
        
        for(int i=0; i<n-m; i=i+2){
            cout<<completed_job[i]<<" ";
        }
        cout<<endl;
        
        for(int i=1; i<n-m; i=i+2){
            cout<<completed_job[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}