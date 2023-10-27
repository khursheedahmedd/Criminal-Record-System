//
//  main.cpp
//  Criminal Record System
//
//  Created by Khursheed on 22/10/2023.
//

#include <iostream>
#include "Criminal.hpp"
#include "CriminalArray.hpp"

int main() {
    
    int choice;
    char ch = 'y';
    do{
    cout<<"\n******* Criminal Record Management System *******";
    cout<<"\n*                                                *";
    cout<<"\n*  1. Add Criminal                              *";
    cout<<"\n*  2. Search Criminal by Name                   *";
    cout<<"\n*  3. Search Criminal by ID                     *";
    cout<<"\n*  4. Search Criminal by Age                    *";
    cout<<"\n*  5. Search Criminal by Category               *";
    cout<<"\n*  6. Search Criminal by Cell ID                *";
    cout<<"\n*  7. Remove a Criminal Record                  *";
    cout<<"\n*  8. Update a Criminal Record                  *";
    cout<<"\n*  9. Exit                                      *";
    cout<<"\n*                                               *";
    cout<<"\n*************************************************";
    cout<<"\nEnter your choice: ";
    cin>>choice;
    
    switch(choice) {
        case 1:
        {
            cout<<"\nAdding Criminal....\n";
            break;
        }
        case 2:
        {
            cout<<"\nSearching Criminal by Name....";
            break;
        }
        case 3:
        {
            cout<<"\nSearching Criminal by ID.....";
            break;
        }
        case 4:
        {
            cout<<"\nSearchinh Criminal by Age....";
            break;
        }
        case 5:
        {
            cout<<"\nSearching Criminal by Category....";
            break;
        }
        case 6:
        {
            cout<<"\nSearching Criminal by Cell ID....";
            break;
        }
        case 7:
        {
            cout<<"\nRemoving Criminal Record....";
            break;
        }
        case 8:
        {
            cout<<"\nUpdating Criminal Record....";
            break;
        }
        case 9:
        {
            cout<<"\nExiting....";
            return 0;
            break;
        }
        default:
            cout<<"\nInvalid choice....";
    }
        cout<<"\nDo you want to repeat? Press Y: ";
        cin>>ch;
    }while(ch == 'y' || ch == 'Y');
        
}

