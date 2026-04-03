#include <stdio.h>

int soma(int n);

int main()
{
    printf("%d\n", soma(5));
    return 0;
}

int soma(int n){

    if(n == 1){
        return 1;
    } else{
        return n + soma(n -1);
    }

}
