#include <iostream>
#include <vector>

// Global variables as typically used in competitive programming for simplicity
int n = 4; // The size of the set {0, 1, ..., n-1}
std::vector<int> subset;

// The search function from CPH
void search(int k) {
    if (k == n) {
        // process subset: print the current subset
        std::cout << "{ ";
        for (int x : subset) {
            std::cout << x << " ";
        }
        std::cout << "}\n";
    } else {
        // Choice 1: Do not include element k in the subset
        search(k + 1);
        
        // Choice 2: Include element k in the subset
        subset.push_back(k);
        search(k + 1);
        
        // Backtrack: remove k to restore the state for previous recursive calls
        subset.pop_back();
    }
}

int main() {
    std::cout << "Generating all subsets for n = " << n << ":\n";
    
    // The search begins by calling the function with parameter 0
    search(0);
    
    return 0;
}