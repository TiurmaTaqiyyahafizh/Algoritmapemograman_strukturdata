#include <iostream>
using namespace std;

#define max 5 //klo menggunakan define tidak perlu menggunakan ;
string data[max]; // selama max belum terpenuhi maka kita masih bisa menginputka  data menggunakan proses khusus.
int top =  0; //top adalah buat   mendeteksi data sampai indeks brp
//push = menambahkan data
//pop = menghapus data
//isEmpty = pendeteksi terhadat array yang kita punya, apabila kosong maka isEmpty adalah true - pop
//isFull = menunjukan bahwa kapasitas array kita sudah sesuai dengan kapasitas yang sudah kita definekan di variabel max ini - push

bool isEmpty(){
	if(top == 0){ //jika variabel 
		return true; // berarti data kosong
	}else{
		return false; // dia nggak kosong ada datanya bro.
	}
}

bool isFull(){ //untuk mendeteksi apakah si array data sudah penuh atau belum
	if(top >= max){ // apabila top lebih atau sama dengan max 
		return true; // maka di kembalikan ke data true
	} else {  //kalau masih kurang daripada max
		return false;  //maka false
	}
}

void display(){ //buat melihatkan data array bertambah atau tidak
	if(!isEmpty()){ //jika data tidak isEmpty
		cout << "Data Tersimpan :"<<endl;
		for(int a=0; a<top; a++){ //terjadi looping
			cout << a+1 << ". "<< data[a] << endl;
		}
	} else { // jika data kosong akan menampilkan tidak tersedia
		cout << " Data Tidak Tersedia !" << endl;
	}
	
	if(isFull()){ //jika kapsitasnya sudah penuh 
		cout << "stack Penuh" << endl;
	}
	cout << endl;
}


void push (){
	if(!isFull()) { //jika tidak penuh maka bisa masukan data
		cout << "Masukan Data :";
		cin >> data[top];
		top++; // apabila melakukan push lagi makan akan melakukan indeks selanjutnya
	}
}

void pop (){ //untuk menghapus data terakhir
	if(!isEmpty()){ // jika data tidak kosong
		top--; //dia akan menghapus data sebelumnya
	}
}

int main ()
{
  int pil;
  string isi;
  
  stack :
  	system ("cls");         //membersihkan layar pada program yang akan dijalankan sehingga pem-rogram dapat menentukan saat untuk menghapus data yang 
	                       //telah dijalankan tanpa harus menutup program tersebut dan membukanya kembali
  	  display(); //memanggil display
      cout << "menu utama\n1. Masukan Data\n2. Hapus Data\n3. Selesai\npilih :";
	  cin>>pil; // di masukan ke data pill
	  
	  if	( pil == 1){
	  	system ("cls");     //membersihkan layar pada program yang akan dijalankan sehingga pem-rogram dapat menentukan saat untuk menghapus data yang 
	                       //telah dijalankan tanpa harus menutup program tersebut dan membukanya kembali
	  	push(); //memanggil push
	  	goto stack; //
	  }else if(pil == 2){
	  	pop(); // panggil pop
	  	goto stack;
	  }
	  system ("cls");        //membersihkan layar pada program yang akan dijalankan sehingga pem-rogram dapat menentukan saat untuk menghapus data yang 
	                        //telah dijalankan tanpa harus menutup program tersebut dan membukanya kembali
	  cout << "Program Selesai";
}

