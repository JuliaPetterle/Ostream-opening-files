/******************************************************************************
EX 14.2 - Ostream, opening files
*******************************************************************************/
#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using std::ios;
using std::cerr;

#include <fstream>

using std::ofstream;
using std::ifstream;

#include <cstdlib> // exit prototype

int main()
{
    // ofstream constructor opens file
    ofstream outClientFile("clients.dat", ios::out);
    
    if ( !outClientFile ) {
        cerr<<"File could not be opened or created."<<endl;
        exit(1);
    }
    
    cout<<"Enter the account, name, and balance."<<endl
        <<"Enter end-of-file to end input.\n? ";
        
    int account;
    char name[30];
    double balance;
    
    // read account, name, and balance from cin,
    // then place in file.
    while(cin >> account >> name >> balance){
        outClientFile << account <<' '<<name<<' '
                      <<balance<<endl;
        
        cout<<"? ";
    }

    return 0;
}
