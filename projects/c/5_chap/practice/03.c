#include<stdio.h>
/*Write a function to calculate force of attraction on a body of mass ‘m’ exerted by 
earth. Consider g = 9.8m/s2. */
float force(float);
float force(float m){
    return m*9.8;
}
int main(){
        float m=4.0;  
        printf("Force on mass %.2f kg is %.2f m/s2\n",m,force(m));
}