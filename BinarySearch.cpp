#include<iostream>
using namespace std;

int binarysearch(int a[],int s,int e,int k){
 
 int mid=s+(e-s)/2;

 if(s>e){
    return -1;
 }
 if(a[mid]==k){
    return mid;
 }
 else if(a[mid]<k){
    return binarysearch(a,s=mid+1,e,k);
 }
 else{
   return binarysearch(a,s,e=mid-1,k);
 }

}

int main(){
    int arr[5]={33,27,18,42,71};
    int s=0;
    int e=5-1;
    int key=42;

    cout<<binarysearch(arr,s,e,key);
}