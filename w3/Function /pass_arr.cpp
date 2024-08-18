// pass arrays as function parameter 

#include<iostream>
using namespace std;

void myFunc(int nums[5]) {
    for (int i = 0; i < 5; i++) {
        cout << nums[i] << '\n';
    }
}

int main()
{
    int nums[5] = {10, 20, 30, 40, 50};
    myFunc(nums);

    return 0;
}