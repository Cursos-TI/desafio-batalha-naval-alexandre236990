# include <stdio.h>

int main(){

    int navio[3][3] = {

        {0, 0, 3},
        {0, 0, 0},
        {3, 0, 0}
    };

    int x;
    int y;
    

    printf("\nEntre com a primeira coordenada sendo 0, 1 ou 2 para tenta acertar o navio: ");
    scanf("%d", &x);

    printf("\nEntre com a segunda coordenada sendo 0, 1 ou 2 para tenta acertar o navio: ");
    scanf("%d", &y);
    
    if (navio[x][y] == 3) { 
        
        printf("\n\nParabens Vc acertou o navio\n\n");
        
         } else { 
            
            printf("\nVc errou o navio\n\n");
        }
    



    return 0;
}