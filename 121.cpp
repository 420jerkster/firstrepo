#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,x;
    int arr[10]={1,2,3,4,5,6,7,8,9,99};
    cout<<"enter the number to be searched"<<endl;
    cin>>x;
    
    for(int i=0;i<10;i++)
    if(arr[i]==x){
        cout<<i;
    }
}