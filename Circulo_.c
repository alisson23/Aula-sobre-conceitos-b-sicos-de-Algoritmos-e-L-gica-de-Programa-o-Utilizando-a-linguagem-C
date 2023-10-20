#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"");

    float raio;
    float perimetro;
    float area;
    int n;
    for(;;){
        printf("Digite o raio do ciculo em centimetros:\n");
        scanf("%f",&raio);
        perimetro = 2*3.14*raio;
        area = 2*3.14*(raio*raio);
        printf("O perímetro do circulo é:%f.3cm\n", perimetro);
        printf("A área do circulo é:%f.3cmˆ2\n", area);

        printf("Para calcular outro circulo digite 1, Para sair digite 2\n");
        scanf("%d",&n);

        if(n==2){
            printf("Saindo do programa\n");
            break;
        }
    }
    


}