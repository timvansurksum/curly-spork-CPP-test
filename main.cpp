#include <iostream>
#include<cmath>

double f(double x) {
    return exp(-pow(x, 2));
}

double integrate(double a, double b, double delta_x_input){
    double area = 0;
    double N = floor((b - a) / delta_x_input);
    double delta_x = (b-a)/N;
    for(int n = 0; N > n;){
        area += f(a+n*delta_x)*delta_x;
        n++;
    }
    return area;
}

int main() {
    double a;
    std::cout << "please enter your lower bound: ";
    std::cin >> a;
    double b;
    std::cout << "please enter your upper bound: ";
    std::cin >> b;
    double delta_x_input;
    std::cout << "please enter your delta x: ";
    std::cin >> delta_x_input;
    double area = integrate(a, b, delta_x_input);
    std::cout << "the integral of log(pow(sin(x), 2))"
    << "\nbetween " << a << "\nand " << b
    << "\nwith a delta x of " << delta_x_input
    << "\nis approximately: " << area;
}
