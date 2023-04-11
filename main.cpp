#include <iostream>
#include "Stack.H"
using namespace std;

int main()
{
    Stack<int>s;

    s.push(5);
    s.push(6);
    s.push(7);
    cout<<s.top()<<endl;
    int val1 = s.pop(), val2=s.pop();
    cout<<val1<<" "<<val2<<endl;
    if(!s.empty())cout<<"stack is not empty"<<endl;
    s.pop();
    if(s.empty())cout<<"stack is now empty"<<endl;
    return 0;
}
