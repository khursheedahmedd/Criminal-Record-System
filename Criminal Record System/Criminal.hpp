//
//  Criminal.hpp
//  Criminal Record System
//
//  Created by Macbook on 22/10/2023.
//

#ifndef Criminal_hpp
#define Criminal_hpp
#include "date.hpp"
#include <iostream>
using namespace std;

class Criminal {
private:

    int criminalId;
    int cellId;
    int criminalAge;
    int  criminalPostalCode;
    int punishmentInYears;
    string crimainalName, criminalRace, criminalGender, criminalCNIC, criminalState, criminalAddress, criminalOffence, complianerName, investigatingOfficer, criminalCity, criminalCategory;
    dateType *date;
    
public:
    Criminal();
    ~Criminal();
    
    void setName(string);
    string getName();
    void setId(int);
    int getId();
    void setCellId(int);
    int getCellId();
    void setCategory(string);
    string getCategory();
    void setAge(int);
    int getAge();
    void setRace(string);
    string getRace();
    void setGender(string);
    string getGender();
    void setCNIC(string);
    string getCNIC();
    void setState(string);
    string getState();
    void setCity(string);
    string getCity();
    void setPostalCode(int);
    int getPostalCode();
    void setAddress(string);
    string getAddress();
    void setOffence(string);
    string getOffence();
    void setComplainerName(string);
    string getComplainerName();
    void setInvestigatingOfficer(string);
    string getInvestigatingOfficer();
    
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

#endif /* Criminal_hpp */
