/* A C++ Program in the spirit of the classic example from page 6
   of Kernighan and Ritchie's The C Programming Language, 2nd. Ed. */

#include <iostream> // for cout ostream and endl manipulator
#include <fstream>

using namespace std; // optional, could say std::cout and std::endl below instead

const int SUCCESS = 0; // by convention, where non-zero results are error codes

const int NO_ARGUEMENT = 1; // No Arguement Code

const int CANNOT_OPEN_FILE = 2; // CANNOT OPEN FILE Code

int main (int argc, char** argv) { // argc and argv now using, but their types are specified

    if(argc == 1) {
        cout << "usage: " << argv[0] << " <arg1> [<arg2>...]" << endl;
        return NO_ARGUEMENT;
    } 

    int i = 1;
    for(i = 1; i < argc; i++) {
        ofstream openfile(argv[i]);
        if(!openfile) {
            cout << "Error: Cannot Open File " << argv[i] << endl;
            openfile.close();
            return CANNOT_OPEN_FILE;
        }
        openfile << "Hello, World in " << argv[i] << endl;
        cout << "File Process Successful!" << endl;
        openfile.close();
    }


    return SUCCESS; // functional: returns a success/failure code
}
