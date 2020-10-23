#include<iostream>
#include<string>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int count = 0;
        int n = s.size();
        for(int i=0; i<n-1; i++){
            if((s[i]=='x' && s[i+1]=='y') || (s[i]=='y' && s[i+1]=='x')){
                count++;
                i++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}