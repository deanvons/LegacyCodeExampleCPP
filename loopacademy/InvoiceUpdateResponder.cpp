#include "InvoiceUpdateResponder.h"
#include "Criteria.h"
#include <iostream>

namespace loopacademy {

void InvoiceUpdateResponder::update() {
    std::string updateString = servlet_.buildUpdate();
    db_.applyUpdate(updateString);
    std::cout << getResponseText() << std::endl;
}

std::string InvoiceUpdateResponder::getResponseText() {
    auto ids = servlet_.__internalSelectedIds();
    auto invoices = db_.getInvoices(Criteria(ids));
    int total = 0;
    for (const auto& inv : invoices) {
        total += inv.getValue();
    }
    return "Updated " + std::to_string(invoices.size()) +
           " invoices. Total value = " + std::to_string(total);
}

} // namespace loopacademy
