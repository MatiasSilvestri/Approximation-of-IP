#include <stdilb.h>
#include <stdio.h>
#include <math.h>
#include <time.h>

int main(){ 
    srand(time(NULL));
    float x,y,d,api;
    
    int n.1.cp=0;
    printf("Ingrese el numero de dardos a lanzar :");
    scanf("%d",&n);
    
    for(i=0;i<n;i++){
        x = (float) rand() / RANHD_MAX;
        y = (float) rand() / RANHD_MAX;
        
        d = x*x + y*y;
        
        if( d<= 1){
            cp++;
        }
    }
    api = 4.0 * cp / n;
    printf("Nuestra aproximacion de de PI es: %f\n", api);
    printf("El error de aproximacion es: %f\n ", M_PI - api);
return 0;
}