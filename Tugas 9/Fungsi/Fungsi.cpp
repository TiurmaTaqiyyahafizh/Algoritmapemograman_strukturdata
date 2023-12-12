/*
FUNGSI================================================================================================================================================================
 - pengertian fungsi
 fungsi adalah 
 
Bentuk umum :
nama_fungsi(argumen)
{
pernyataan atau oerintah
}

fungsi tanpa tipe (mengunakan viod)===================================================================================================================================
Bentuk umum :
void nama_fungsi(argumen)

pernyataan return=====================================================================================================================================================

pengiriman data=======================================================================================================================================================

jenis variabel========================================================================================================================================================
1. Variabel Lokal
   
2. Variabel eksternal atau global

3. variabel statis


*/
#include <iostream>
using namespace std;
//sub - program (void)
//Prosedur = tidak memiliki nilai kembali
//Fungsi = Memiliki nilai kembali

//prosedur
	void siswa()
	{
		string nama = "alex";
		
		cout << nama << endl;
	}
	
//Fungsi
	string siswi()
	{
		string nama = "alexa";
		
		cout << nama << endl;
	}

//mereka semua berada di luar int main()

//contoh int main gabungan---------------------------------------------------------------------------------------------------------------------------------------
#include <iostream>
using namespace std;

//prosedur
void siswa ()
{
	string nama = "tharreo";
	string jk = "laki - laki";
	cout << nama << " adalah seorang " << jk << endl;
}

//fungsi
string siswi ()
{
	string nama = "helena";
	string jk = "perempuan";
	return (nama + " adalah seorang " + jk);
}

int main () 
{
	siswa();
	cout<< siswi () << endl;
}

//penugasan-------------------------------------------------------------------------------------------------------------------------------------------------------

#include <iostream>
#include <conio.h>
using namespace std;

// Call by Value 
void tambah (int m, int n);
 
int main ()
{
	int a,b; 
	a = 5;
	b = 9;
	
	cout << "Nilai sebelum fungsi digunakan ";
	cout<<"\na = "<<a<<" b = "<<b<<" ";
	
	tambah (a,b);
	
	cout<<"\nNilai setelah fungsi digunakan ";
	cout<<"\na = "<<a<<" b = "<<b<<" ";
	
	
	getche();
}

void tambah (int m, int n){
	m += 5;
	n += 7;
	cout<<"\n\nNilai di dalam fungsi tambah";
	cout<<"\nm = "<<m<<" n = "<<n<<" ";
	cout<<endl;
}




#include <iostream>
using namespace std;
//--------------------------------------------1
 //parameter 
     string siswa (string nama, string kelas)
    {
   	    return (nama + " adalah siswa kelas " + kelas); //bisa ganti dengan cout
    }

int main ()
{
	string nama, kelas;
	cout << "nama : "; getline(cin,nama);
	cout << "kelas : "; getline(cin,kelas);
	cout<< siswa (nama,kelas); // cout hapus
	
 //	cout << siswa("budi", "XII";)
	
}




//-----------------------------------------2
//fungsi
bool lulus(int nilai)
{
	if (nilai > 75 ){
		return true;
	} else {
		return false;
	}
}

//prosedur
void data_siswa (string nama, int nilai){
	lulus (nilai);
	cout << "nama : "<< nama << endl;
	cout << "nilai : "<< nilai << endl;
	cout <<"status : ";
	
	if (lulus(nilai)) {
		cout << "lulus" << endl;
	} else {
		cout<< "tidak lulus" <<endl;
	}
}

int main ()
{
	string nama;
	int nilai;
	
	cout << "Masukkan Nama : "; 
	getline(cin,nama);
	cout <<"Masukkan Nilai : "; 
	cin  >> nilai;
	cout<<endl;
	
	data_siswa(nama,nilai);
	
}


//-----------------------------------------------------------3
void garis(){
	cout << "==========================================";

}

int main ()
{
	garis ();
	cout <<"\n\t\tHelena" <<endl;
	garis ();
	getchar();
}


int kali (int a, int b){
	int hasil;
	hasil = a * b;
	return hasil;
}

int main ()
{
	int hasil, a, b;
	cout<<"Masukkan nilai a = ";
	cin>>a,
	cout<<"Masukkan nilai b = ";
	cin>>b;
	
	hasil = kali (a,b);
	cout <<"Hasil perkalian = " << hasil << endl;
	getchar ();
}

//TUGAS RUMAH
/*
bikin rumus persegi panjang, lingkaran, dan tabung menggunakan fungsi dengan masing masing 2 soal dan menggunakan pengulangan dengan waktu 5 hari



