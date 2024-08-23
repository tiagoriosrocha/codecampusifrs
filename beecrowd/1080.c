/***************************************************************
    Instituto Federal do Rio Grande do Sul - Câmpus Ibirubá
    Curso Técnico Integrado em Informática
    Olimpíada de Programação 2023

    Alunos:
    - Joaquim R. Debiasi
    - Pedro Molinaro
***************************************************************/
#include <stdio.h>

int main(){
	int num,i, posi=0, aux=0; 
		
	for (i=0; i<100; i++){
		scanf("%d", &num);
		if (num>aux){
			aux = num;
			posi = i+1;
		}	
	}
    printf("%d\n", aux);
    printf("%d\n", posi);
return 0;
}