#include <iostream>
#define MAX 5
using namespace std;
class Node{
	public:
		int value;
		Node* Next;
};

int main(){
	Node* head;
	Node* one = NULL;
	Node* two = NULL;
	Node* three = NULL;
	one = new node();
	two = new node();
	three = new node();
	one->value = 1;
	two->value = 2;
	three->value = 3;
	one->Next = two;
	two->Next = three;
	three->Next = NULL;
	head = one;
	while (head != NULL){
		cout<<head->value;
		head = head->Next;
	}
}

#include <iostream>
#define MAX 5
using namespace std;
struct TumpukanBuku{
int top;
int antrian[MAX];
}perpus;
void inisialisasi(){
	perpus.top = -1;
}
bool kondisiPenuh(){
	return perpus.top = MAX - 1;
}
void inputData(){
	if (kondisiPenuh()){
		cout<<"\nAntrian Penuh"<<endl;
	}else{
		perpus.top++;
		cout<<"\nMasukkan Antrian = "; cin >> perpus.antrian[perpus.top];
		cout<<"Antrian "<< perpus.antiran[perpus.top]<<"Telah Masuk Ke Tumpukan Buku"<<endl;
	}
}
void tampilData(){
	if (kondisiKosong()){
		cout<<"Antrian kosong";
	}else{
		cout<<"\nAntrian : ";
		for (int i = perpus.top; i>= 0; i++){
			cout<<perpus.antrian[i] << ((i == 0) ? "" : ",");
		}
	}
}
int main(){
	int pilihan;
	inisialisasi();
	cout<<"\n1. Masukan Data\n"
	<<"2. Hapus Data\n"
	<<"3. Keluar\n"
	<<"Masukan Pilihan ";
	cin>> pilihan;
	switch (pilihan){
		case 1:
			inputData();
			break;
		case 2:
			hapusData();
			break;
			default:
				cout<<"Pilihan tidak tersedia"<<endl;
				break;
	}
	while (pilihan!=3);
}


#include <iostream>
#include<stdlib.h>
using namespace std;
struct node{
	int info;
	node *next;
}*top, *newptr, *save, *ptr;
node *create_new_node(int);
coid push(node *);
void display(node *);
int main(){
	//clrscr
	int inf;
	char ch= 'y';
	top=NULL;
	while(ch=='y' || ch=='Y'){
		cout<<"Masukan Node Baru..";
		cin>>inf;
		newptr = create_new_node(inf);
		if(newptr == NULL){
			cout<<"\nMaff.!!..tidak dapat menjalankan perintah..!!\n";		
		}
	}
}

getchar();
exit(1);

push(newptr);
cout<<"\nAntrian Tumpukan saat ini :\n";
display(top);
cout<<"\n Ingin menambah antrian ? (y/n)..";
cin>>ch;

getchar();

node *create_new_node(int x){
	ptr = new node;
	ptr->info = x;
	ptr->next = NULL;
	return ptr;
} 
void push(node *n){
	if(top==NULL){
		top=n;
	}else{
	save=top;
	top=n;
	n->next=save;
}
}
void display(node *n){
	while(n!=NULL){
		cout<<n->info<<" -> ";
		n=n->next;
	}
	cout<<"!!\n";
}
