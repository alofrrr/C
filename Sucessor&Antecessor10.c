#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(){   
setlocale(LC_ALL, "Portuguese");

     int num;

       printf("\nDigite o número: ");       

        scanf("%d", &num);

    if (num == 1){       

printf("Número um. Sucessor 2. Antecessor 0.");   

}   

else if (num == 2){       

printf("Número dois. Sucessor 3. Antecessor 1.");   

}   

else if (num == 3){       

printf("Número três. Sucessor 4. Antecessor 2.");   

}   

else if (num == 4){       

printf("Número quatro. Sucessor 5. Antecessor 3."); 

  }   

else if (num == 5){       

printf("Número cinco. Sucessor 6. Antecessor 4.");   

}   

else if (num == 6){       

printf("Número seis. Sucessor 7. Antecessor 5.");   

}   

else if (num == 7){       

printf("Número sete. Sucessor 8. Antecessor 6.");   

}   

else if (num == 8){       

printf("Número oito. Sucessor 9. Antecessor 7.");   

}   

else if (num == 9){       

printf("Número nove. Sucessor 10. Antecessor 8."); 

  }   

else if (num == 10){       

printf("Número dez. Sucessor 11. Antecessor 9.");   

}   

return 0;

}