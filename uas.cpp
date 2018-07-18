#include <iostream>

using namespace std;

class Harga{
 private :
int susu, teh, kopi, jumlah;
 public :
  int Susu(int jumlah)
  {
   return 9000*jumlah;
  }
  int Teh(int jumlah)
  {
   return 10000*jumlah;
  }
  int Kopi(int jumlah)
  {
   return  8000*jumlah;
  }
};
int main ()
{
 Harga H;

    int j, pil;
    do{
    cout<<"======================\n";
    cout<<"Menu"<<endl;
    cout<<"======================\n";
    cout<<"1. Susu \n2. Teh \n3. Kopi\n0. Keluar"<<endl;
    cout<<"======================\n";
    cout<<"Masukan Pilihan : "; cin>>pil;
    switch(pil){
      case 1: cout<<"Susu"<<endl;
              cout<<"Masukkan Jumlah : "; cin>>j;
              cout<<"jumalah harga Susu: "<<H.Susu(j)<<endl;
      break;
      case 2: cout<<"Teh"<<endl;
              cout<<"Masukkan Jumlah : "; cin>>j;
              cout<<"jumalah harga Teh: "<<H.Teh(j)<<endl;
      break;
      case 3: cout<<"Kopi"<<endl;
              cout<<"Masukkan Jumlah : "; cin>>j;
              cout<<"jumalah harga Kopi: "<<H.Kopi(j)<<endl;
      break;
      }
    }
    while(pil!=0);

    return 0;

}
