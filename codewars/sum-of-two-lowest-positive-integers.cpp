#include <vector>

long sumTwoSmallestNumbers(std::vector<int> n)
{
    std::sort(n.begin(), n.end());
    return n[0]+n[1];
}
