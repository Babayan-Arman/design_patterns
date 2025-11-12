#pragma once

#include <iostream>

class Controler
{
    virtual void increase_volume() = 0;
    virtual void decrease_volume() = 0;
    virtual int get_volume() = 0;
    virtual void up_channel() = 0;
    virtual void down_channel() = 0;
    virtual int get_channel() = 0;
    virtual void power() = 0;
    virtual bool get_power_state() = 0;


};