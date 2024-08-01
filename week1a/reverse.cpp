#include<iostream>
using namespace std;
int main(){
    int n,i;
    char t;
    string s;
    cin>>s;
    n=s.length();
    for(i=0;i<n/2;i++){
        t=s[i];
        s[i]=s[n-i-1];
        s[n-i-1]=t;
    }
    cout<<s<<endl;
    return 0;
}