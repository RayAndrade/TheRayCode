cmake_minimum_required(VERSION 3.20)
project(AbstractFactory2)

set(CMAKE_CXX_STANDARD 14)

add_executable(AbstractFactory2 main.cpp ConfigurationManager.h UnisysConfigurationManager.h IBMConfigurationManager.h OperationManager.h UnisysOperationManager.h IBMOperationManager.h SystemManagementFactory.h UnisysSMFactory.h IBMSMFactory.h)
