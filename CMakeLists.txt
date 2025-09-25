cmake_minimum_required(VERSION 3.10)
project(LegacyCodeExampleCpp)

set(CMAKE_CXX_STANDARD 17)
set(SOURCES
    main.cpp
    loopacademy/DBConnection.cpp
    loopacademy/InvoiceUpdateServlet.cpp
    loopacademy/InvoiceUpdateResponder.cpp
)

add_executable(LegacyCodeExample ${SOURCES})
