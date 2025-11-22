#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter element number of array:";
cin>>n;
int arr[n];
int i,j;
int count=0;
cout<<"Enter elements of array:";
for(i=0;i<n;i++){
    cin>>arr[i];
}
for(i=0;i<n;i++){
    for(j=i+1;j<n;j++){
        if(arr[i]==arr[j]){
            count++;
break;
        }
    }
}
     cout<<"Numbers of dublicate:"<<count;

return 0;
}

