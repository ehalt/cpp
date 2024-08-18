// get array size 

#include<iostream>
using namespace std;

int main()
{
    int nums[] = {1, 2, 3, 4, 5, 6};
    for (int i = 0; i < sizeof(nums) / sizeof(int); i++) {
        cout << nums[i] << endl;
    }

    return 0;
}