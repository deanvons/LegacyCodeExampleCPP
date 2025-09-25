#include "DBConnection.h"
#include <iostream>

namespace loopacademy {

void DBConnection::applyUpdate(const std::string& updateString) {
    std::cout << "APPLYING UPDATE: " << updateString << std::endl;
}

std::vector<Invoice> DBConnection::getInvoices(const Criteria& criteria) {
    return {}; // legacy placeholder
}

} // namespace loopacademy
