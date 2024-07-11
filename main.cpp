

#include <iostream>
#include <exception>

using namespace std;


int main(){
    
string name;
int number;
size_t sz;
bool bValidInput = false;

while (!bValidInput){
    try{
        cout << "enter a number ";
    getline(cin, name);
    number = stoi(name, &sz);
    if(name.substr(sz).length() != 0){
        throw exception();
    }
    cout << "You entered " << number << endl;
    bValidInput = true;
    }
    catch(exception &e)
    {
        // Do nothing
    }   
}

    return EXIT_SUCCESS;
}