cmake_minimum_required(VERSION 3.20)
project(AbstractFactory4)

set(CMAKE_CXX_STANDARD 14)

add_executable(AbstractFactory4 main.cpp ConfigurationManager.h UnisysConfigurationManager.h IBMConfigurationManager.h OperationManager.h UnisysOperationManager.h IBMOperationManager.h SystemManagementFactory.h UnisysSMFactory.h IBMSMFactory.h)
