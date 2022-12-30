#include <stdio.h>

//Jumlah angka yang dimulai dari 10 sampai dan 100 yang bisa dibagi beberapa bilangan

int main(){
    int n;
    int i;
    int j;
    int pembagi[4];
    int bilangan[91];
    int status;
    int bisa_dibagi=0;

    scanf("%d", &n);

    for(i=0;i<n;i++){
        scanf("%d", &pembagi[i]);
    }

    for(i=0;i<91;i++){
        bilangan[i]=i+10;
    }

    /*for(i=0;i<91;i++){
        printf("%d ", bilangan[i]);
    }*/

    for(i=0;i<91;i++){
        for(j=0;j<n;j++){
            if(bilangan[i]%pembagi[j]==0){
                status=1;
            }else{
                status=0;
                break;
            }
        }
        if(status==1){
            printf("%d ", bilangan[i]);
            bisa_dibagi++;
        }
        status=0;
    }
    if(bisa_dibagi==0){
        printf("TIDAK ADA");
    }
}
