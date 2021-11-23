#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.141592

int main(void){
    int datos[101], realX[101], imagX[101], realK[101], imagK[101];
    float arguW[101];
    int i, k, n;
    
    printf("Ingresar la cantidad de dígitos (debe ser potencia de 2): ");
    scanf("%d",&n);
    
    for (i=0; i<=(N-1); i++){
      printf("Ingresar el valor %d: ",(i+1));
      scanf("%d",&datos[i]);
    }

    if(n==1){
        return datos[i];
    }
    
    //e^(-i2p/n)
    //e^(iu)=cos(u)+isen(u)
    for (i=0; i<=(n-1); i++){             //donde i=n
       arguW[i]=(-2*PI)/i;
       realW[i]=cos(arguW[i]);    //está en rad
       imagW[i]=sin(arguW[i]);    //está en rad
       if ((i%2)==0){
            paresA[i]=datos[i];
            paresY[i]=datos[i];
        }
        else {
            imparA[i]=datos[i];
            imparY[i]=datos[i];
        }
    }

    for (k=0; k<=(N-1); k++){
        //Se muestran los pares de números
        printf("El complejo del %d dato es: (%d, %di)  \n",(k+1), realX[k], imagX[k]);
    }

    return 0;
}