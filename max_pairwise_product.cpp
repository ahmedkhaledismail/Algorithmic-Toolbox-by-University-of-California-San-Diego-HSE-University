#include <iostream>
#include <algorithm>
#include <vector>

long long MaxPairwiseProduct(const std::vector<int>& numbers) {
    long first_max = 0, second_max = 0;
    for (int i = 0; i<numbers.size(); i++) {
        if (numbers[i] > first_max) {
            second_max = first_max;
            first_max = numbers[i];
        }
        else if (numbers[i] > second_max) {
            second_max = numbers[i];
        }
    }
    return first_max * second_max;
}

int main() {
    int n;
    std::cin >> n;
    std::vector<int> numbers(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> numbers[i];
    }

    std::cout << MaxPairwiseProduct(numbers);
    return 0;
}

