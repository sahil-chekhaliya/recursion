#include<iostream>
using namespace std;
int SumOfN(int n){

 if(n==0){
    return 0;
 }
 

return n+SumOfN(n-1);
}

int main(){
 
 int n;
 cin>>n;

 cout<<endl<<SumOfN(n);
    return 0;
}