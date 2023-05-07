#include <iostream>
using namespace std;
 
 
int main() {
    int n, nums[100] = {0}, diff;
 
    cin >> n;
 
    for(int i = 1; i <= n; i++) {
        cin >> nums[i];
        if(nums[i] % 2 == 0) {
            nums[i] = 2;
        } else {
            nums[i] = 1;
        }
    }
 
    for(int i = 2; i < n; i++) {
        if(nums[i-1] != nums[i] && nums[i] == nums[i+1]) {
            cout << i-1 << endl;
            break;
        }
        
        if(nums[i - 1] != nums[i] && nums[i] != nums[i+1]) {
            cout << i << endl;
            break;
        }
 
        if(nums[i-1] == nums[i] && nums[i] != nums[i+1]) {
            cout << i+1 << endl;
            break;
        }
    }
 
    return 0;
}
