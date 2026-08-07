/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    char genero, sub1, sub2;
    
    printf("Escolha um Genero:\n");
    printf("D - Drama\nC - Comedia\nA - Acao\n");
    scanf("%c", &genero);
    
    if (genero == 'D'|| genero == 'd'){
        printf("A - Aventura\nM - Misterio\nC - Crime\nP - Politico\n");
        scanf(" %c", &sub1);
        
        if (sub1 == 'A'|| sub1 == 'a'){
            printf("S - Suspense\nF - Fantasia\n");
            scanf(" %c", &sub2);
            
            if (sub2 == 'S'|| sub2 == 's'){
                printf("Sugestão: Lost\n");
            }
            else if (sub2 == 'F'|| sub2 == 'f'){
                printf("Sugestao: Game Of Thrones\n");
            }
        }
        else if (sub1 == 'M'|| sub1 == 'm'){
            printf("S - Scifi\nM - Medico\n");
            scanf(" %c", &sub2);
            
            if (sub2 == 'S'|| sub2 == 's'){
            printf("Sugestao: X-file\n");
            }
            else if (sub2 == 'M'|| sub2 == 'm'){
                printf("Sugestao: House M.D.\n");
            }
        }
        else if (sub1 == 'C'|| sub1 == 'c'){
            printf("Sugestao: Breaking Bad\n");
        }
        else if (sub1 == 'P'|| sub1 == 'p'){
            printf("Sugestao: House of Cards\n");
        }
    }
    else if (genero == 'C'|| genero == 'c'){
        printf("R - Romance\nM - Musical\nN - Nerd\n");
        scanf(" %c", &sub1);
        
        if (sub1 == 'R'|| sub1 == 'r'){
            printf("Sugestao: How I Met Your Mom\n");
        }
        else if(sub1 == 'M'|| sub1 == 'm'){
            printf("Sugestao: Glee\n");
        }
        else if (sub1 == 'N'|| sub1 == 'n'){
            printf("Sugestao: The Big Bang Theory\n");
        }
    }
    else if (genero == 'A'|| genero == 'a'){
        printf("D - Drama\nP - Policial\nC - Crime\n");
        scanf(" %c", &sub1);
        
        if (sub1 == 'D'|| sub1 == 'd'){
            printf("M - Misterio\nT - Terror\n");
            scanf(" %c", &sub2);
            
            if (sub2 == 'M'|| sub2 == 'm'){
                printf("Sugestao: Homeland\n");
            }
            else if (sub2 == 'T'|| sub2 == 't'){
                printf("Sugestao: The Walking Dead\n");
            }
            else if (sub1 == 'P'|| sub1 == 'p'){
            printf("Sugestao: CSI\n");
            }
            else if (sub1 == 'C'|| sub1 == 'c'){
            printf("Sugestao: Dexter\n");
            }
        }
    }
    return 0;
}