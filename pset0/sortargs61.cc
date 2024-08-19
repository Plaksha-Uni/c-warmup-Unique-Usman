#include <iostream>
#include <string>

void insertionSort(std::string arr[], int n) {
    for (int i = 1; i < n; i++) {
        std::string key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

int main(int argc, char* argv[]) {
    if (argc <= 1) {
        return 0;
    }

    std::string args[argc - 1];
    for (int i = 1; i < argc; i++) {
        args[i - 1] = std::string(argv[i]);
    }

    insertionSort(args, argc - 1);

    for (int i = 0; i < argc - 1; i++) {
        std::cout << args[i] << std::endl;
    }

    return 0;
}
