#include<stdio.h>


int main (){
for(int i  = 0 ;  i < 5  ;  i++){
    for(int j = 0 ; j <5; j++){
        printf("*");
    }
    printf("\n");

}

for(int i= 0 ; i <  5 ;  i++){
    for(int j = 0 ; j < i ; j++){
        printf("*");
    }
    printf("\n");
}

for(int i = 0 ;  i < 5  ; i++){
    for(int j = 0 ;  j < 5-i ;j++  ){
        printf("*");
    }
    printf("\n");
}

for(int i =0 ; i <  5 ;  i++){
    for(int k = 0 ; k <  i ;k++ ){
        printf(" ");
    }
    for(int j=  0  ;  j < i  ; j++){
        printf("*");   
    }
     for(int m = 0 ; m <  i ;m++ ){
        printf(" ");
    }
    printf("\n");
}

printf("---------\n");
for(int  i = 0 ;  i < 5 ; i ++){
    for(int j = 0 ; j < 5 -i ; j++){
        printf(" ");
    }
    for(int k= 0 ;  k < 2* i + 1  ; k++ ){
         if (k==0 ||  k == 2 * i || i == 3) {
                printf("*");
            } else {
                printf(" ");
            }
    }
    for(int m= 0 ; m <5-i; m++){
        printf(" ");
    }
    printf("\n");
}

for(int  i = 0 ;  i < 5 ; i ++){
    for(int j = 0 ; j < 5 -i ; j++){
        printf(" ");
    }
    for(int k= 0 ;  k < 2*5  - i + 1  ; k++ ){
         if (k==0 ||  k == 2 * i || i == 3) {
                printf("*");
            } else {
                printf(" ");
            }
    }
    for(int m= 0 ; m <5-i; m++){
        printf(" ");
    }
    printf("\n");
}

for(int i = 0 ;  i < 5 ;  i ++){
    for(int j = 0 ;   j <5 ;  j++){
        if(j== 0 || j == 4 || j == i){
            printf("*");
        }else{
            printf(" ");
        }



    }
    printf("\n");
}

for(int i = 0 ;  i <  5 ;  i ++){
    for(int j =  0 ;  j <  4 ;  j++){
        printf(" ");
    }
    for(int k = 0 ;   k < i  ; k++){
        printf("*");
    }
     for(int m =  0 ;  m <  4 ;  m++){
        printf(" ");
    }
    printf("\n");
}

for(int i = 1 ; i <  5 ; i ++){
    for(int j  = 0  ;  j < i ;  j++){
        printf("*");
    }
    printf("\n");
}


    return 0;
}

