#include <vector>
#include <random>
#include <iostream>
#include <stdexcept>
#include <set>
#include <algorithm>
#include <ctime>
#include <unordered_set>
 

using std::random_device;
using std::vector;
using std::cout;
using std::cerr;
using std::endl;
using std::out_of_range;

int main()
{
    std::unordered_set<int> vals;

    while (vals.size() < 1000000)
        vals.insert(rand() % 1000001);

    std::vector<int> array(vals.begin(), vals.end());
   
    std::shuffle(array.begin(), array.end(), std::random_device());
 
    for(int i = 0; i < 1000000; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
    return 0;
}

