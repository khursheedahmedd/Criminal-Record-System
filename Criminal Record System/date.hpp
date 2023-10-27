//
//  date.hpp
//  Criminal Record System
//
//  Created by Macbook on 26/10/2023.
//

#ifndef date_hpp
#define date_hpp
#include <iostream>
using namespace std;

class dateType
{
private:
    int day;
    int month;
    int year;
    
public:
    dateType(int=1, int=1, int=1900);
    
    ~dateType();
    
    void setDate(int, int, int);
    void getDate(int&, int&, int&)const;
    
    void display()const;
    bool isValidDate(int, int, int);
    
};


#endif /* date_hpp */
