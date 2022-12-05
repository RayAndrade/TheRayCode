cmake_minimum_required(VERSION 3.20)
project(AbstractFactory3)

set(CMAKE_CXX_STANDARD 14)

add_executable(AbstractFactory3 main.cpp SystemManagementFactory.h ConfigurationManager.h OperationManager.h ConcreteFactory1.h ConcreteFactory2.h IBMConfiguration.h UnisysConfiguration.h IBMOperation.h UnisysOperation.h)
