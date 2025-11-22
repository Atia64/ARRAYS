#include<iostream>
using namespace std;
int main(){
int n1,n2;
int i,j;
cout<<"Enter first element number of array:";
cin>>n1;
int arr1[n1];
cout<<"Enter elements of array:";
for(i=0;i<n1;i++){
    cin>>arr1[i];
}
cout<<"first elements of array:";
for(i=0;i<n1;i++){
    cout<<arr1[i]<<" ";
}
cout<<endl;
cout<<"Enter second element number of array:";
cin>>n2;
int arr2[n2];
cout<<"Enter elements of array:";
for(i=0;i<n2;i++){
    cin>>arr2[i];
}
cout<<"second elements of array:";
for(i=0;i<n2;i++){
    cout<<arr2[i]<<" ";
}
cout<<endl;
int n3=n1+n2;
int merged[n3];
for(i=0;i<n1;i++){
    merged[i]=arr1[i];
}
for(i=0;i<n2;i++){
    merged[n1+i]=arr2[i];
}
cout<<"Merged Array:";
for(i=0;i<n3;i++){
    cout<<merged[i]<<" ";
}
cout<<endl;
for(i=0;i<n3;i++){
    for(j=i+1;j<n3;j++){
        if(merged[i]>merged[j]){
            int temp=merged[i];
            merged[i]=merged[j];
            merged[j]=temp;
        }
    }
}
cout<<endl;
cout<<"Sorted Array:";
for(i=0;i<n3;i++){
    cout<<merged[i]<<" ";
}
return 0;
}
