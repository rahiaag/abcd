#include <bits/stdc++.h>
using namespace std;

int main()
{
    int p = 11;
    int *q = (&p)+1;
    int *ptr;
    int a=10;

    ptr=&a;

    int *d=&a;
    *d=20;
    // * is a dereference operator

     cout<<*ptr<<endl;

    cout<<ptr<<endl;
    cout<<&a<<endl;


    cout<<"Value of p "<<*q<<endl;
    cout<<"Address of p "<<q<<endl;

    cout<<"Address of p "<<&p<<endl;
    /*
     //cout<<"Address of p "<<q<<endl;
    //cout<<"Address of q "<<&q<<endl;
   // cout<<p<<endl;

   // Pointer to pointer
   int *d;
   int **e=&d;
   */
    return 0;
}