cmake_minimum_required(VERSION 3.16)

project(H2 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(H2
    main.cpp
    car.cpp
    rectangle.cpp
    student.cpp
    car.h
    rectangle.h
    student.h)


include(GNUInstallDirs)
install(TARGETS H2
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
