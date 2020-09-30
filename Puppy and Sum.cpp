#include<iostream>
using namespace std;

int sum(int d, int n){
    int ans = 0;
    for(int i=0; i<d; i++){
        ans = (n*(n+1)/2);
        n = ans;
    }
    return ans;
}

int main(){
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    
    int t;
    cin>>t;
    while(t--){
        int d, n;
        cin>>d>>n;
        int final = sum(d, n);
        cout<<final<<endl;
    }
        
    return 0;
}