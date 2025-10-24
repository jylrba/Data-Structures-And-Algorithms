/*  Data Structures and Algorithm
    Jay Lariba    
    IT2L
    Activity 2(finals) - Create a program that will input 15 names in array then will search for a specific name and display the index number of the name. If the name is not found in the array prompt error message then type again a name to search in array. Use linear search.
*/
#include<iostream>
#include<string>
using namespace std;

int main()
{
    string names[15], searchName;
    int i, index = -1;
    
    cout << "Enter 15 Names:\n";
    for(i = 0; i < 15; i++) 
        cin >> names[i];


    while (true) {
        cout << "\nSearch Name: ";
        cin >> searchName;
        
        index = -1; 

        for(i = 0; i < 15; i++) {
            if(names[i] == searchName) {
                index = i;
                break;
            }
        }

        if(index == -1) {
            cout << "Name not found! Try again.\n";
        } else {
            cout << "Name found in index no: " << index << endl;
            break; 
        }
    }

    return 0;
}
