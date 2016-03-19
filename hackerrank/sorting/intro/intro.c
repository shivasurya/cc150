#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int t;
    cin>>t;
        int a;
        int * foo;
        cin>>a;
        foo = new int [a];
        for(int i=0;i<a;i++)
            {
                cin>>foo[i];
        }
      
        for(int i=0;i<a;i++)
            {
            if(foo[i]==t)
                cout<<i<<endl;
        }
      

    return 0;
}
