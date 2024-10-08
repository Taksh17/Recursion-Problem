#include<iostream>
using namespace std;
int powerfun(int n,int p){
    if(p==0){
        return 1;
    }
    return n*powerfun(n,p-1);
}




int main(){
    int n;
    cout<<"enter the number";
    cin>>n;
    int p;
    cout<<"enter the power";
    cin>>p;
    cout<<powerfun(n,p);
    cout<<endl;
    return 0;
}