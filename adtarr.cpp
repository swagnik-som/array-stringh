#include<iostream>
using namespace std;
struct adtarr
{
  int a[20];
   int size;
  int length;
 
  
};
void dispaly(struct adtarr arr){
int i;
cout<<"Printout the element of the array..."<<endl;
for(i=0;i<arr.length;i++){
    cout<<arr.a[i]<<endl;
}
}
void append(struct adtarr *arr,int x){
if(arr->length<arr->size){
    arr->a[arr->length++]=x;
}
}
void insert(struct adtarr *arr,int index,int y){
    int i;
   if(index>0 && index<=arr->length){
    for(i=arr->length;i>index;i--){
        arr->a[i]=arr->a[i-1];
       
        

    }
    arr->a[index]=y;
        arr->length++;
   }
}
int deletea(struct adtarr *arr,int index){
int x=0;
int i;
if(index >=0 && index<arr->length){
    x=arr->a[index];
for(i=index;i<arr->length;i++){
    arr->a[i]=arr->a[i+1];
}
 arr->length--;
return x;

}

}
int main(){

struct adtarr arr={{1,2,3,45,5},12,5};

// dispaly(arr);

// append(&arr,60);
insert(&arr,3,81);
cout<<"After the appending the array ..."<<endl;
int d=deletea(&arr,0);
cout<<"DFD"<<d<<endl;
dispaly(arr);

    return 0;
}