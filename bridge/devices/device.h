#pragma once

#include <iostream>

class Device
{
public:
    virtual void set_volume(int volume) = 0;
    virtual int get_volume() = 0;
    virtual void power_on() = 0;
    virtual void power_off() = 0;
    virtual void set_channel(int channel) = 0;
    virtual int get_channel() = 0;
    virtual bool get_power_state() = 0;
};