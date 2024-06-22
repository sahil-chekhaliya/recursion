#include<iostream>
#include<string.h>
using namespace std;

void reverse(string name,int i,int j){

if (i>j){
    
    cout<<name;
    return ;
}
swap(name[i],name[j]);
    i++;
    j--;

reverse(name,i,j);

}

int main(){
    string a="sahil";
cout<<a<<" : ";
    reverse(a,0,a.length()-1);

    return 0;
}