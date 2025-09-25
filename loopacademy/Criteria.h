#pragma once
#include <vector>
#include <string>

namespace loopacademy {

class Criteria {
public:
    std::vector<std::string> invoiceIds;
    Criteria(std::vector<std::string> ids) : invoiceIds(std::move(ids)) {}
};

} // namespace loopacademy
