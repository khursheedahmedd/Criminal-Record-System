//
//  Criminal.cpp
//  Criminal Record System
//
//  Created by Macbook on 22/10/2023.
//

#include "Criminal.hpp"

Criminal::Criminal(){}

Criminal::~Criminal(){}

void Criminal::setId(int id) {
    criminalId = id;
}
int Criminal::getId() {
    return criminalId;
}

void Criminal::setAge(int age) {
    criminalAge = age;
}
int Criminal::getAge() {
    return criminalAge;
}

void Criminal::setName(string name) {
    crimainalName = name;
}
string Criminal::getName() {
    return crimainalName;
}

void Criminal::setCellId(int Id) {
    cellId = Id;
}
int Criminal::getCellId() {
    return cellId;
}

void Criminal::setCategory(string category) {
    criminalCategory = category;
}
string Criminal::getCategory() {
    return criminalCategory;
}

void Criminal::setCNIC(string cnic) {
    criminalCNIC = cnic;
}
string Criminal::getCNIC() {
    return criminalCNIC;
}

void Criminal::setCity(string city) {
    criminalCity = city;
}
string Criminal::getCity() {
    return criminalCity;
}

void Criminal::setRace(string race) {
    criminalRace = race;
}
string Criminal::getRace() {
    return criminalRace;
}

void Criminal::setState(string state) {
    criminalState = state;
}
string Criminal::getState() {
    return criminalState;
}

void Criminal::setGender(string gender) {
    criminalGender = gender;
}
string Criminal::getGender() {
    return criminalGender;
}

void Criminal::setAddress(string address) {
    criminalAddress = address;
}
string Criminal::getAddress() {
    return criminalAddress;
}

void Criminal::setOffence(string offence) {
    criminalOffence = offence;
}
string Criminal::getOffence() {
    return criminalOffence;
}

void Criminal::setPostalCode(int code) {
    criminalPostalCode = code;
}
int Criminal::getPostalCode() {
    return criminalPostalCode;
}

void Criminal::setComplainerName(string name) {
    complianerName = name;
}
string Criminal::getComplainerName() {
    return complianerName;
}

void Criminal::setInvestigatingOfficer(string officer) {
    investigatingOfficer = officer;
}
string Criminal::getInvestigatingOfficer() {
    return investigatingOfficer;
}

void Criminal::addCriminal() {
    
}

