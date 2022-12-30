#include <stdio.h>

int main(){
    int n;
    int i;
    scanf("%d", &n);

    int x[n];
    int y[n];
    int alur[n];
    int keliling=0;

    for(i=0;i<n;i++){
        scanf("%d %d", &x[i], &y[i]);
    }

    for(i=0;i<n;i++){
        if(i==n-1){
            if(x[i]==x[0]){
                if(y[0]>y[i]){
                    alur[i]=y[0]-y[i];
                    if(alur[i]<0){
                        alur[i]*=-1;
                    }
                }else if(y[i]>y[0]){
                    alur[i]=y[i]-y[0];
                    if(alur[i]<0){
                        alur[i]*=-1;
                    }
                }
            }
            if(y[i]==y[0]){
                if(x[0]>x[i]){
                    alur[i]=x[0]-x[i];
                    if(alur[i]<0){
                        alur[i]*=-1;
                    }
                }else if(x[i]>x[0]){
                    alur[i]=x[i]-x[0];
                    if(alur[i]<0){
                        alur[i]*=-1;
                    }
                }
            }
        }
        else if(x[i]==x[i+1]){
            if(y[i+1]>y[i]){
                alur[i]=y[i+1]-y[i];
                if(alur[i]<0){
                    alur[i]*=-1;
                }
            }else if(y[i]>y[i+1]){
                alur[i]=y[i]-y[i+1];
                if(alur[i]<0){
                    alur[i]*=-1;
                }
            }
        }else if(y[i]==y[i+1]){
            if(x[i+1]>x[i]){
                alur[i]=x[i+1]-x[i];
                if(alur[i]<0){
                    alur[i]*=-1;
                }
            }else if(x[i]>x[i+1]){
                alur[i]=x[i]-x[i+1];
                if(alur[i]<0){
                    alur[i]*=-1;
                }
            }
        }
    }

    for(i=0;i<n;i++){
        keliling+=alur[i];
    }

    printf("%d", keliling);

}
