#include<iostream>
#include<algorithm>
#include<list>
#define boost ios_base::sync_with_stdio(false); cin.tie(NULL);

using namespace std;

int main(){
    boost;
    long long int t;
    cin>>t;
    list<int> l;
    list<int>::iterator itr;
    for(int i=0; i<t; i++){
        int x;
        cin>>x;
        l.push_back(x);
    }
    l.sort();
    for(itr = l.begin(); itr!=l.end(); itr++){
        cout<<*itr<<endl;
    }
    cout<<endl;
    return 0;
    
    
}