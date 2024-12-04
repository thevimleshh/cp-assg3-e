
#include <stdio.h>

typedef struct {
    float real;
    float imag;
} Complex;

// Function to divide two complex numbers
Complex divideComplex(Complex c1, Complex c2) {
    Complex result;
    float denominator = c2.real * c2.real + c2.imag * c2.imag;

    if (denominator == 0) {
        printf("Error: Division by zero.\n");
        result.real = 0;
        result.imag = 0;
        return result;
    }

    result.real = (c1.real * c2.real + c1.imag * c2.imag) / denominator;
    result.imag = (c1.imag * c2.real - c1.real * c2.imag) / denominator;

    return result;
}

int main() {
    Complex num1, num2, result;

    // Input for the first complex number
    printf("Enter the real and imaginary parts of the first complex number: ");
    scanf("%f %f", &num1.real, &num1.imag);

    // Input for the second complex number
    printf("Enter the real and imaginary parts of the second complex number: ");
    scanf("%f %f", &num2.real, &num2.imag);

    // Division
    result = divideComplex(num1, num2);

    // Display result
    if (num2.real != 0 || num2.imag != 0) {
        printf("The division of the complex numbers is: %.2f + %.2fi\n", result.real, result.imag);
    }

    return 0;
}
