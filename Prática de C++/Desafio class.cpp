#include <iostream>
using namespace std;

class cidadesbrasil{
    private:

    int populacao;
    int ano_fundacao;

    public:

    //         Constructror

    cidadesbrasil(int p = -1, int a = 0){
        populacao = p;
        ano_fundacao = a;
    }

    //         GET and SET
    //População
    void setpopulacao(int populacao){
        this->populacao = populacao;
    }
    int getpopulacao(){
        return populacao;
    }

    // Ano de fundação
    void setano(int fundacao){
        ano_fundacao = fundacao;
    }
    int getano(){
        return ano_fundacao;
    }
    
};

int main(){
    
    cidadesbrasil ipatinga(200000, 1900);

    //ipatinga.setpopulacao(250000);
    //ipatinga.setano(1805);

    cout << "O numero populacional eh de " << ipatinga.getpopulacao() << endl;
    cout << "O ano de fundacao eh " << ipatinga.getano() << endl;

    return 0;
}