#include <stdio.h>
#include <windows.h>
#include <stdlib.h>


int main () {

    printf("sistema log.....\n");
    sleep(2);
    system("cls");
    Sleep(3);
    printf("BEM VINDO AO SISTEMA LOG\n");


     char nome[50];
     int qr_code;
     float valor_compra;


 printf("qual e o nome da ferramneta:");
 scanf("%s",&nome);

printf("qual e o seu qr code:");
scanf("%d", &qr_code);


printf("digite e o valor da compra:");
scanf("%f",&valor_compra);

if (valor_compra > 0){
printf("recibo ferralog");
printf("seu nome e %s\n",nome);
printf("seu qrcode e %d\n",qr_code);
printf("seu recibo e %f",valor_compra);
}

else{
printf("opcao invalida");

}
return 0;
}


