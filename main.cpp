#include <iostream>

int main() {
    std::string first_names[5] = {
            "Tim",
            "Sara",
            "Oliver",
            "Rachel",
            "Chloe"
    };
    std::string Last_names[5] = {
                "van Surksum",
                "Lance",
                "Queen",
                "Zane",
                "Decker"
    };
    int max_index = 5;
    for (int i = 0; max_index > i;) {
        for (int n = 0; n < max_index - i;) {
            std::cout  << "\t";
            n++;
        }
        std::cout << "hello " << first_names[max_index-i] << " " << Last_names[max_index-i] << " how are you?\n";
        i++;
    }
}
