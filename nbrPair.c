#include <stdio.h>

int main( ){
int a;
printf( "veiller saisir une valeur");
scanf("%d",&a);
if( a%2==0){
    printf("la valeur %d est paire",a);
}
else {
    printf("la valeur %d est impaire",a);
}

return 0;

}
