#include <stdio.h>

//struct for list
struct Node1{
    int info;
    struct Node1 *next;
    struct Node1 *down;
}; typedef struct Node1 *List;

//Struct for rows
struct Node2{
   List next;
}; typedef struct Node2 * NodeRow;

//Struct for col
struct Node3{
   List down;
}; typedef struct Node3 * NodeCol;

void printRow(NodeRow Row, int n){
    if(Row==NULL){
         printf("Empty list!\n");
    }else{
        for(int i=0; i<n; i++){
            List Temp = Row[i].next;
            int empty = 1;
            printf("linha %d: ",i);
            while(Temp!=NULL){
                if(Temp->info != 0){
                    empty = 0;
                    printf("%d ",Temp->info);
                }
                Temp = Temp->next;
            }
            if(empty == 1)
                printf("(Nenhum)");
            printf("\n");
        }
        printf("\n");
    }
}

void printCol(NodeCol Col, int n){
    if(Col==NULL){
         printf("Empty list!\n");
    }else{
        for(int i=0; i<n; i++){
            List Temp = Col[i].down;
            int empty = 1;
            printf("Coluna %d: ",i);
            while(Temp!=NULL){
                if(Temp->info != 0){
                    empty = 0;
                    printf("%d ",Temp->info);
                }
                Temp = Temp->down;
            }
            if(empty == 1)
                printf("(Nenhum)");
            printf("\n");
        }
        printf("\n");
    }
}


void freeList(NodeRow Row, NodeCol Col,int n){
    if(Row != NULL){
        List Remove, Temp;
        for(int i=0; i<n; i++){
            Temp = Row[i].next;
            while(Temp != NULL){
                Remove = Temp;
                Temp = Temp->next;
                free(Remove);
            }
        }
    free(Row);
    free(Col);
    }
}


int main(){
    int nrow, ncol;
    scanf("%d",&nrow);//numero de linhas
    scanf("%d",&ncol);//numero de colunas
    if(nrow==0 || ncol==0)
        return 0;
    NodeRow Row = malloc(nrow * sizeof(NodeRow));
    NodeCol Col = malloc(ncol * sizeof(NodeCol));
    List L = NULL;
    List Temp;
    List New;
    //Cria as lista e conecta as setas para frente
    for(int i=0; i<nrow; i++){ //cria primeira coluna
        int info;
        L = malloc(sizeof(List));
        scanf(" %d", &L->info);
        L->next = NULL;
        L->down = NULL;

        Temp = L;
        if(i==0)
            Col[0].down = L;

        for(int j=1; j<ncol; j++){//crio linhas (horizontal)
            New = malloc(sizeof(List));
            scanf(" %d", &New->info);
            New->next = NULL;
            New->down = NULL;
            if(i==0)
                Col[j].down = New;
            Temp->next = New;
            Temp = Temp->next;
        }
        Row[i].next = L;
    }

   //Conectas as setas para baixo
   List Ant;

   for(int i=1;i<nrow;i++){//down
       Ant = Row[i-1].next;
       Temp = Row[i].next;
       for(int j=0;j<ncol;j++){//next
            Ant->down = Temp;
            Ant = Ant->next;
            Temp = Temp->next;
            if(j == ncol-2){//Ultimo elemento da coluna
                Temp->down = NULL;
            }
       }
   }
   printf("\n");
   printRow(Row,nrow);
   printCol(Col,ncol);
   freeList(Row,Col,nrow);
   return 0;
}
