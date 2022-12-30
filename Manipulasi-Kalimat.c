#include <stdio.h>

//Jika kata hurufnya berjumlah ganjil maka, setiap huruf pada urutan ganjil menjadi kapital dan sisanya huruf kecil
//Jika kata hurufnya berjumlah genap maka, setiap huruf pada urutan genap menjadi kapital dan sisanya huruf kecil
//semua kata pada 1 kalimat maksimal 100 karakter
//karakter awal diperbolehkan space atau kata
//karakter akhir kalimat diperbolehkan space
//space antara kata diperbolehkan lebih dari satu
//karakter yang diperkenankan hanya huruf kecil, kapital dan space

int main(){

    char kalimat[100];

    scanf("%[^\n]", &kalimat);

    int x=0;
    int i;
    int j;
    int k;
    int jumlah;
    int kapital;
    while(kalimat[x]!='\0'){
        x++;
    }
    //printf("%d\n", x);

    for(i=0;i<x;){
        kata:
        jumlah=0;
        for(j=i;j<x;){
            if(kalimat[j]>='a' && kalimat[j]<='z' || kalimat[j]>='A' && kalimat[j]<='Z'){
                jumlah++;
                j++;
                //printf("%d\n", j);
            }else{
                break;
            }
        }
        //printf("%d\n", j);
        //printf("%d\n", i);
        //printf("%d\n", jumlah);
        if(j==i){
            i++;
            goto kata;
        }else{
            if(jumlah%2==1){ //GANJIL
                //printf("i=%d, j=%d, jumlah=%d\n", i, j, jumlah);
                kapital=1;
                for(k=i;k<j;k++){
                    if(kapital%2==1 && kalimat[k]>='a' && kalimat[k]<='z'){
                        kalimat[k]=kalimat[k]-32;
                    }else if(kapital%2==0 && kalimat[k]>='A' && kalimat[k]<='Z'){
                        kalimat[k]=kalimat[k]+32;
                    }
                    kapital++;
                }
                i=i+jumlah;
            }else if(jumlah%2==0){
                //printf("i=%d, j=%d, jumlah=%d\n", i, j, jumlah);
                kapital=0;
                for(k=i;k<j;k++){
                    if(kapital%2==0 && kalimat[k]>='A' && kalimat[k]<='Z'){
                        kalimat[k]=kalimat[k]+32;
                    }else if(kapital%2==1 && kalimat[k]>='a' && kalimat[k]<='z'){
                        kalimat[k]=kalimat[k]-32;
                    }
                    kapital++;
                }
                i=i+jumlah;
            }
        }
    }
    printf("%s", kalimat);
}
