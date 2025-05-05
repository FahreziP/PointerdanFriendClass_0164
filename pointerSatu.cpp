#include <iostream>
using namespace std;

class mahasiswa{
    public:
    int nim;
    void showNim(){
        cout << "No Induk  = " << nim << endl;
    }
};

int main(){

    mahasiswa mhs; //object mhs
    mhs.nim = 5;
    mhs.showNim(); //Member Access operator

    
}