#include<stdio.h>

int main(){
    int mes,dia;

    printf("Insira o mes do seu aniversario: ");
    scanf("%d",&mes);
    printf("Insira o dia do seu aniversario: ");
    scanf("%d",&dia);

    if(mes == 1 && dia >= 20 || mes == 2 && dia <=18){
        printf("Voce e do signo de Aquario!!");
    }
    if(mes == 2 && dia>=19 || mes == 3 && dia<=20){
        printf("Voce e do signo de Peixes");
    }
    if(mes == 3 && dia>=21 || mes == 4 && dia<=20){
        printf("Voce e do signo de Aries");
    }
    if(mes == 4 && dia>=21 || mes == 5 && dia<=20){
        printf("Voce e do signo de Touro");
    }
    if(mes == 5 && dia>=21 || mes == 6 && dia<=20){
        printf("Voce e do signo de Gemeos");
    }
    if(mes == 6 && dia>=21 || mes == 7 && dia<=22){
        printf("Voce e do signo de Cancer");
    }
    if(mes == 7 && dia>=23 || mes == 8 && dia<=22){
        printf("Voce e do signo de Leao");
    }
    if(mes == 8 && dia>=23 || mes == 9 && dia<=22){
        printf("Voce e do signo de Virgem");
    }
    if(mes == 9 && dia>=23 || mes == 10 && dia<=22){
        printf("Voce e do signo de Libra");
    }
    if(mes == 10 && dia>=23 || mes == 11 && dia<=21){
        printf("Voce e do signo de Escorpiao");
    }
    if(mes == 11 && dia>=22 || mes == 12 && dia<=21){
        printf("Voce e do signo de Sagitario");
    }
    if(mes == 12 && dia>=22 || mes == 1 && dia<=19){
        printf("Voce e do signo de Capricornio");
    }

}