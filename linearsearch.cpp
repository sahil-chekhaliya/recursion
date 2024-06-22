#include<iostream>
using namespace std;

int linear(int a[],int n,int k){

 if (n == 0) {
        return -1;
    }
    if(a[0]==k){
        return k;
    }
  return linear(a+1,n-1,k);
}

int main(){

int arr[5]={18,27,46,71,42};
int size=5;
int key=71;

int result=linear(arr,size,key);

 if (result == key) {
        cout << "Element " << key << " found in the array." << endl;
    } else {
        cout << "Element " << key << " not found in the array." << endl;
    }


    return 0;
}