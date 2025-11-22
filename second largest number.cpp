#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter element number of array:";
cin>>n;
int arr[n];
int i,j;
cout<<"Enter elements of array:";
for(i=0;i<n;i++){
        cin>>arr[i];
}
for(i=0;i<n;i++){
    for(j=i+1;j<n;j++){     //sort(arr,arr+n) ascending order a sajabe
       if(arr[i]>arr[j]){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
       }
    }
}
cout<<"sorted array:";
for(i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
cout<<endl;
cout<<"Second largest number:";
    cout<<arr[n-2];

return 0;
}
