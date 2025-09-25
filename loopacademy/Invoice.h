#pragma once
#include <string>
#include <ctime>

namespace loopacademy {

class Invoice {
    std::string customer_;
    std::time_t date_;
    int durationOfService_;

public:
    Invoice(std::string customer, std::time_t date, int durationOfService)
        : customer_(std::move(customer)), date_(date), durationOfService_(durationOfService) {}

    int getValue() const {
        return durationOfService_ * 100;
    }
};

} // namespace loopacademy
