#include<iostream>
using namespace std;
int main(){
int n1,n2;
cout<<"Enter number of element 1:";
cin>>n1;
cout<<"Enter number of element 2:";
cin>>n2;
int arr1[n1],arr2[n2];
cout<<"Enter first element of array:"<<endl;;
int i;
for(i=0;i<n1;i++){
    cin>>arr1[i];
}
cout<<"Enter second element of array:"<<endl;
for(i=0;i<n2;i++){
    cin>>arr2[i];
}
 int n3=n1+n2;
 int arr3[n3];
 for(i=0;i<n1;i++){
    arr3[i]=arr1[i];
 }
 for(i=0;i<n2;i++){
    arr3[n1+i]=arr2[i];
 }

 for(i=0;i<n3;i++){
    cout<<arr3[i];
 }
return 0;
}
