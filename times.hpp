#include <functional>
#include "range/range.hpp"

using namespace std;

inline auto operator"" _times(unsigned long long times)
->decltype(util::range<unsigned long long>(0,times)) {
    return util::range<unsigned long long>(1,times);
}

struct execute {
    execute(util::range<unsigned long long> range, std::function<void()> f) {
        for (auto i : range) {
            f();
        }
    }
};
