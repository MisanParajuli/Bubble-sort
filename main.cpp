// Bubble sort

#include <iostream>
#include <vector>

using namespace std;

int main() {


    vector<int>list = {3,4,5,6,7,8,2,3,5,6,8,1,3,4,7,5,7,5,8,5,8,4,3,6,8,5,3};

    for (int j = 0; j < list.size()-1; j++) {
        if (list.at(j) >= list[j+1]){
            for (int i = 0; i < list.size()-1; i++) {
                if (list[i] >= list[i + 1]) {
                    swap(list[i], list[i + 1]);
                };
            };
        };
    };

    for (int value: list ){
        cout << value << " ";
    };




    return 0;
}
