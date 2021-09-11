#include <iostream>
//#include "SystemManagementFactory.h"
//#include "UnisysSMFactory.h"
using namespace std;

class ConfigurationManager
{
public:
    virtual void UseConfigurationManager() = 0;
};
class UnisysConfigurationManager : ConfigurationManager
{
public:
    virtual void UseConfiguationManager()
    {
        std::cout << "Inside UnisysConfigurationManager::UseConfigurationManager()\n";
    }
};

class IBMConfigurationManager: ConfigurationManager
{
public:
    virtual void UseConfiguationManager()
    {
        std::cout << "Inside IBMConfigurationManager::UseConfigurationManager()\n";
    }
};

class OperationManager
{
public:
    virtual void UseOperationManager() = 0;
};

class UnisysOperationManager : public OperationManager
{
public:
    virtual void  UseOperationManager()
    {
        std::cout << "Inside UnisysOperationManager::UseOperationManager()\n";
    }
};

class IBMOperationManager : public OperationManager
{
public:
    virtual void UseOperationManager()
    {
        std::cout << "Inside IBMOperationManager::UseOperationManager()\n";
    }
};

class SystemManagementFactory
{
public:
    virtual ConfigurationManager* CreateConfigurationManager() = 0;
    virtual OperationManager* CreateOperationManager() = 0;
};

class UnisysSMFactory: public SystemManagementFactory
{
public:
    virtual ConfigurationManager* CreateConfigurationManager()
    {
        return new UnisysConfigurationManager();
    }
    virtual  OperationManager* CreateOperationManager()
    {
        return new UnisysOperationManager();
    }
};
int main() {
    //ConfigurationManager *cm;
    //OperationManager *om;

    //SystemManagementFactory* factory1 = new UnisysSMFactory;

    return 0;
}
