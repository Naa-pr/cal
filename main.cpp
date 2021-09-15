#include <conio.h>
#include <iostream>

using namespace std;





int main(int argc, char const *argv[])
{   
    
    // int* ptra;
    // int z = 34;
    // ptra = &z;
    // cout<<ptra;
    // cout<<"Hello world"<<endl;
    int a,b;
    cout<<"Enter first number"<<endl;
    cin>>a;
    cout<<"Enter second number \n";
    cin>>b;
    char c;
    // cout<<"The result of a /b is "<<(float)a/b<<endl;
    // cout<<"The result of a -b is "<<(float)a-b<<endl;
    // cout<<"The result of a+b is "<<(float)a+b<<endl;
    // cout<<"The result of a*b is "<<(float)a*b;
    cout<<"Enter any no:";
    cout<<"1.+"<<endl;
    cout<<"2.-"<<endl;
    cout<<"3.x"<<endl;
    cout<<"4./"<<endl;
    cin>>c;
    int r;
    if (c=='1')
    {
        /* code */
        r=a+b;
    }
    else if (c=='2')
    {
        /* code */
        r=a-b;
    }
    else if(c=='3'){
        r=a*b;
    }
    else if(c=='4')
    {
        /* code */
        r=a/b;
    }
    else
    {
        /* code */
        cout<<"Invalied credentials";
    }
    cout<<(float)r;
    _getch();
    
    return 0;
    
}

