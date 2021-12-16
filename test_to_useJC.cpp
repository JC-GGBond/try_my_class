#include <iostream>
#include "JC00.h"
#include "JC00.cpp"

int main()
{
    JC testobject1;
    testobject1.acquire("JJBond",165,"Yes to try");
    testobject1.show();
    return 0;
}