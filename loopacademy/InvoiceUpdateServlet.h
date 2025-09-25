#pragma once
#include <vector>
#include <string>

namespace loopacademy {

class InvoiceUpdateServlet {
    std::vector<std::string> selectedIds_;

public:
    void setSelectedIds(std::vector<std::string> ids) { selectedIds_ = std::move(ids); }
    std::string buildUpdate() const {
        return "UPDATE invoices SET status='PAID' WHERE id IN [ ... ]";
    }
    const std::vector<std::string>& __internalSelectedIds() const { return selectedIds_; }

    void execute() {
        // In real life: parse HTTP request, call responder, write response
    }
};

} // namespace loopacademy
