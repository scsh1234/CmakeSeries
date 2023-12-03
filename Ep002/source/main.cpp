#include<iostream>
using namespace std;

template<typename T>
T add(T a, T b)
{
    return a+b;
}

int main()
{
    cout<<"welcome to the C program"<<endl;
    cout<<"the sum is : "<<add(5,7)<<endl;
    return 0;
}