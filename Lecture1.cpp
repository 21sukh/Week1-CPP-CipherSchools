#include<iostream>
using namespace std;
int sum(int n1, int n2){
    return n1+n2;
}
int main(){
    int n1,n2;
    cin>>n1>>n2;
    cout<<"Hello World!!"<<endl;
    cout<<"The sum of"<< n1 <<"&" << n2 <<":" << sum(n1,n2);
    return 0;
    
}
