#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

void f1(){
    cout<<"wtf\n";
     
}
int main(){
    f1();
    vector<int> a={20,30};
    for_each(a.begin(),a.end(),[](int x){cout<< x;});
    
    return 0;
}