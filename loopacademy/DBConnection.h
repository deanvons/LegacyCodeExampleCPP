#pragma once
#include "Criteria.h"
#include "Invoice.h"
#include <vector>

namespace loopacademy {

class DBConnection {
public:
    void applyUpdate(const std::string& updateString);
    std::vector<Invoice> getInvoices(const Criteria& criteria);
};

} // namespace loopacademy
