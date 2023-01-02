#include <iostream>
using namespace std;

int main(){
    
    int x,y;
    
    cin>>x>>y;
    cout<<endl;
    
    
    cout<<"BITWISE AND:"<< (x&y)<<endl;
    cout<<"BITWISE OR:"<< (x|y)<<endl;
    cout<<"BITWISE XOR:"<< (x^y)<<endl;
    cout<<endl;
    
    
    cout<<"Bitwise leftshift ->x:"<<(x<<2)<<endl;
    cout<<"Bitwise leftshift ->y:"<<(y<<2)<<endl;
    cout<<endl;
    
    
    cout<<"Bitwise rightshift ->x:"<<(x>>2)<<endl;
    cout<<"Bitwise rightshift ->y:"<<(y>>2)<<endl;
    cout<<endl;
    
    cout<<"BITWISE NOT -> x:"<< (~x)<<endl;
    cout<<"BITWISE NOT -> y:"<< (~y)<<endl;
    cout<<endl;
    
}

