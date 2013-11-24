%:include <iostream>
%:include "times.hpp"

auto main() -> int {
    for (auto i : 5_times) {
        std::cout << "foo = " << i << std::endl;
    }
    
    execute(5_times, []{
        std::cout << "bar" << std::endl;
    });
    return 0;
}