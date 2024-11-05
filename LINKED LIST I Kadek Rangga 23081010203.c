#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

struct node {
int x;
struct node *next;
};

typedef struct node node;

void tambahawal(node **head);
void tambahdata (node **head);
void transverse (node *head);


int main(){
node *head;
char i;

head = NULL;
do {
    system("cls");
    printf("Program pointer\n");
    printf("tekan 1. untuk menambahkan data di awal\n");
    printf("tekan 2. untuk menambahkan data di tengah");
    prinf("tekan 3. untuk mencetak isi list");
    printf("masukkan angka : (tekan s untuk keluar) ");
    scanf("%c",&pilih);

    if(pilih==1)
        tambahawal(&head);
        if(pilih==2)
            tambahdata(&head);
        else if (pilih==3)
            transverse(&head);
            else if (pilih == 5) {
            hapusAwal(&head);
        } else if (pilih == 6) {
            hapusTengah(&head);
        } else if (pilih == 7) {
            hapusAkhir(&head);
        } else if (pilih == 8) {
            pencarianData(head);
        } else if (pilih == 9) {
            jumlahData(head);
        } else if (pilih == 10) {
            penjumlahanData(head);
}
        while(pilih != s)

    return 0;
}

*node *createNode(void){
  node *ptr;

  ptr = (node *)malloc(sizeof(node));
  return(ptr);
}*

void tambahawal(**head){
int angka;
node *baru;

system("cls");
fflush(stdin);
printf("masukkan bilangan : ");
fflush(stdin);
scanf("%d", &angka);
baru = (node*) malloc(sizeof(node));

if (baru != NULL){
    baru-> x = bil;
    baru -> next = NULL ;
    baru -> next = *head;
    *head = baru;

}
else if {
    printf("alokasi memori gagal");
    getch();
}
}
void tambahdata(**head){
int angka,pos;
node *curr, *baru;

system("cls");
fflush(stdin);
printf("posisi penyisipan data");
scanf("%d", &pos);
printf("masukkan angka yang ingin anda masukkan");
scanf("%d",&angka);

curr =*head;
curr = curr -> next;

baru =(node*) malloc(sizeof(node));

if(curr == NULL){
        printf("node tidak ditemukan");
        getch();

}
else if (new== NULL){
    printf("pos tidak ditemukkan");
    getch();
}
else {
    baru -> x = angka;
    baru -> next = NULL;
    baru -> next = baru -> next;
    curr ->next = baru;
}
void tranverse(node *head){
	node *pWalker;
   system("cls");
	pWalker = head;
	while (pWalker != NULL){
   	printf("%d\t", pWalker -> data);
   	pWalker = pWalker -> next;
      printf(" -> ");
	}
   printf("NULL");
}
void hapusAwal(node **head) {
    if (*head == NULL) {
        printf("List kosong, tidak ada data untuk dihapus.\n");
        getch();
        return;
    }

    node *temp = *head;
    *head = (*head)->next;
    free(temp);
    printf("Data di awal berhasil dihapus.\n");
    getch();
}


void hapusTengah(node **head) {
    int pos;
    node *pCur, *pPrev;

    system("cls");
    tranverse(*head);
    printf("\nposisi data yang akan dihapus: ");
    scanf("%d", &pos);

    pCur = *head;
    pPrev = NULL;

    while (pCur != NULL && pCur->data != pos) {
        pPrev = pCur;
        pCur = pCur->next;
    }

    if (pCur == NULL) {
        printf("Node tidak ditemukan.\n");
        getch();
        return;
    }

    if (pPrev == NULL) {
        *head = pCur->next;
    } else {
        pPrev->next = pCur->next;
    }
    free(pCur);
    printf("Data di tengah berhasil dihapus.\n");
    getch();
}


void hapusAkhir(node **head) {
    if (*head == NULL) {
        printf("List kosong, tidak ada data untuk dihapus.\n");
        getch();
        return;
    }

    node *pCur = *head;
    node *pPrev = NULL;

    while (pCur->next != NULL) {
        pPrev = pCur;
        pCur = pCur->next;
    }

    if (pPrev == NULL) {
        *head = NULL;
    } else {
        pPrev->next = NULL;
    }
    free(pCur);
    printf("Data di akhir berhasil dihapus.\n");
    getch();
}


void pencarianData(node *head) {
    int bilangan;
    node *pCur = head;

    system("cls");
    printf("Masukkan bilangan yang dicari: ");
    scanf("%d", &bilangan);

    while (pCur != NULL) {
        if (pCur->data == bilangan) {
            printf("Data %d ditemukan.\n", bilangan);
            getch();
            return;
        }
        pCur = pCur->next;
    }
    printf("Data %d tidak ditemukan.\n", bilangan);
    getch();
}



void jumlahData(node *head) {
    int count = 0;
    node *pCur = head;

    while (pCur != NULL) {
        count++;
        pCur = pCur->next;
    }
    printf("Jumlah data di linked list: %d\n", count);
    getch();
}

void penjumlahanData(node *head) {
    int sum = 0;
    node *pCur = head;

    while (pCur != NULL) {
        sum += pCur->data;
        pCur = pCur->next;
    }
    printf("Hasil penjumlahan dari semua data di linked list: %d\n", sum);
    getch();
}


}

return 0;
}
