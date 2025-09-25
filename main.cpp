#include "loopacademy/InvoiceUpdateResponder.h"
#include "loopacademy/InvoiceUpdateServlet.h"
#include "loopacademy/DBConnection.h"
#include <vector>
#include <string>

int main() {
    using namespace loopacademy;
    InvoiceUpdateServlet servlet;
    servlet.setSelectedIds({"INV-1", "INV-2"});
    DBConnection db;
    InvoiceUpdateResponder responder(servlet, db);
    responder.update(); // prints response text
    return 0;
}
