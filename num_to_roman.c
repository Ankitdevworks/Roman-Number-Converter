#include<stdio.h>
int input() ;
void roman(int) ;
int count(int) ;
int main(){
    int num = input() ;
    roman(num) ;
    return 0 ;
}
int input(){
    int num  ;
    printf("enter the number : ") ;
    scanf("%d",&num) ;
    return num ;
}
void roman(int num ){
    int a , b , c , d , e , f ;
    switch(count(num)){
        case 7:
        f = num ;
        f = f / 1000000 ;
        num = num - 1000000*f ;
        if(f <= 3){
            for(int i = f ; i > 0 ; i--){
                printf("M\u0305") ;
            }
        }
        else if(f > 3 && f <= 8){
            if(f < 5){
                for(int j = 5 - f ; j > 0 ; j-- ){
                    printf("I\u0305\u0305") ;
                }
                printf("V\u0305\u0305") ;
            }
            else{
                printf("V\u0305\u0305") ;
                for(int r = f - 5 ; r > 0 ; r-- ){
                    printf("M\u0305") ;
                }
            } ;
        }
        else if(f == 9) 
        printf("I\u0305\u0305X\u0305\u0305") ;
        case 6:
        e = num ;
        e = e / 100000 ;
        num = num - 100000*e ;
        if(e <= 3){
            for(int i = e ; i > 0 ; i--){
                printf("C\u0305") ;
            }
        }
        else if(e > 3 && e <= 8){
            if(e < 5){
                for(int j = 5 - e ; j > 0 ; j-- ){
                    printf("C\u0305") ;
                }
                printf("D\u0305") ;
            }
            else{
                printf("D\u0305") ; // to print single overline
                for(int r = e - 5 ; r > 0 ; r-- ){
                    printf("C\u0305") ;
                }
            } ;
        }
        else if(e == 9) 
        printf("C\u0305M\u0305") ; // to print double overline
        case 5:
        d = num ;
        d = d / 10000 ;
        num = num - 10000*d ;
        if(d <= 3){
            for(int i = d ; i > 0 ; i--){
                printf("X\u0305") ;
            }
        }
        else if(d > 3 && d <= 8){
            if(d < 5){
                for(int j = 5 - d ; j > 0 ; j-- ){
                    printf("X\u0305") ;
                }
                printf("L\u0305") ;
            }
            else{
                printf("L\u0305") ;
                for(int r = d - 5 ; r > 0 ; r-- ){
                    printf("X\u0305") ;
                }
            } ;
        }
        else if(d == 9) 
        printf("X\u0305C\u0305") ;
        case 4:
        c = num ;
        c = c / 1000 ;
        num = num - 1000*c ;
        if(c <= 3){
            for(int i = c ; i > 0 ; i--){
                printf("M") ;
            }
        }
        else if(c > 3 && c <= 8){
            if(c < 5){
                for(int j = 5 - c ; j > 0 ; j-- ){
                    printf("I\u0305") ;
                }
                printf("V\u0305") ;
            }
            else{
                printf("V\u0305") ;
                for(int r = c - 5 ; r > 0 ; r-- ){
                    printf("I\u0305") ;
                }
            } ;
        }
        else if(c == 9) 
        printf("I\u0305X\u0305") ;
        case 3:
        b = num ;
        b = b / 100 ;
        num = num - 100*b ;
        if(b <= 3){
            for(int i = b ; i > 0 ; i--){
                printf("C") ;
            }
        }
        else if(b > 3 && b <= 8){
            if(b < 5){
                for(int j = 5 - b ; j > 0 ; j-- ){
                    printf("C") ;
                }
                printf("D") ;
            }
            else{
                printf("D") ;
                for(int r = b - 5 ; r > 0 ; r-- ){
                    printf("C") ;
                }
            } ;
        }
        else if(b == 9) 
        printf("CM") ;
        case 2:
        a = num ;
        a = a / 10 ;
        num = num - 10*a ;
        if(a <= 3){
            for(int i = a ; i > 0 ; i--){
                printf("X") ;
            }
        }
        else if(a > 3 && a <= 8){
            if(a < 5){
                for(int j = 5 - a ; j > 0 ; j-- ){
                    printf("X") ;
                }
                printf("L") ;
            }
            else{
                printf("L") ;
                for(int r = a - 5 ; r > 0 ; r-- ){
                    printf("X") ;
                }
            } ;
        }
        else if(a == 9) 
        printf("XC") ;
        case 1:
        if(num <= 3){
            for(int i = num ; i > 0 ; i--){
                printf("I") ;
            }
        }
        else if(num > 3 && num <= 8){
            if(num < 5){
                for(int j = 5 - num ; j > 0 ; j-- ){
                    printf("I") ;
                }
                printf("V") ;
            }
            else{
                printf("V") ;
                for(int r = num - 5 ; r > 0 ; r-- ){
                    printf("I") ;
                }
            } ;
        }
        else if(num == 9) 
        printf("IX") ;
        default :
        printf("\n it is your required coversion") ;
    }
   
}
int count(int num){
    int count = 0 ;
    while(num!=0){
        num = num / 10 ;
        count = count + 1 ;
    }
    return count ;
}