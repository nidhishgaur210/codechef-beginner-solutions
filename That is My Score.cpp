#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[101] = {0};
        for(int i=0; i<n; i++){
            int p, q;
            cin>>p>>q;
            if(q>arr[p] && p<9){
                arr[p]=q;
            }
        }
        int sum = 0;
        for(int i=1; i<9; i++){
            sum += arr[i];
        }
        cout<<sum<<endl;
        
    }
    return 0;
}