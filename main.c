#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE * file;
    int op;
    float n1, n2, n3, n4, n5, n6, n7, n8, n9, n10;

    do
    {
        printf("Digite 1 para abrir um novo arquivo\n 2 para salvar o arquivo escrito\n 3 para abrir arquivo existente\n 0 para fechar o programa.\n");
        scanf("%i", &op);


        switch (op)
        {
        case 1:
            printf("Digite 10 numeros: \n");
            scanf("%f %f %f %f %f %f %f %f %f %f",
                  &n1, &n2, &n3, &n4, &n5, &n6, &n7, &n8, &n9, &n10);
            break;

        case 2:
            file = fopen("Alessandro_Bernardes.arq", "w+");
            if (!file)
            {
                printf("Arquivo invalido \n");
                system("pause");
                return -1;
            }
            else
            {
                fprintf(file, "%f %f %f %f %f %f %f %f %f %f \n",
                        n1, n2, n3, n4, n5, n6, n7, n8, n9, n10);

                fclose(file);
                break;

            }

        case 3:
            file = fopen("Alessandro_Bernardes.arq", "r");
            fscanf(file, "%f, %f, %f, %f, %f, %f, %f, %f, %f, %f",
                   &n1, &n2, &n3, &n4, &n5, &n6, &n7, &n8, &n9, &n10);

            printf("%.2f, %.2f, %.2f, %.2f, %.2f, %.2f, %.2f, %.2f, %.2f, %.2f \n",
                   n1, n2, n3, n4, n5, n6, n7, n8, n9, n10);
            break;

        case 0:
            system("pause");
            exit(0);

        default:
            printf("Comando Invalido!");
        }
        system("pause");
        system("cls");


    }
    while (op != 0);

    return 0;
}
