#include<iostream>
using namespace std;
int fibo(int n){
    if(n==0 || n==1){
        return n;
    }
    else{
        return fibo(n-1)+fibo(n-2);
    }
}
    int main(){

        int number;
        cout<<"enter the number :";
        cin>>number;

        for(int i=0;i<number;i++){
            cout<<endl<<fibo(i)<<"\t";
        }
        return 0;
    }
