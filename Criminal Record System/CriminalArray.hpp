//
//  CriminalArray.hpp
//  Criminal Record System
//
//  Created by Macbook on 22/10/2023.
//

#ifndef CriminalArray_hpp
#define CriminalArray_hpp
#include "Criminal.hpp"

class CriminalArray {
private:
    int size;
    int capacity;
    Criminal *Criminal;
    
public:
    CriminalArray();
    ~CriminalArray();
    
    void addCriminal();
    void removeCriminal(int);
    void searchCriminalById(int);
    void updateRecord();
    void showMurdere();
    void crimeRaised();
    void showThieves();
    void searchCriminalByAge(int);
    void SearchCriminalByCellId(int);
    void searchCriminalByName(string);
    void searchCriminalByCategory(string);
};


#endif /* CriminalArray_hpp */
