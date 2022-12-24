/*#include<bits/stdc++.h>
using namespace std;
int main(){int i;
    int arr[10];
    int n=sizeof(arr)/sizeof(arr[0]);
    for(i=0;i<n;i++)
        cin>>arr[i];
    for(i=0;i<n;i++)
        if(arr[i-1]<arr[i])
           return true ;
        
    return false;
 
}
*/


#include <bits/stdc++.h>
using namespace std;
 

int arraySortedOrNot(int arr[], int n)
{
    
    if (n == 1 || n == 0)
        return 1;
 
    if (arr[n - 1] < arr[n - 2])
        return 0;
 
    return arraySortedOrNot(arr, n - 1);
}
 

int main()
{
    int arr[] = { 20, 23, 23, 45, 78, 88 };
    int n = sizeof(arr) / sizeof(arr[0]);
    if (arraySortedOrNot(arr, n))
        cout << "Yes\n";
    else
        cout << "No\n";
}
