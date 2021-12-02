#include <iostream>
#include <vector>
#include <algorithm>


int MaxPairwiseProduct(const std::vector<int>& numbers) 
{
    // Initializing new vector to sort (complexity O(n))
    std::vector<int> sorted{numbers};
    // Use merge sort with complexity O(n*Log(n))
    std::sort(sorted.begin(), sorted.end()); 

    // The result will be the product between the last two elements
    return sorted[sorted.size()-1] * sorted[sorted.size()-2];
}

int main() 
{
    int n {0};
    std::cout << "Select sequence size:" << std::endl;
    std::cin >> n;
    std::cout << "Insert a sequence of " << n << " integer numbers :" << std::endl;

    std::vector<int> vect(n, 0);
    for (int i=0; i<n; i++)
    {
        std::cin >> vect[i];
    }

    int result {MaxPairwiseProduct(vect)};
    std::cout << "The maximum pairwise product is: ";
    std::cout << result << std::endl;
    
    return 0;
}
