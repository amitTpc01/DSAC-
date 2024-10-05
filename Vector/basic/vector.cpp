#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int>v;
    vector<int>v1 (5,1);
            v.push_back(4);
            v.push_back(2);
            v.push_back(8);

    cout<<"size of v"<<" "<<v.size()<<endl;
        cout<<"capacity of v"<<" "<<v.capacity()<<endl;
        //update value
        v[1]=5;
        for(int i=0;i<v.size();i++){
            cout<<v[i]<<endl;
        }
        v1.push_back(7);

         cout<<"size of v1"<<" "<<v1.size()<<endl;
        cout<<"capacity of v1"<<" "<<v1.capacity()<<endl;
   

return 0;

}