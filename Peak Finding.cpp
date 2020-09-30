#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int max = 0, a;
        for(int i=0; i<n; i++){
            cin>>a;
            if(a>max){
                max=a;
            }
        }
        cout<<max<<endl;
    }
    return 0;
}