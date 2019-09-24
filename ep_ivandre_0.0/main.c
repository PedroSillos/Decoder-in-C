//--------------------------------------------------------------
// NOMES DOS RESPONS?VEIS: Te amo E Amo vc
//--------------------------------------------------------------

#include <stdio.h>
#include <stdlib.h>
//#include <conio.h>
#include <curses.h>
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
	NO* resp = NULL;
	NO* ultimo = NULL;

    for(int i = 0; i < strlen(entrada); i++){

        if(entrada[i] =='0') {
            if(i == strlen(entrada)-1) { //eh o ultimo char
                if(resp==NULL){ //eh o unico char da string
                    resp = (NO*)malloc(sizeof(NO));
                    resp->ch = entrada[i];
                    resp->prox = NULL;

                    ultimo = resp;
                }
                else { //nao eh o unico char da string
                    NO* novo = (NO*)malloc(sizeof(NO));
                    novo->ch = entrada[i];
                    novo->prox = NULL;

                    ultimo->prox = novo;
                    ultimo = novo;
                }
            }
            else { //nao eh o ultimo char
                i = i + 1; //pula o proximo char
            }
        }
        else if(entrada[i] =='1') {
            if(i == strlen(entrada)-1) { //eh o ultimo char
                if(resp==NULL){ //eh o unico char da string
                    resp = (NO*)malloc(sizeof(NO));
                    resp->ch = entrada[i];
                    resp->prox = NULL;

                    ultimo = resp;
                }
                else { //nao eh o unico char da string
                    NO* novo = (NO*)malloc(sizeof(NO));
                    novo->ch = entrada[i];
                    novo->prox = NULL;

                    ultimo->prox = novo;
                    ultimo = novo;
                }
            }
            else { //nao eh o ultimo char
                if(resp==NULL){ //string comeca com 1 (tem que resolver o caso "11")
                    resp = (NO*)malloc(sizeof(NO));
                    resp->ch = entrada[i+1]; //guarda o char depois do 1
                    resp->prox = NULL;

                    ultimo = resp;

                    i = i + 1;
                }
                else { //string nao comeca com 1 (ainda tem que resolver o caso "11")
                    NO* novo = (NO*)malloc(sizeof(NO));
                    novo->ch = entrada[i+1];
                    novo->prox = NULL;

                    ultimo->prox = novo;
                    ultimo = novo;

                    i = i + 1;
                }
            }
        }
        else if(entrada[i]=='2'|| entrada[i]=='3'|| entrada[i]=='4'|| entrada[i]=='5'|| entrada[i]=='6'|| entrada[i]=='7'|| entrada[i]=='8'|| entrada[i]=='9' ) {
            if(i == strlen(entrada)-1) { //eh o ultimo char
                if(resp==NULL){ //eh o unico char da string
                    resp = (NO*)malloc(sizeof(NO));
                    resp->ch = entrada[i];
                    resp->prox = NULL;

                    ultimo = resp;
                }
                else { //nao eh o unico char da string
                    NO* novo = (NO*)malloc(sizeof(NO));
                    novo->ch = entrada[i];
                    novo->prox = NULL;

                    ultimo->prox = novo;
                    ultimo = novo;
                }
            }
            else { //nao eh o ultimo char
                if(resp==NULL){ //string comeca com i
                    resp = (NO*)malloc(sizeof(NO));
                    resp->ch = entrada[i+1];
                    resp->prox = NULL;

                    ultimo = resp;

                    for(int j = 0; j < ((entrada[i] - '0') - 1); j++) { //-1 pq 1 ja foi no resp
                        NO* novo = (NO*)malloc(sizeof(NO));
                        novo->ch = entrada[i+1];
                        novo->prox = NULL;

                        ultimo->prox = novo;
                        ultimo = novo;
                    }

                    i = i + 1;
                }
                else { //string nao comeca com i
                    for(int j = 0; j < (entrada[i] - '0'); j++) {
                        NO* novo = (NO*)malloc(sizeof(NO));
                        novo->ch = entrada[i+1];
                        novo->prox = NULL;

                        ultimo->prox = novo;
                        ultimo = novo;
                    }

                    i = i + 1;
                }
            }
        }
        else { //nao eh numero
            if(resp==NULL){ //string comeca com i
                    resp = (NO*)malloc(sizeof(NO));
                    resp->ch = entrada[i];
                    resp->prox = NULL;

                    ultimo = resp;
            }
            else { //string nao comeca com i
                NO* novo = (NO*)malloc(sizeof(NO));
                novo->ch = entrada[i];
                novo->prox = NULL;

                ultimo->prox = novo;
                ultimo = novo;
            }
        }
    }
	return resp;
}
//---------------------------------------------------------
// use main() para fazer chamadas de teste ao seu programa
//---------------------------------------------------------
int main() {
    char entrada[] = "";

    printf("\n");
    printf("Entrada: ");
	printf(entrada);
    printf("\n");

	NO* teste = NULL;

	teste = decodificar(entrada);

	printf("\n");
	printf("Saida: ");
	while(teste) {
        printf("%c",teste->ch);
        teste=teste->prox;
	}
	printf("\n");

}
