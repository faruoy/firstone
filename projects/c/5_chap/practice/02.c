#include<stdio.h>
float Celcius(float c);
float Celcius(float c){
    return (9*c/5)+32;
    
}
int main(){
    float c=78.0;
    Celcius(c);
    printf("%.2f in Fahrenheit is %.2f",c,Celcius(c));
}