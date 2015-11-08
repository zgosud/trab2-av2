/*********************************
 * Trabalho 2 de programação de computadores I -vetores
 * Cursos de Sistemas de informação
 * Aluno: Zacarias Matricula:0050013234
 * Professor: Alex salgado
 * A partir da idade informada de um cidadão, diga se ele não pode votar (idade inferior a 16),
 *ou se o voto é facultativo (idade igual a 16 ou 17 ou ainda maior do que 70),
 *ou ainda se o voto é obrigatório para idades entre 18 e 70 (incluindo estes valores)*/

#include <stdio.h>

int main()
{
   int idade=0, complemento=0;
    
    printf("Informe a sua idade:\n");
    scanf("%d", &idade);
    
    if (idade<16)
    {
         complemento = 16 - idade;
        
        if(complemento==1)
        {
            printf("\nVc ainda não pode votar, espere mais %d ano.", complemento);
        }
    
        else
        {
            printf("\nVc ainda não pode votar, espere mais %d anos.", complemento);
        }
    }
    else if (idade==16 || idade==17 || idade>70)
    {
        printf("\nVc não é obrigado a votar, o seu voto é Facultativo!!!");
    }
    
    else
    {
        printf("O seu voto é obrigatorio, faça a diferença nas eleições!!!!");
    }
return 0;
}
    