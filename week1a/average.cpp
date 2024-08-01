#include<iostream>
using namespace std;
int main(){
    int n,i,s=0;
    cin>>n;
    int*a=new int[n];
    for(i=0;i<n;i++){
        cin>>a[i];
        s+=a[i];
    }
    cout<<s/(double)n<<endl;
    return 0;
}