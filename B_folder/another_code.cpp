#include<iostream>

using namespace std;

void func()
{
    cout << "func";
}

int main()
{ 
    cout << "B";

    func();

    cout << "here it is";

    return 0;
}
