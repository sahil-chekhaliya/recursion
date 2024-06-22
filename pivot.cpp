
#include<iostream>
using namespace std;

int pivot (int a[],int s,int e){
    int mid=s+(e-s)/2;
if(s==e){
return mid;
}
if(a[mid]>=a[0]){
    return pivot(a,mid+1,e);

}
else{
    return pivot(a,s,mid);
}
    
}

int main(){
    int arr[5]={7,9,1,2,3};
    int size=5;
    

cout<<pivot(arr,0,size-1);
    return 0;
}