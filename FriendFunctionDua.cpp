#include <iostream>
using namespace std;

class pelajar;
class Manusia
{
    public:
    void showNilaiPelajar(pelajar &x);
    void showNilaiPelajarDua(pelajar &y);
};

class pelajar{
    private:
    int nilai;

    public:
    pelajar() { nilai = 100; }
    friend void manusia::showNilaiPelajar(pelajar &x);
};

void manusia::showNilaiPelajar(pelajar &x){
    cout << x.nilai;
}

void manusia::showNilaiPelajarDua(pelajar &y){ //Tambahan atau Percobaan
    cout << y.nilai;
}

int main(){
    Manusia budi;
    pelajar pbudi;
    budi.showNilaiPelajar(pbudi);
    return 0;
}