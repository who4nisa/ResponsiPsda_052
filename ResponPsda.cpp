#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

struct InfoPenyakit{
    string namaPenyakit;
    string penjelasanPenyakit;
    string penularanPenyakit;
    string pencegahanPenyakit;
    string obatPenyakit;
};

int main(){
    vector<InfoPenyakit>penyakit;

    while(true){
        int pilihan;

        cout<<"Menu:\n1. Masukkan informasi penyakit\n2. Cari informasi\n3. Keluar\nPilihan: "; 

        cin>>pilihan;

        if(pilihan == 1){
            InfoPenyakit penyakitBaru;
            cout<<"Nama penyakit: ";
            cin.ignore(); 
            getline(cin,penyakitBaru.namaPenyakit);
            cout<<"Penjelasan penyakit: ";
            getline(cin,penyakitBaru.penjelasanPenyakit);
            cout<<"Penularan penyakit: ";
            getline(cin,penyakitBaru.penularanPenyakit);
            cout<<"Pencegahan penyakit: ";
            getline(cin,penyakitBaru.pencegahanPenyakit);
            cout<<"Obat penyakit: ";
            getline(cin,penyakitBaru.obatPenyakit);

            penyakit.push_back(penyakitBaru);
        } else if (pilihan == 2){
            string searchKeyword;
            cout<<"Masukkan kata kunci: ";
            cin.ignore();
            getline(cin, searchKeyword);

            for(const auto & disease : penyakit){
                if (disease.namaPenyakit.find(searchKeyword) != string::npos){
                    cout<<"Nama Penyakit: "<<disease.namaPenyakit<<"\n";
                    cout<<"Penjelasan Penyakit: "<<disease.penjelasanPenyakit<<"\n";
                    cout<<"Penularan Penyakit: "<<disease.penularanPenyakit<<"\n";
                    cout<<"Pencegahan Penyakit: "<<disease.pencegahanPenyakit<<"\n";
                    cout<<"Obat Penyakit: "<<disease.obatPenyakit<<"\n";
                    break;
                }
            }

        } else if (pilihan == 3){
            break;
        } else { 
            cout<<"Pilihan tidak sesuai. Silahkan ulangi.\n";
        }
    }
    return 0;

}
