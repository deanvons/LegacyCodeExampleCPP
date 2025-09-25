#pragma once
#include "InvoiceUpdateServlet.h"
#include "DBConnection.h"
#include <string>

namespace loopacademy {

class InvoiceUpdateResponder {
    InvoiceUpdateServlet& servlet_;
    DBConnection& db_;

public:
    InvoiceUpdateResponder(InvoiceUpdateServlet& servlet, DBConnection& db)
        : servlet_(servlet), db_(db) {}

    void update();
    std::string getResponseText();
};

} // namespace loopacademy
