#include<stdio.h>
#include<conio.h>

struct mahasiswa {
	char nama[50];
	char jeniskelamin[10];
	int angka;
	int mahasiswa = 0;
	int mahasiswi = 0;
	
	node *next;
};

typedef struct mahasiswa mahasiswa ;


void tambahawal(node **head);
void tambahdata(node **head);
void tambahpos(node **head);
void hapusdata(node **head);
void tampilmahasiswa(*head);
void tampilmahasiswi(*head);
void lingkarangabungan(node *head);

int main() {
	int pilih;
	struct mahasiswa;
	node *head;
	
	node *head =NULL;
	
	while(pilih!=0)
	printf("LINGKARAN CAMPING KELAS STRUKTUR DATA : ");
	printf("Masukkan pilihan anda : (ketik 0 apabila ingin keluar)");
	printf("1. Memasukkan mahasiswi/mahasiswa di awal ");
	printf("2. Memasukkan mahasiswi/mahasiswa di tengah ");
	printf("3. Memasukkan mahasiswi/mahasiswa setelah mahasiswa tertentu");
	printf("4. Menghapus mahasiswi/mahasiswa");
	printf("5. Tampilkan lingkaran mahasiswa\n");
    printf("6. Tampilkan lingkaran mahasiswi\n");
	printf("7. Tampilkan lingkaran gabungan (mahasiswa dan mahasiswi)\n");
	
	if(pilih==1){
		void tambahawal(node **head);
	}
	else if(pilih==2){
		void tambahdata(node **head);
	}
	else if (pilih==3){
		void tambahpos(node **head);
	}
	else if(pilih==4){
		void hapusdata(node **head);
	}
	else if(pilih==5){
		void tampil mahasiswa(node *head);
	}
	else if(pilih==6){
		void tampilmahasiswi(node *head);
	}
	else if(pilih==7){
		void lingkarangabungan(node *head);
	}
	else {
		printf("pilihan tidak valid");
		getch();
	}
}


	void tambahawal(node **head){
		node *pnew,pcur = *head;
		int x;
		
		if(*count >= 20 ){
			printf("lingkaran penuh");
		}
		
		system("cls");
		printf("masukkan nama mahasiswa");
		fgets ("%s",&nama);
		
		pnew = (node *) malloc(sizeof(node));
		pnew -> nama = nama;
		
		pcur = pnew;
		pnew -> next = phead-> next;
		
	}
	
		typedef struct Node {
    char nama[50];
    char jenis_kelamin;
    struct Node* next;
} Node;

Node* headMahasiswa = NULL;
Node* headMahasiswi = NULL;
int jumlahMahasiswa = 0;
int jumlahMahasiswi = 0;

Node* createNode(char* nama, char jenis_kelamin) {
    Node* pnew = (Node*)malloc(sizeof(Node));
    strcpy(pnew->nama, nama);
    pnew->jenis_kelamin = jenis_kelamin;
    pnew->next = pnew;
    return pnew;
}

void tambahMahasiswa(Node** head, int* count, char* nama, char jenis_kelamin, int max) {
    if (*count >= max) {
        printf("Lingkaran penuh!\n");
        return;
    }
    Node* pnew = createNode(nama, jenis_kelamin);
    if (*head == NULL) {
        *head = pnew;
    } else {
        Node* list = *head;
        while (list->next != *head) {
            list = list->next;
        }
        list->next = pnew;
        pnew->next = *head;
    }
    (*count)++;
}

void hapusMahasiswa(Node** head, int* count, char* nama) {
    if (*head == NULL) {
        printf("Lingkaran kosong!\n");
        return;
    }

    Node* list = *head;
    Node* prev = NULL;

    if (strcmp(list->nama, nama) == 0) {
        if (list->next == *head) {
            free(list);
            *head = NULL;
        } else {
            while (list->next != *head) {
                list = list->next;
            }
            list->next = (*head)->next;
            free(*head);
            *head = list->next;
        }
        (*count)--;
        return;
    }

    do {
        prev = list;
        list = list->next;
    } while (list != *head && strcmp(list->nama, nama) != 0);

    if (list == *head) {
        printf("%s tidak ditemukan!\n", nama);
        return;
    }

    prev->next = list->next;
    free(list);
    (*count)--;
}
	void lingkaranmahasiswa(node *head,int *count,char *nama){
		
		if (lingkaran == NULL){
		printf("isi lingkaran kosong");
	}
		else if (lingkaran != NULL){
			printf("isi lingkaran = ", isilingkaran)
		}	
	}

