/*Trabalho 2 de Programacao de Computadores I - Retângulo
   Curso de Sistemas de Informacao
   Zacarias Gonçalves de Oliveira - Matricula: 0050013234
   Professor: Alex Salgado  */
    
#include <stdio.h>
#include <string.h> 
int main()
{
    //char a=42, b=64, c=35, desenho;
    
    //char a= *, b= @, c= #, desenho;
    int resposta, alt, comp, i, j;
    char nome[20], continuar;
    
    do
    {
        printf("Digite o seu nome:\n");
        scanf("%s", nome);
    
        printf("\n%s, Digite # ou 2 para desenhar o Retangulo:\n %c:\n", nome, 35);
        //desenho = fgetc(stdin);
        scanf("%d", &resposta);
    
            printf("\n%s, digite 6 como Comprimento do seu Retangulo:\n", nome);
            scanf("%d",&comp);
        
            while(comp<3)
            {
                printf("\n%s, voce digitou para o Comprimento, um numero menor ou igual a 3. \nPara desenhar o seu Retangulo, digite um numero maior do que 4:\n", nome);
                scanf("%d",&comp);
            }
        
            printf("\n%s, digite 4 para a Altura do seu Retangulo:\n", nome);
            scanf("%d",&alt);
        
            while(alt<3)
            {
                printf("\n%s, voce digitou para a Altura, um numero menor ou igual a 3. \nPara desenhar o seu Retangulo, digite um numero maior do que 2:\n", nome);
                scanf("%d",&alt);
            }

            printf("\n\nOlá, meu nome eh %s, e o meu retangulo ficou assim:\n\n", nome);
        
            for (i=1; i<=alt; i++)
            {
                for(j=1; j<=comp; j++)
                {
                    if (i>1 && j>1 && j<comp && i<alt)
                    {
                        printf(" ");
                    }
                
                    else
                    {
                        printf("%c",42);
                    }
                }
            printf("\n");
            }
        
            printf("\nDeseja continuar (s/n)?\n");
            scanf(" %c", &continuar);
        
        }

        else
            
        {
            printf("\n%s, digite 6 como o Comprimento do seu Retangulo:\n", nome);
            scanf("%d",&comp);
        
            while(comp<3)
            {
                printf("\n%s, voce digitou para o Comprimento, um numero menor ou igual a 2. \nPara desenhar o seu Retangulo, digite um numero maior do que 2:\n", nome);
                scanf("%d",&comp);
            }
        
            printf("\n%s, digite um 4 para a Altura do seu Retangulo:\n", nome);
            scanf("%d",&alt);
        
            while(alt<3)
            {
                printf("\n%s, voce digitou para a Altura, um numero menor ou igual a 2. \nPara desenhar o seu Retangulo, digite um numero maior do que 2:\n", nome);
                scanf("%d",&alt);
            }
        
            printf("\n\nOlá, meu nome eh %s, e o meu retangulo ficou assim:\n\n", nome);
        
            for (i=1; i<=alt; i++)
            {
                for(j=1; j<=comp; j++)
                {
                    if (i>1 && j>1 && j<comp && i<alt)
                    {
                        printf(" ");
                    }
                
                    else
                    {
                        printf("%c",35);
                    }
                }
            printf("\n");
            }
            printf("\nDeseja continuar (s/n)?\n");
            scanf(" %c", &continuar);
        }
    }
    while(continuar == 's');
    
    return 0;
}