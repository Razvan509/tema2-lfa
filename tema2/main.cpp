#include <iostream>
#include <vector>
#include <string.h>

using namespace std;

class Automat{
    vector<int> stari;
    string alfabet;
    int stareInit;
    vector<int> stariFinale;
    //vector<int> tranzitii[20][20];
    int nrCuvAlfabet;
public:
    vector<int> getStari(){return stari;}
    string getAlfabet(){return alfabet;}
    int getStareInit(){return stareInit;}
    vector<int> getStariFinale(){return stariFinale;}
    int getNrStari(){return nrStari;}
    int getNrCuvAlfabet(){return nrCuvAlfabet;}
    int getNrStariFinale(){return nrStariFinale;}
    void setStareInit(int stare){stareInit = stare;}
    void setNrStari(int nr){nrStari = nr;}
    void setNrCuvAlfabet(int nr){nrCuvAlfabet = nr;}
    void setNrStariFin

};

int main()
{

    return 0;
}
