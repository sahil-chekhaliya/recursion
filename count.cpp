#include<iostream>

using namespace std;

void count(int n)
{//base case
 if (n==0)
 return ;

 //recursive relation (tail recursion)
  count(n-1);

  // process
    cout<<n<<" ";


}

int main()
{
 int n;
 cin>>n;

count(n);

    return 0;
}