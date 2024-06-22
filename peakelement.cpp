#include<iostream>
using namespace std;

int peakElement(int a[],int s,int e){

    int mid=s+(e-s)/2;
    if(s==e){
        return mid;
    }
    if(a[mid]>a[mid+1]){
        return peakElement(a,s,mid);
    }
    else{
        return peakElement(a,mid+1,e);
    }
}

int main(){
    int arr[5]={1,2,3,5,2};
    int size=5;

    cout<<"peak element is "<<peakElement(arr,0,size-1);
}