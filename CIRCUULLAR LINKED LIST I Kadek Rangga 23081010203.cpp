#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

struct node {
    int x;
    struct node *next;
};

typedef struct node node;

void tambahawal(node **head);
void tambahdata(node **head);
void transverse(node *head);
void hapusawal(node **head);
void hapustengah(node **head);
void hapusakhir(node **head);
void pencariandata(node *head);
void jumlahdata(node *head);
void totalnilaidata(node *head);

int main() {
    node *head;
    int pilih;

    head = NULL;

    do {
        system("cls");
        printf("Program Circular Linked List\n");
        printf("1. Tambah data di awal\n");
        printf("2. Tambah data di tengah\n");
        printf("3. Cetak isi list\n");
        printf("4. Hapus data awal\n");
        printf("5. Hapus data tengah\n");
        printf("6. Hapus data akhir\n");
        printf("7. Cari data\n");
        printf("8. Jumlah data list\n");
        printf("9. Total nilai data di list\n");
        printf("\nMasukkan pilihan (tekan 0 untuk keluar): ");
        scanf("%d", &pilih);

        if (pilih == 1) {
            tambahawal(&head);
        } else if (pilih == 2) {
            tambahdata(&head);
        } else if (pilih == 3) {
            transverse(head);
        } else if (pilih == 4) {
            hapusawal(&head);
        } else if (pilih == 5) {
            hapustengah(&head);
        } else if (pilih == 6) {
            hapusakhir(&head);
        } else if (pilih == 7) {
            pencariandata(head);
        } else if (pilih == 8) {
            jumlahdata(head);
        } else if (pilih == 9) {
            totalnilaidata(head);
        }

    } while (pilih != 0);

    return 0;
}

void tambahawal(node **head) {
    int angka;
    node *pnew, *tail = *head;

    system("cls");
    printf("Masukkan bilangan: ");
    scanf("%d", &angka);

    pnew = (node *)malloc(sizeof(node));
    pnew->x = angka;

    if (*head == NULL) {
        *head = pnew;
        pnew->next = *head;  // Point to itself in a circular list
    } else {
        while (tail->next != *head) {
            tail = tail->next;
        }
        pnew->next = *head;
        *head = pnew;
        tail->next = *head;  // Maintain circular structure
    }
}

void tambahdata(node **head) {
    int angka, pos;
    node *pnew, *pcurr = *head;
    int i = 1;

    system("cls");
    printf("Posisi penyisipan data: ");
    scanf("%d", &pos);
    printf("Masukkan angka yang ingin dimasukkan: ");
    scanf("%d", &angka);

    pnew = (node *)malloc(sizeof(node));
    pnew->x = angka;

    if (pos == 1) {
        tambahawal(head);
        return;
    }

    while (i < pos - 1 && pcurr->next != *head) {
        pcurr = pcurr->next;
        i++;
    }

    if (pcurr->next == *head && i < pos - 1) {
        printf("Posisi tidak ditemukan");
        getch();
    } else {
        pnew->next = pcurr->next;
        pcurr->next = pnew;
    }
}

void transverse(node *head) {
    node *pwalker = head;

    if (head == NULL) {
        printf("List kosong\n");
        getch();
        return;
    }

    printf("Isi list: \n");
    do {
        printf("%d ", pwalker->x);
        pwalker = pwalker->next;
    } while (pwalker != head);

    getch();
}

void hapusawal(node **head) {
    node *pcurr = *head, *tail = *head;

    if (*head == NULL) {
        printf("Tidak ada data yang dapat dihapus");
        getch();
        return;
    }

    if ((*head)->next == *head) {
        free(*head);
        *head = NULL;
    } else {
        while (tail->next != *head) {
            tail = tail->next;
        }
        *head = (*head)->next;
        tail->next = *head;
        free(pcurr);
    }
    printf("Data di awal telah dihapus");
    getch();
}

void hapustengah(node **head) {
    int pos;
    node *pcur = *head, *ppre = NULL;
    int i = 1;

    system("cls");
    transverse(*head);
    printf("\nPosisi data yang hendak dihapus: ");
    scanf("%d", &pos);

    if (pos == 1) {
        hapusawal(head);
        return;
    }

    while (i < pos && pcur->next != *head) {
        ppre = pcur;
        pcur = pcur->next;
        i++;
    }

    if (pcur == *head || i < pos) {
        printf("Data tidak ditemukan");
        getch();
    } else {
        ppre->next = pcur->next;
        free(pcur);
    }

    printf("Data telah dihapus");
    getch();
}

void hapusakhir(node **head) {
    node *pcur = *head, *ppre = NULL;

    if (*head == NULL) {
        printf("List kosong\n");
        getch();
        return;
    }

    if ((*head)->next == *head) {
        free(*head);
        *head = NULL;
    } else {
        while (pcur->next != *head) {
            ppre = pcur;
            pcur = pcur->next;
        }
        ppre->next = *head;
        free(pcur);
    }

    printf("Data terakhir berhasil dihapus");
    getch();
}

void pencariandata(node *head) {
    int angka;
    node *pcur = head;

    system("cls");
    printf("Masukkan data yang ingin dicari: ");
    scanf("%d", &angka);

    do {
        if (pcur->x == angka) {
            printf("Data ditemukan: %d", angka);
            getch();
            return;
        }
        pcur = pcur->next;
    } while (pcur != head);

    printf("Data tidak ditemukan");
    getch();
}

void jumlahdata(node *head) {
    int banyak = 0;
    node *pcur = head;

    if (head == NULL) {
        printf("Jumlah data di linked list: 0");
        getch();
        return;
    }

    do {
        banyak++;
        pcur = pcur->next;
    } while (pcur != head);

    printf("Jumlah data di linked list: %d", banyak);
    getch();
}

void totalnilaidata(node *head) {
    int sum = 0;
    node *pcur = head;

    if (head == NULL) {
        printf("Total nilai pada list anda adalah: 0");
        getch();
        return;
    }

    do {
        sum += pcur->x;
        pcur = pcur->next;
    } while (pcur != head);

    printf("Total nilai pada list anda adalah: %d", sum);
    getch();
}

