#include <stdio.h>
#include <locale.h>

#define inicio "--------INICIO--------"
#define resultado "-----------RESULTADO-----------"
#define corte "-------------------------------------"

int main(){
    setlocale(LC_ALL,"Portuguese");
    printf("\n%s\n", inicio);

    int mat[3][3] = {{67, 23, 43},{467, 45, 67},{77, 876, 934}};
    int i, j;

    printf("\n%s\n", resultado);
    printf("Imprimindo a primeira linha:\n");
    for (i = 0; i < 3; i++){
        printf("%d", mat[0][i]);
    }
    printf("\n");
    printf("Imprimindo a matriz toda:\n");
    for (j = 0; j < 3; j++){
        for (i = 0; i < 3; i++){
          printf("%d", mat[j][i]);  
        }
        printf("\n");
    }
    
}