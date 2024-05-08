#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main () {
    srand (time (NULL));

    const int N = 10000;

    int broj_pismo_i_glava = 0;

    for(int i = 0; i < N; i++) {
        int kockica = rand()% 10 + 1;
        bool pismo = false;
        bool glava = false;

        if(kockica % 2 == 0){
                for (int j = 0; j <= 3; j++){
                    int novcic = rand () % 2;

                    if(novcic == 0) {
                        pismo = true;
                    } else {
                        glava = true;
                    }
                }

       } else {
                for(int j = 0; j <= 2; j++){
                    int novcic = rand () % 2;

                    if(novcic == 0) {
                        pismo = true;
                    } else {
                        glava = true;
                    }
                }
       }

                if(pismo && glava) {
                    broj_pismo_i_glava++;
                }
    }

                double vjerovatnoca = double (broj_pismo_i_glava) / N;
                    cout << "Vjerovatnoca da cemo dobiti barem jedno pismo i barem jednu glavu je: " << vjerovatnoca << "%" << endl;
return 0;
}

