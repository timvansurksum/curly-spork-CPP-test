#include <iostream>
#include<cmath>
double f(double x) {
    return log(pow(sin(x), 2));
}

double integrate(double a, double b, double delta_x_input){
    double area = 0;
    double N = (b - a) / delta_x_input
    double delta_x = (b-a)/N;
    for(int n = 0; n > N; n++){
        area += f(a+n*delta_x)*delta_x;
    }
    return area;
}

int main() {
    //    arrays of first and last names
    std::string first_names[] = {
            "Tim",
            "Sara",
            "Oliver",
            "Rachel",
            "Chloe"
    };
    std::string Last_names[] = {
                "van Surksum",
                "Lance",
                "Queen",
                "Zane",
                "Decker"
    };
    // gets size of names lists
    int max_index = sizeof(Last_names) / sizeof(std::string);
    // prints each name out
    for (int i = 0; max_index > i;) {
        i++;
        for (int n = 0; n < max_index - i;) {
            std::cout  << "\t";
            n++;
        }
        std::cout << "hello " << first_names[max_index-i] << " " << Last_names[max_index-i] << " how are you?\n";
    }

}
