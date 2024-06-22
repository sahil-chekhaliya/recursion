#include<iostream>
using namespace std;

int lastposition(int a[],int s,int e,int k){

int mid=s+(e-s)/2;

if(s>e){
    return -1;
} 
 if (a[mid] == k) {
        // Check if mid is the last occurrence
        if (mid == 0 || a[mid + 1] != k) {
            return mid; // Found the last occurrence
        } else {
            // Continue searching in the right part of array
            return lastposition(a,mid+1,e,k);
        }
         }
if(a[mid]<k){
return lastposition(a,mid+1,e,k);
}
else{
   return lastposition(a,s,mid-1,k); 
}
    
} 

int main(){

int arr[5]={1,2,5,5,6};
int size=5;
int key=5;
int s=0;

cout<<"last occurence of " <<key<<" is "<<lastposition(arr,s,size-1,key);
    return 0;
}