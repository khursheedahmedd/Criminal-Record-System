//
//  date.cpp
//  Criminal Record System
//
//  Created by Macbook on 26/10/2023.
//

#include "date.hpp"

dateType::dateType(int d, int m, int y)
{
    if (isValidDate(m, d, y))
    {
            month = m;
            day = d;
            year = y;
    }
    else
        {
            cout << "Invalid date. Setting to default." << endl;
            month = 1;
            day = 1;
            year = 1900;
        }
}

dateType::~dateType(){}

void dateType::setDate(int m, int d, int y)
{
        if (isValidDate(m, d, y))
        {
            month = m;
            day = d;
            year = y;
        } else {
            cout << "Invalid date. Not updating." << endl;
        }
    }

void dateType::getDate(int& m, int& d, int& y) const
{
    m = month;
    d = day;
    y = year;
}
void dateType::display()const
{
    cout<<"\n"<<day<<"-"<<month<<"-"<<year;
}

bool dateType::isValidDate(int m, int d, int y)
{
    if (y < 1900 || y > 2100)
    {
        return false;
    }

    if (m < 1 || m > 12)
    {
        return false;
    }

    int daysInMonth;
    switch (m)
    {
        case 2:
            if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
            {
                daysInMonth = 29;
            }
            else
            {
                daysInMonth = 28;
            }
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            daysInMonth = 30;
            break;
        default:
            daysInMonth = 31;
            break;
    }

    if (d < 1 || d > daysInMonth)
    {
        return false;
    }

    return true;
}
