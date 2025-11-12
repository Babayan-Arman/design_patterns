#pragma once

#include "device.h"

class Radio : public Device
{
public:
    const int DEFAULT_VOLUME = 15;
    const int MIN_VOLUME = 0;
    const int MAX_VOLUME = 100;
    const int DEFAULT_CHANNEL = 5;
    const int MIN_CHANNEL = 1;
    const int MAX_CHANNEL = 100;
    
    Radio () :  volume(DEFAULT_VOLUME), channel(DEFAULT_CHANNEL), power_state(false) {}
    
    void set_volume(int volume) override
    {
        if(volume < MIN_VOLUME)
        {
            std::cout << "cant be less then 0!\n";
        }
        else if(volume > MAX_VOLUME)
        {
            std::cout << "cant be more then 100!\n";
        }
        else
        {
            this->volume = volume; 
        }
    }
    int get_volume() override
    {
        return volume;
    }
    void power_on() override
    {
        power_state = true;
    }
    void power_off() override
    {
        power_state = false;
    }
    void set_channel(int channel) override
    {
        if(channel <= MIN_CHANNEL)
        {
            std::cout << "cant be less then 1!\n";
        }
        else if(channel > MAX_CHANNEL)
        {
            std::cout << "cant be more then 20!\n";
        }
        else
        {
            this->channel = channel; 
        }
    }
    int get_channel() override
    {
        return channel;
    }
    
    bool get_power_state() override
    {
        return power_state;
    }
private:
    int volume;
    int channel;
    bool power_state;
};