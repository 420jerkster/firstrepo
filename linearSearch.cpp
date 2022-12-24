#include<iostream>
#include<string.h>
using namespace std;
 
int LinearSearch(int arr[],int length,int key){
    for(int i=0;i<length;i++)
    {
        if(arr[i]==key)
           return i;
    }
    return -1;
 }
 int main(){
         int arr[]={13,15,83,90,33,1,2,3,4,5,6,7,44};
         int length=sizeof(arr)/sizeof(arr[0]);
         int key=14;

         int index=LinearSearch(arr,length,key);
         cout<<index;

         
 }