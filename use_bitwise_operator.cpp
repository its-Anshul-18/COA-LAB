//Q1- WRITE A CPP PROGRAM TO USE BITWISE OPERATOR

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

//Q2- SUM OF BITS

#include <iostream>
#include<math.h>


using namespace std;

int main ()
{
    int n ;
    cin >> n ; 

    int bits[n];

    for(int i = 0 ;i <n ;i++)
    {
        cin >> bits[i];

    }


    int ans = 0 ;
    int sum = 0 ;

    for(int i = 0 ; i<n ; i++)
    {
        if(bits[i] == 0 )
        {
            continue;
        }
        else if (bits[i] == 1)
        {
            ans = bits[i] * pow(2,n-i-1);
            sum = ans + sum ;
        }
    }

    cout << sum << endl;



}

