#include <stdio.h>
#include <math.h>

double calculate_wavelength(int m, double theta, double d) {
    float radian = theta *(3.1416 / 180);
    float d1 = (d * (pow(10, -6))); //Converting slit distance µm to meter
    double lambda = (d1 * sin(radian)) / m; //Calculating wavelength
    float wavelength  = lambda * pow(10,9); //Meter to Nanometer converting
    return wavelength;
}

const char *determine_color(float wavelength) {
    if (380 <= wavelength && wavelength < 450) {
        return "Violet";
    } else if (450 <= wavelength && wavelength < 485) {
        return "Blue";
    } else if (485 <= wavelength && wavelength < 500) {
        return "Cyan";
    } else if (500 <= wavelength && wavelength < 565) {
        return "Green";
    } else if (565 <= wavelength && wavelength < 590) {
        return "Yellow";
    } else if (590 <= wavelength && wavelength < 625) {
        return "Orange";
    } else if (625 <= wavelength && wavelength <= 750) {
        return "Red";
    } else {
        return "Not in visible spectrum";
    }
}

int main() {
    int m;
    double theta, d;

    printf("Enter the order of interference (m): ");
    scanf("%d", &m);

    printf("Enter the angle (theta) in degrees: ");
    scanf("%lf", &theta);

    printf("Enter the distance between slits (d) in µm: ");
    scanf("%lf", &d);

    double wavelength = calculate_wavelength(m, theta, d);
    const char *color = determine_color(wavelength);

    printf("%.2f nm\n", wavelength); //Wavelength of light.
    printf("%s\n", color); //Color of light.

    return 0;
}