#include <stdio.h>
void func1(int array[], int length) {
    int sum = 0; int product = 1; for (int i = 0; i < length; i++) {
        sum += array[i]; }
    for (int i = 0; i < length; i++) {
        product *= array[i];
    }
}
int main() {
    int arr[] = {3, 5, 66};
    func1(arr, 3);
    int sum,product;
    printf("Sum = %d",sum);
    printf("Product = %d",product);
    return 0;
}
