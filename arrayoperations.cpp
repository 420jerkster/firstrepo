#include<bits/stdc++.h>
using namespace std;
int MAX(int arr[],int length){
    int max=arr[0];
    int i;
    
    for(i=1;i<length;i++)
        if(arr[i]>max)
           max=arr[i];

    return max;
    }

int main(){
    int arr[]={12,3,4334,5,34,45,4,3,43,0,54,3,4343,554,223,};
    int length=sizeof(arr)/sizeof(arr[0]);
    cout<<MAX(arr,length);
    return 0;
}