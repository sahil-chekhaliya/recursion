#include<iostream>
using namespace std;

bool palindrome(string name,int i,int j){
 if(i>j){
    return true;
 }
 if (name[i]==name[j]){
   return palindrome(name,i+1,j-1);
    }
 else{
    return false;
 }

}

int main(){
string a="kook";

bool check=palindrome(a,0,a.length()-1);
if(check){
    cout<<"it is palindrome";
}
else{
    cout<<"it's not palindrome";
}
    return 0;
}
