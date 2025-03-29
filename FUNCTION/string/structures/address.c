#include<stdio.h>



struct address{
    int houseNo;
    int block;
    char city[100];
    char state[100];
};

void printInfo(struct address adds);

int main(){
    struct address adds[5];

    printf("person 1 Info : ");
    scanf("%d",&adds[0].houseNo);
    scanf("%d",&adds[0].block);
    scanf("%s",adds[0].city);
    scanf("%s",adds[0].state);
    printf("\n");

    printf("person 1 Info : ");
    scanf("%d",&adds[1].houseNo);
    scanf("%d",&adds[1].block);
    scanf("%s",adds[1].city);
    scanf("%s",adds[1].state);
    printf("\n");
   

    printf("person 1 Info : ");
    scanf("%d",&adds[2].houseNo);
    scanf("%d",&adds[2].block);
    scanf("%s",adds[2].city);
    scanf("%s",adds[2].state);
    printf("\n");

    printf("person 1 Info : ");
    scanf("%d",&adds[3].houseNo);
    scanf("%d",&adds[3].block);
    scanf("%s",adds[3].city);
    scanf("%s",adds[3].state);
    printf("\n");

    printf("person 1 Info : ");
    scanf("%d",&adds[4].houseNo);
    scanf("%d",&adds[4].block);
    scanf("%s",adds[4].city);
    scanf("%s",adds[4].state);
    printf("\n");

    
    return 0;
}
void printInfo(struct address adds){
    printf("%d, %d, %s, %s" , adds.houseNo ,  adds.block, adds.city , adds.state );
}