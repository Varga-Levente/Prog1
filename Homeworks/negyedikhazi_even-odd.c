#include <stdio.h>

int is_even(int n){

    if(n%2==0){
        return 1;
    }else{
        return 0;
    }

}

int is_odd(int n){

    /*if(n%2!=0){
        return 1;
    }else{
        return 0;
    }*/

    if(is_even(n)==0){
        return 1;
    }else{
        return 0;
    }
    
}

int main(){

printf("%d\n",is_even(4));
printf("%d\n",is_odd(3));

return 0;

}