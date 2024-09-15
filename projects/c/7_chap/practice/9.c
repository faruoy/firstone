#include <stdio.h>
/*Create a three–dimensional array and print the address of its elements in
increasing order*/
int main()
{
    int arr[4][2][3];
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 2; j++){
            for (int k = 0; k < 3; k++){
                printf("%u ",&arr[i][j][k]);
            }
            printf("\n");
        } printf("\n");
    } 
return 0;

}

