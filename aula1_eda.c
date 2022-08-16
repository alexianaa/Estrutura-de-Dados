#include <stdio.h>
#include <stdlib.h>

int main(){
    int esc;
    printf("Escolha entre:\n\t1.ter um unicornio\n\t2.viajar pra tailandia\n\t3.fazer\n");
    scanf("%d",&esc);
    switch (esc)
    {
    case 1:
        printf("voce esta no mundo das nuvens, acorde\n");
        break;
    case 2:
        printf("ok, aceitavel tenha um bom dia\n");
        break;
    case 3:
        printf("vamos\n");
        break;    
    default:
        printf("escolhe uma opcao valida boco\n");
        break;
    }

    return 0;
}
