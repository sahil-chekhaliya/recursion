#include<iostream>
using namespace std;

    int sum(int arr[],int n){
          
          if(n==0 || n==1){
            return arr[0];
          }
          
             
          return arr[0]+sum(arr+1,n-1);
          
    }

    /* second approach

    int sum(int a[],int n){
     
     if(n==0){
     return 0;
     }

     if(n==1){
     return a[0];
     }
     return a[n-1]+sum(a,n-1);
    
    }
    
    */

int main(){
    int arr[5];
    int size=5;

    for(int i=0;i<size;i++){
         cin>>arr[i];
    }
    
cout<<endl<<"sum is "<<sum(arr,size);


     
}