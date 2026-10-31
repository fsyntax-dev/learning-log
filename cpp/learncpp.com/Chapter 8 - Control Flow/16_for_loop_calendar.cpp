#include <iostream>

int main() {
    const int month{30};
    const int week{7};

    for (int day{1}; day <= month; ++day) {
        if (day < 10) {
            std::cout << "  " << day << " ";    // 2 spaces before single-digit
        } else {
            std::cout << " " << day << " ";     // 1 space before double-digit
        }

        if (day % week == 0) {
            std::cout << "\n";                  // Newline after 7 days
        }
    }

    std::cout << "\n";
    return 0;
}
