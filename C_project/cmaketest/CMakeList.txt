cmake_minimum_required(VERSION 2.6)

# avoid some cmake warnings
IF(POLICY CMP0026)
    CMAKE_POLICY(SET CMP0026 OLD)
ENDIF()

SET(test_message "test vscode and cmake")
MESSAGE (STATUS "test_message: ${test_message}")