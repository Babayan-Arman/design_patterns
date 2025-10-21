#pragma once 

#include <iostream>
#include <memory>
#include <unordered_map> 


class HotDrink
{
public:
    virtual void prepare(float value) = 0;
};


class Tea : public HotDrink
{
public:
    void prepare (float value)
    {
        std::cout << "Prepare tea at " << value << "degree\n";
    }
};


class Coffee : public HotDrink
{
public:
    void prepare (float value)
    {
        std::cout << "Prepare coffee at " << value << "degree\n";
    }
};


class HotDrinkFactory
{
public:
    virtual std::unique_ptr<HotDrink> make() const = 0;
};

class TeaFactory : public HotDrinkFactory
{
public:
    virtual std::unique_ptr<HotDrink> make() const override
    {
        return std::make_unique<Tea>();
    }

};


class CoffeeFactory : public HotDrinkFactory
{
public:
    virtual std::unique_ptr<HotDrink> make() const override
    {
        return std::make_unique<Coffee> ();
    }
};

class DrinkFactory 
{
    std::unordered_map<std::string, std::unique_ptr<HotDrinkFactory>> hotFactories;
public:
    DrinkFactory()
    {
        hotFactories["Tea"] = std::make_unique<TeaFactory>();
        hotFactories["Coffee"] = std::make_unique<CoffeeFactory>();
    }
    std::unique_ptr<HotDrink> makeDrink(const std::string& name, float value)
    {
        auto drink = hotFactories[name]->make();
        drink->prepare(value);
        return drink;
    }
};