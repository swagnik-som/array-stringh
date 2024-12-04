#include<iostream>
using namespace std;
struct Array{
int A[20];
int size;
int length;
};
void display(struct Array arr){
int i;
for(i=0;i<arr.length;i++){
    cout<<arr.A[i]<<endl;
}
}
int get(struct Array arr,int index){
if(index>=0 && index<arr.length){
    return arr.A[index];
}
return -1;
}
void set(struct Array *arr,int index,int x){
if(index>=0 && index<arr->length){
    arr->A[index]=x;
}
}
int max(struct Array arr){
int max=arr.A[0];
for(int i=0;i<arr.length;i++){
    if(arr.A[i]>max){
        max=arr.A[i];
    }
}
return max;
}
int sum(struct Array arr){
int sum=0;
for(int i=0;i<arr.length;i++){
    sum=sum+arr.A[i];
}
return sum;
}
float avg(struct Array arr){
    int sum=0;
    for(int i=0;i<arr.length;i++){
        sum=sum+arr.A[i];
    }
    return sum/arr.length;
}
int main(){

struct Array arr={{1,2,4,5,6,7,89},9,7};
// cout<<get(arr,3)<<endl;
// cout<<"Before change"<<endl;
// display(arr);
// set(&arr,3,90);
cout<<"After change"<<endl;
// display(arr);
cout<<max(arr)<<endl;
cout<<sum(arr)<<endl;
cout<<avg(arr)<<endl;

    return 0;
}