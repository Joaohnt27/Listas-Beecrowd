#include <stdio.h>
 
int main() {
 
    int N;
    
    scanf("%d", &N);
    
    int TotalCobaias = 0;
    int TotalCoelhos = 0;
    int TotalRatos = 0;
    int TotalSapos = 0;
    
    int i;
    for (i = 0; i < N; i++){
        int Quantia;
        char Tipo;
        
        scanf("%d %c", &Quantia, &Tipo);
        
        TotalCobaias = TotalCobaias + Quantia; 
        
        switch (Tipo){
            case 'C': 
            TotalCoelhos = TotalCoelhos + Quantia;
            break;
            
            case 'R':
            TotalRatos = TotalRatos + Quantia;
            break;
            
            case 'S':
            TotalSapos = TotalSapos + Quantia;
            break;
        }
    }
    
    double percentualCoelhos = (double)TotalCoelhos / TotalCobaias * 100;
    double percentualRatos = (double)TotalRatos / TotalCobaias * 100;
    double percentualSapos = (double)TotalSapos / TotalCobaias * 100;

    printf("Total: %d cobaias\n", TotalCobaias);
    printf("Total de coelhos: %d\n", TotalCoelhos);
    printf("Total de ratos: %d\n", TotalRatos);
    printf("Total de sapos: %d\n", TotalSapos);
    printf("Percentual de coelhos: %.2lf %%\n", percentualCoelhos);
    printf("Percentual de ratos: %.2lf %%\n", percentualRatos);
    printf("Percentual de sapos: %.2lf %%\n", percentualSapos);
 
    return 0;
}