#pragma once 

#include <iostream>
#include <unordered_map>
#include <memory>

struct Address
{
    std::string street;
    size_t      num;
};

struct Contact
{
    std::string name;
    Address     adr;
    size_t      suite;
};

class EmployeeFactory
{
public:
    static std::unique_ptr<Contact> NewOfficeEmployee(const std::string &name, size_t suite,const std::string &branch)
    {
        if(branches.find(branch) != branches.end())
        {
            return Newemployee(name,suite,branches[branch]);
        }
       
        std::cout << "There is not that branch!\n";
        return nullptr;
    }

    static void add_branch (const std::string& name,const Contact& employ )
    {
        branches.insert({name,employ});
    }

    static void erase_branch (const std::string& name)
    {
        branches.erase(name);
    }

private:
    static std::unordered_map<std::string,Contact> branches; //{asas,{asda,23},5}
    static std::unique_ptr<Contact> Newemployee(const std::string& name, size_t suite,const Contact &newemploy)
    {
        auto result = std::make_unique<Contact>(newemploy);
        result->name = name;
        result->suite = suite;
        return result;
    }
};

std::unordered_map<std::string,Contact> EmployeeFactory::branches;
