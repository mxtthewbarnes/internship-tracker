#include "source.cpp" 

int main()
{
    int choice; 
    
    do{
        menu(); 
        if(!(cin >> choice))
        {
            cin.clear(); 
            cin.ignore(1000,'\n'); 
            cout << "invalid input. please try again." << endl; 
            continue; 
        }
    } while(choice != 5); 
}