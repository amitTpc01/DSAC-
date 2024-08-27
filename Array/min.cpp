#include <iostream>
using namespace std;

int main(){
    int i;
    int arr[5];
    int INT_MAX;
    int result= INT_MAX;

    cout<<"Enter the element:";
    for(i=0;i<5;i++){
            cin>>arr[i];
            if(arr[i]<result)
            result=arr[i];

    }
    cout<<"minum value is:"<<result;

}