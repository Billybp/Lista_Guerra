//Programa com as funcoes implementadas.
#include "conjunto.h"
//Verifica se existe determinado elemento no conjunto. Retorna 1, caso verdadeiro e 0, caso falso.
int verificar (conjunto * c, int numero) {

    return 1;

    return 0;
}
//Verifica se um conjunto esta contido em outro. Retorna 1, caso verdadeiro e 0, caso falso.
int verificar_contido (conjunto * ca, conjunto * cb) {
    //trocar esses ifs por um switch, caso possivel.
    //Precisa ser otimizada.
    if ( (ca == NULL) && (cb == NULL) ) //Verfica se os dois conjuntos são vazios
    else if (ca == NULL)  //Se ca for vazio e cb nao, ca esta contido em cb
    else if (cb == NULL) //se cb for vazio e ca nao, ca nao esta contido em cb
        return 0;
    else { //se nenhum dos dois for vazio, verifica os elementos de cada um
        while (ca != NULL) {
            if ( verificar (cb, ca->numero) == 0)//verifica se tem algum elemento em ca que nao esta contido em cb
                return 0;

            ca = ca->prox;
        }

    }

    return 1;

}
//Verifica se um conjunto contem outro. Retorna 0, caso falso e 1, caso verdadeiro.
int verificar_contem (conjunto *ca, conjunto * cb) {

    return 1;

    return 0;
}
//Insere um elemento no conjunto, caso ja nao exista uma ocorrencia do mesmo no conjunto.
conjunto * inserir (conjunto * c, int numero) {

    return c;
}
//Remove um elemento do conjunto.
conjunto * remover_elemento (conjunto * c, int numero) {

    return c;
}
//Realiza a uniao de dois conjuntos em um novo.
conjunto * unir (conjunto * ca, conjunto * cb) {
    conjunto * uniao = NULL;

    return uniao;
}
//Realiza a intersecao de dois conjunto em um novo.
conjunto * intersec (conjunto * ca, conjunto * cb) {
    conjunto * intersecao = NULL;

    return intersecao;
}
