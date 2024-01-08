#include<stdio.h>
#include <iostream>

using namespace std;

int main()
{
    float salario, novosalario, reajuste; 
    
    scanf("%f.2",&salario);
    
    if(salario <= 400 ){
        reajuste = salario * 0.15;
        novosalario = salario + reajuste;
        
        printf("Novo salario: %.2f\n", novosalario);
        printf("Reajuste ganho: %.2f\n", reajuste);
        printf("Em percentual: 15 %%\n");
        
        
    } else if (salario > 400.01 && salario <= 800){
        reajuste = salario * 0.12;
        novosalario = salario + reajuste;
        
        printf("Novo salario: %.2f\n", novosalario);
        printf("Reajuste ganho: %.2f\n", reajuste);
        printf("Em percentual: 12 %%\n");
        
        
    } else if (salario > 800.01 && salario <= 1200){
        reajuste = salario * 0.10;
        novosalario = salario + reajuste;
        
        printf("Novo salario: %.2f\n", novosalario);
        printf("Reajuste ganho: %.2f\n", reajuste);
        printf("Em percentual: 10 %%\n");
        
    
    } else if (salario > 1200.01 && salario <= 2000){
        reajuste = salario * 0.07;
        novosalario = salario + reajuste;
        
        printf("Novo salario: %.2f\n", novosalario);
        printf("Reajuste ganho: %.2f\n", reajuste);
        printf("Em percentual: 7 %%\n");

    }else {
        reajuste = salario * 0.04;
        novosalario = salario + reajuste;
        
        printf("Novo salario: %.2f\n", novosalario);
        printf("Reajuste ganho: %.2f\n", reajuste);
        printf("Em percentual: 4 %%\n"); 
    }
    
    return 0;
}