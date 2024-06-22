#include<iostream>
using namespace std;

int firstposition(int a[],int s,int e,int k){

int mid=s+(e-s)/2;

if(s>e){
    return -1;
} 
 if (a[mid] == k) {
        // Check if mid is the first occurrence
        if (mid == 0 || a[mid - 1] != k) {
            return mid; // Found the first occurrence
        } else {
            // Continue searching in the left part of array
            return firstposition(a,s,mid-1,k);
        }
         }
if(a[mid]<k){
return firstposition(a,mid+1,e,k);
}
else{
   return firstposition(a,s,mid-1,k); 
}
    
} 

int main(){

int arr[5]={1,2,5,5,6};
int size=5;
int key=5;
int s=0;

cout<<"first occurence of " <<key<<" is "<<firstposition(arr,s,size-1,key)<<endl;

    return 0;
}