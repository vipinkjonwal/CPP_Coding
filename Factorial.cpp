// factorial of n


#include<iostream>
using namespace std;
int main()
{
    int n,k=1;
    cin>>n;
    for(int i=1;i<=n;i++){
        k=k*i;
    }
    cout<<k;
}
