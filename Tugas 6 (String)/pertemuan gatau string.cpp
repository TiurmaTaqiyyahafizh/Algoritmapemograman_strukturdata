
//#include <iostream>
//#include <string.h>
//#include <ctype.h>
//using namespace std;
//int main()
//{
//	char a1[20];
//	char a2[20];
//	char a3[20];
//	//clrscr();
//	cout << "masukan kata - 1 = ";
//	cin>>a1;
//	cout<< " ";
//	cin>>a2;
//	cout<<"masukan kata -2 = ";
//	cin>>a3;
//	
//	strcat(a1,a2,a3);
//	cout << "hasil penggabungan "<<a1;
//	getchar();
//}


//----------------------------------------------------------------------------


//#include <iostream>
//#include <string.h>
//using namespace std;
//int main()
//{
// char a1[] = "IBIK";
// char a2[] = "Ibik";
// char b1[] = "IBIK";
////clrscr();
//
// cout<<"Hasil Perbandingan "<<a1<<" dan "<<a2<<"->";
// cout<<strcmp(a1,a2)<<endl;
// cout<<"Hasil Perbandingan "<<a2<<" dan "<<a2<<"->";
// cout<<strcmp(a2,a1) <<endl;
// cout<<"Hasil Perbandingan "<<a1<<" dan "<<b1<<"->";
// cout<<strcmp(a1,b1) <<endl;
// getchar();
//}

//kenapa string hasilnya string -1 dan 1 dan 0, itu karena untung membandingkan dari string pertama dan kedua dan seterusnya

//---------------------------------------------------------------------------------------------------------------------------------

//#include <iostream>
//#include <string.h>
//using namespace std;
//int main()
//{
// char huruf[20];
// char pindah[20];
////clrscr();
// cout<<"Masukkan Sembarang Kata = ";
// cin >> huruf;
///* Proses */
// strcpy(pindah, huruf);
// cout<<"Pemindahannya = "<<pindah;
// getchar();
//}

// biar di sebut ulang lagi di proses dengan huruf, di pindahkan ke "pindah" jadi huruf=pindah


//=================================================================================
//fungsi STRLENG ----------------------------------------------------------------------------
//dapat di gunakan untuk membalikan letak urutan pada string jika di tulis dengan fungsi for.

//contoh_________________________________________________________________

//#include <iostream>
//#include <string.h>
//using namespace std;
//int main()
//{
//	char huruf[20];
//	char pindah[20];
//	//clrscr;
//	
//	cout<<"Masukan Sembarang Kata= ";
//	cin>>huruf;
//	cout<<"Panjang kata yang diinputkan= ";
//	cout<<strlen(huruf);
//	getchar();
//}



//#include <iostream>
//#include <string.h>
//
//using namespace std;
//int main()
//{
//	int i;
//	char kalimat[100];
//	cout << "masukan kalimat = ";
//	cin.getline(kalimat,sizeof(kalimat));
//	int x=strlen(kalimat);
//	
//	for(i=x;i>=0;i--){
//		cout <<kalimat[i];
//	} 
// cout << endl;
// return 0;
//}





//==============================================================================
//fungsi ATOF ------------------------------------------------------------------------
//fungsi yang di gunaakan untuk mengubah string angka menjadi bilangan koma menggunakan vadvasdj(gatau ngomong apa)
//intinya dari bilangan bulat ke bilangan koma (menerima data angka koma)

//contoh_________________________________________________________________________


//#include <iostream>
//#include <math.h>
//
//using namespace std;
//int main()
//{
//	char kata[20];
//	float angka,a;
//	//clrscr();
//	cout << "masukan sembarang angka = ";
//	cin>>kata;
//	angka=atof(kata);
//	a=angka+5;
//	cout << " hasil perubahan di tambah dengan 5 = "<<a;
//	getchar();
//}

//dan mendapatkan hasil
//masukan sembarang angka = 2.5
//hasil perubahan di tambah dengan 5 = 7.5





//=============================================================
//fungsi ATOI--------------------------------------------------
//
//atoi adalah untuk mengubah string angka menjadi angkat menjadi integer dengan
//
//contoh______________________________________________________________


//#include <iostream>
//#include <stdlib.h>
//
//using namespace std;
//int main()
//{
//	char kata[20];
//	float angka,a,b;
//	//clrscr();
//	cout << "masukan sebarang angka = ";
//	cin >> kata;
//	angka = atoi(kata);
//	a=angka+7;
//	cout << "hasil perubahan ditambah dengan 7 = "<<a;
//	getchar();
//	
//}  



//================================================================
//fungsi ATOL----------------------------------------
//long integer (dapat mengiput lebih banyak dari atoi)

//contoh _______________________________________________
//#include <iostream>
//#include <stdlib.h>
//using namespace std;
//int main(){
//	char kata[20];
//	float angka,a;
//	//clrscr;
//	cout<<"Masukan Sembarang Angka= ";
//	cin>>kata;
//	angka = atol(kata);
//	a = angka + 8;
//	cout<<"Hasil Perubahan Ditambah dengan 8 = "<<a;
//	getchar();
//}




//=======================================================================
//fungsi PERINTAH TOUPPER DAN TOLOWER -----------------------------------
//
//fungsi toupper adalah untuk memperoleh huruf kapita jadi suatu huruf kecil dan untuk tolower kebalikan dari toupper

//CONTOH ____________________________________________________________________________
//
//
//#include <iostream>
//#include <cctype>
//#include <cstring>
//using namespace std;
//int main()
//{
// char teks[20], teks_baru[20];
// cout << "Tuliskan kata dengan huruf kapital = ";
//cin >> teks;
// for (int i=0; i<strlen(teks); i++) {
// if(teks[i] >= 'a' && teks[i] <= 'z'){
// teks_baru[i] = toupper(teks[i]);
// }
// else{
// teks_baru[i] = tolower(teks[i]);
// }
// }
// cout << "Hasil Perubahan = " << teks_baru << endl;
// return 0;
//}


//================================================================================

//#include <iostream>
//#include <fstream>
//using namespace std;
//int main()
//{
// ofstream myfile;
// myfile.open("Test.exe",ios::app);
// cout<<"OPERASI FILE OFSTREAM"<<endl;
// cout<<"--------------"<<endl;
// if(!myfile.fail())
// {
// myfile<<"Belajar OPERASI FILE OFSTREAM"<<endl;
// myfile.close();
// cout<<"Text telah ditulis ke dalam File"<<endl;
// }else{
// cout<<"File tidak ditemukan"<<endl;
// }
// getchar();
// return 0;
// 
//}
//

//=============================================================================
//iF-STREAM------------------------------------------------
//ngebaca file

//CONTOH 

//#include <iostream>
//#include <fstream>
//using namespace std;
//int main()
//{
// ifstream myfile;
// char sv_text;
// myfile.open("TEST.txt");
// cout<<"OPERASI FILE 2"<<endl;
// cout<<"--------------"<<endl;
// if(!myfile.fail())
// {
// cout<<"Isi dari File TEST.txt adalah ";
// while (!myfile.eof())
// {
// myfile.get(sv_text);
// cout<<sv_text;
// }
// myfile.close();
// }else{
// cout<<"File tidak ditemukan"<<endl;
// }
// getchar();
// return 0;
//}
