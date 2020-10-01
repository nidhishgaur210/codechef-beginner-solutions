#include<iostream>
using namespace std;

int main(){
    long long int l, b;
    cin>>l;
    cin>>b;
    long long int area = l*b;
    long long int peri = 2*(l+b);
    if(area>peri){
        cout<<"Area"<<endl;
        cout<<area;
    }
    else if(area<peri){
        cout<<"Peri"<<endl;
        cout<<peri;
    }
    else if(area==peri){
        cout<<"Eq"<<endl;
        cout<<peri;
    }
    return 0;
}