#pragma once

#include "TV.h"
#include "controler.h"


class TV_controler : public Controler
{
public:

    TV_controler(TV* device) : device(device) {}

    void increase_volume() override
    {
        device->set_volume(device->get_volume() + 1);
    }
    void decrease_volume() override
    {
        device->set_volume(device->get_volume() - 1);
    }
    void up_channel() override
    {
        device->set_channel(device->get_channel() + 1);
    }
    void down_channel() override
    {
        device->set_channel(device->get_channel() + 1);
    }
    void power() override
    {
        if(device->get_power_state())
            device->power_off();
        else
            device->power_on();
    }
    
    int get_volume() override
    {
        return device->get_volume();
    }

    int get_channel() override
    {
        return device->get_channel();
    }

    bool get_power_state() override
    {
        return device->get_power_state();
    }

    void mute ()
    {
        device->set_volume(0);
    }

private:
    TV* device;
};