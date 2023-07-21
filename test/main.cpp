#include <algorithm>
#include <chrono>
#include <ratio>
#include <stdlib.h>
#include <vector>


int main()
{
    std::vector<int> v, v2;

    constexpr int n = 3 * 10e5;

    for (int i = 0; i < n; ++i)
    {
        v.push_back(rand() % n);
        v2.push_back(i);
    }

    printf("size: %d\n", n);
    {
        auto t0 = std::chrono::steady_clock::now();
        std::ranges::sort(v);
        auto t1 = std::chrono::steady_clock::now() - t0;
        auto take = std::chrono::duration_cast<std::chrono::milliseconds>(t1).count() / 1000.0;

        printf("v take: %.6fs\n", take);
    }
    
    {
        auto t0 = std::chrono::steady_clock::now();
        if (!std::ranges::is_sorted(v2))
            std::ranges::sort(v2);
        auto t1 = std::chrono::steady_clock::now() - t0;
        auto take = std::chrono::duration_cast<std::chrono::milliseconds>(t1).count() / 1000.0;

        printf("v2 take: %.6fs\n", take);
    }

    return 0;
}