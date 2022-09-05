#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{

    double num1, num2, resultado;
    char op = '0';

    do{
        num1 = num2 = resultado = 0; //Resetar as variáveis
        //imprime as opções da calculadora
        printf(" (1) somar\n");
        printf(" (2) subtrair\n");
        printf(" (3) multiplicar\n");
        printf(" (4) dividir\n");
        printf(" (0) Sair do programa\n");

        printf("Informe a operacao: \n");
        printf(">>>")
        op = getche();
        printf("\n");


   if(op!='0'){
        printf("Digite o primeiro numero:\n\t");
        scanf("%f", &num1);
        printf("Digite o segundo numero:\n\t");
        scanf("%f", &num2);

        if(op=='1'){
            resultado = num1 + num2;
        }else{
            if(op == '2'){
                resultado =num1 - num2;
            }else{
                if(op == '3'){
                    resultado = num1 * num2;
                }else{
                    if(op == '4'){
                        resultado =num1 / num2;
                    }
                }
            }
        }
   }

   printf("\nO resultado e: %f\n", resultado);

   printf("\nPrecione uma tecla para realizar uma nova operacao: ");
   getch();

system("cls");//limpar a tela

    }while(op !='0');

    return 0;
        
    }
