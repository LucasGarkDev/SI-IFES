#include <stdio.h>
#include <stdlib.h> 

int soma(int n){
    if (n == 1){ 
        return 1;
    }else{ 
        return (n + soma(n - 1));
    }
} 

// void printd (int n) {
//     if (n < 0) { /* imprime sinal */
//         putchar('-');
//         n = -n;
//     }
//     if (n / 10){ /* termino recursao */
//         printd(n/10); /* recursao se n>10 */
//         putchar(n % 10 + '0'); /* senao imprime char */
//     }
// }

main(){
    int n;
    printf("Numeros:");
    scanf("%d", &n);
    printf("%d\n", soma(n));
    return 0;
}

