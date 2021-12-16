//  JC00.h --JC class interface
//  version 00

#include <iostream>
#include "JC00.h"

void JC::acquire(const std::string & yourname ,int yourheights , const std::string & choice)
{
    
    std::cout << "Thanks for Dear" << yourname; 
    if (yourheights>heights_cm)
        std::cout << "you are taller than Mr.Zhu";
    else
        std::cout << "you are shorter than Mr.Zhu";
}
void JC::show()
{
    std::cout << "Mr. Zhu's gender is" << gender 
    <<" and his weights are " << weights << std::endl ;   
    std::cout << "Thank you for your coming";

}