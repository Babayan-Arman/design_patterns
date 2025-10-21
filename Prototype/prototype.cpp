#include "prototype.h"

int main()
{

    Contact temp;
    std::string name;
    size_t      suite;

    std::cout << "input first Contact parameters\n";
    std::cout << "street :: -> ";
    std::cin >> temp.adr.street;
    std::cout << "number :: -> ";
    std::cin >> temp.adr.num;
    temp.name = "";
    temp.suite = 0;
    EmployeeFactory::add_branch("main",temp);


    std::cout << "\n\ninput first employee parameters\n";
    std::cout << "name :: -> ";
    std::cin >> name;
    std::cout << "suite :: -> ";
    std::cin >> suite;   
    auto first = EmployeeFactory::NewOfficeEmployee(name,suite,"main");

    std::cout << first->name << " , " << first->adr.street << " , " << first->adr.num << " , " << first->suite << " :\n";
    

    std::cout << "input second Contact parameters\n";
    std::cout << "street :: -> ";
    std::cin >> temp.adr.street;
    std::cout << "number :: -> ";
    std::cin >> temp.adr.num;
    temp.name = "";
    temp.suite = 0;
    EmployeeFactory::add_branch("aux",temp);


    std::cout << "\n\ninput second employee parameters\n";
    std::cout << "name :: -> ";
    std::cin >> name;
    std::cout << "suite :: -> ";
    std::cin >> suite;   
    auto second = EmployeeFactory::NewOfficeEmployee(name,suite,"main");

    std::cout << second->name << " , " << second->adr.street << " , " << second->adr.num << " , " << second->suite << " :\n";
 
    std::cout << "\n\ninput third employee parameters\n";
    std::cout << "name :: -> ";
    std::cin >> name;
    std::cout << "suite :: -> ";
    std::cin >> suite;   
    auto third = EmployeeFactory::NewOfficeEmployee(name,suite,"aux");

    std::cout << third->name << " , " << third->adr.street << " , " << third->adr.num << " , " << third->suite << " :\n";
 
    std::cout << "\n\ninput fourth employee parameters\n";
    std::cout << "name :: -> ";
    std::cin >> name;
    std::cout << "suite :: -> ";
    std::cin >> suite;   
    auto fourth = EmployeeFactory::NewOfficeEmployee(name,suite,"mmmm");

    if(fourth == nullptr)
    {
        std::cout << "imposible\n";
        return 0;
    }
    std::cout << fourth->name << " , " << fourth->adr.street << " , " << fourth->adr.num << " , " << fourth->suite << " :\n";
 
    return 0;
}