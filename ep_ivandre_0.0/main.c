//--------------------------------------------------------------
// NOMES DOS RESPONS?VEIS: Te amo E Amo vc
//--------------------------------------------------------------

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <malloc.h>
#include <string.h>

// ######### ESCREVA O NROUSP DO PRIMEIRO INTEGRANTE AQUI
char* nroUSP1() {
    return("0000000");
}

// ######### ESCREVA O NROUSP DO SEGUNDO INTEGRANTE AQUI (OU DEIXE ZERO)
char* nroUSP2() {
    return("0000000");
}

// ######### ESCREVA O NRO DO SEU GRUPO TAL QUAL CADASTRADO (LINK NO PDF DO EP)
char* grupo() {
    return("00");
}


// elemento da lista ligada a ser gerada
// observando que cada n? cont?m apenas um caractere (ch)
typedef struct estr {
        char ch;
        struct estr *prox;
} NO;


// funcao principal
NO* decodificar(char* entrada);


//------------------------------------------
// O EP consiste em implementar esta funcao
// e outras funcoes auxiliares que esta
// necessitar
//------------------------------------------
NO* decodificar(char* entrada) {

	NO* resp;
	resp = NULL;

	// seu codigo AQUI

	return resp;
}



//---------------------------------------------------------
// use main() para fazer chamadas de teste ao seu programa
//---------------------------------------------------------
int main() {

	NO* p = NULL;

	//transformar o string entrada em uma lista ligada p

	NO* teste = NULL;
	char entrada[] = "frase de teste5!";
	teste = decodificar(entrada);

}
