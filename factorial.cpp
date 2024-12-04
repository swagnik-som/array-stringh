#include<iostream>
using namespace std;
int ifact(int h){
    int f=1;

    for(int i=1;i<=h;i++){
f=f*i;
    }
    return f;
}

int fact(int t){
if(t==0){
    return 1;
}else{
    return fact(t-1)*t;
}
}
int main(){
int r;
int u;
u=ifact(5);
r=fact(4);
cout<<r<<endl;
cout<<u<<endl;
    return 0;
}