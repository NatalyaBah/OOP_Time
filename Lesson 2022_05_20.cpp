

#include <iostream>
using namespace std;
#include "Time.cpp"


int main()
{
    Time t1(2,30,15);    
    t1.print();
    cout << endl;
    Time t2(1,40,15);
    t2.print();
    cout << endl;
    Time t3 = t1.add(t2);
    t3.print();
}
