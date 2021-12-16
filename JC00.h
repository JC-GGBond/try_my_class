//  JC00.h --JC class interface
//  version 00
#ifndef JC00_H_
#define JC00_H_

#include <string>
#include <cstdlib>

class JC
{
    private:
    std::string motto;
    std::string gender = "male";
    int heights_cm = 179;
    double weights = 85.5;
    double heights_m;
    double unit_conversion()
    {
        heights_m = heights_cm/100;
        return heights_m;
    } 

    public:
    void acquire(const std::string & yourname ,int yourage , const std::string & choice);
    void show();
     

};
#endif