#include<stdio.h>
int funExponente(int b,int e){
    int i;
    int resultado=1;
    for(i=0;i<e;i+=1){
        resultado = resultado * b;
    }
    return resultado;
}
int main(){
    int base,exponente;
    printf("Ingrese el numero que desee:");
    scanf("%d",&base);
    printf("Ingrese la potencia:");
    scanf("%d",&exponente);
    printf("La potencia de %d, con exponente %d es = %d \n",base,exponente,funExponente(base,exponente));
    return 0;
}
