//tentando adicionar arquivo linguagem c

#include <stdio.h>
void Soma(float a, int b){
    float result; //a declaração de variáveis e iguais
    //se faz na função main
    result= a+b;
    printf("A soma de %d com %6.3f = %6.3f\n", a,b,result);
}
void Subtracao(float a, int b){
    float result; 
    result= a-b;
    printf("A subtração de %d com %6.3f = %6.3f\n", a,b,result);
}
void Multiplicacao(float a, int b){
    float result; 
    result= a*b;
    printf("A multiplicação de %d com %6.3f = %6.3f\n", a,b,result);
}
void Divisao(float a, int b){
    float result; 
    result= a/b;
    printf("A divisão de %d com %6.3f = %6.3f\n", a,b,result);
}

int main(){
    
    int z;
    float x;
    z=10;
    x=12.3;
    
    Soma(x,z);
    Subtracao(x,z);
    Multiplicacao(x,z);
    Divisao(x,z);
}
