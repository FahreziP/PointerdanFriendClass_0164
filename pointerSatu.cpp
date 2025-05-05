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

    mahasiswa &refMhs = mhs; //pointer reference refMhs
    refMhs.nim = 2; //Member Access Operator
    mhs.showNim();

    mahasiswa *pMhs = &mhs; //Pointer Derefrence pMhs
    pMhs->nim = 3; //Arrow Operator
    pMhs->showNim();
    return 0;
}