#include "TV_controler.h"
#include "Radio_controler.h"
#include "TV.h"
#include "Radio.h"


int main()
{
    TV d1;
    Radio d2;

    TV_controler cntr1(&d1);
    Radio_controler cntr2(&d2);


    std::cout << "Radio is " << cntr2.get_power_state() << "\n";



    cntr2.power();
    std::cout << "Radio is " << cntr2.get_power_state() << "\n";
    
    cntr2.power();
    std::cout << "Radio is " << cntr2.get_power_state() << "\n";

    cntr2.power();
    std::cout << "Radio is " << cntr2.get_power_state() << "\n";

    std::cout << "Radios freq " <<  cntr2.get_freq() << "\n";
    double freq;
    std::cout << "freq = ";
    std::cin >> freq;
    std::cout << "set freq" << freq << "\n";
    cntr2.set_freq(freq);
    std::cout << "Radios freq " <<  cntr2.get_freq() << "\n";

    std::cout << "starting Radio channel " << cntr2.get_channel() << " \n";
    int channel;
    std::cout << " + channel \n";
    cntr2.up_channel();
    std::cout << "Radio channel " << cntr2.get_channel() << " \n";
    std::cout << " + channel \n";
    cntr2.up_channel();
    std::cout << "Radio channel " << cntr2.get_channel() << " \n";
    std::cout << " + channel \n";
    cntr2.up_channel();
    std::cout << "Radio channel " << cntr2.get_channel() << " \n";
    std::cout << " - channel \n";
    cntr2.down_channel();
    std::cout << "Radio channel " << cntr2.get_channel() << " \n";
    std::cout << " - channel \n";
    cntr2.down_channel();
    std::cout << "Radio channel " << cntr2.get_channel() << " \n";


    std::cout << "starting Radio volume " << cntr2.get_volume() << " \n";
    int volume;
    std::cout << "+ volume \n";
    cntr2.increase_volume();
    std::cout << "Radio volume " << cntr2.get_volume() << " \n";
    std::cout << "+ volume \n";
    cntr2.increase_volume();
    std::cout << "Radio volume " << cntr2.get_volume() << " \n";
    std::cout << "+ volume \n";
    cntr2.increase_volume();
    std::cout << "Radio volume " << cntr2.get_volume() << " \n";
    std::cout << "- volume \n";
    cntr2.decrease_volume();
    std::cout << "Radio volume " << cntr2.get_volume() << " \n";
    std::cout << "- volume \n";
    cntr2.decrease_volume();
    std::cout << "Radio volume " << cntr2.get_volume() << " \n";



    std::cout << "TV is " << cntr1.get_power_state() << "\n";

    cntr1.power();
    std::cout << "TV is " << cntr1.get_power_state() << "\n";
    
    cntr1.power();
    std::cout << "TV is " << cntr1.get_power_state() << "\n";
  
    cntr1.power();
    std::cout << "TV is " << cntr1.get_power_state() << "\n";


    std::cout << "starting TV channel " << cntr1.get_channel() << " \n";

    std::cout << "+ channel \n";
    cntr1.up_channel();
    std::cout << "TV channel " << cntr1.get_channel() << " \n";
    std::cout << "+ channel \n";
    cntr1.up_channel();
    std::cout << "TV channel " << cntr1.get_channel() << " \n";
    std::cout << "+ channel \n";
    cntr1.up_channel();
    std::cout << "TV channel " << cntr1.get_channel() << " \n";
    std::cout << "- channel \n";
    cntr1.down_channel();
    std::cout << "TV channel " << cntr1.get_channel() << " \n";
    std::cout << "- channel \n";
    cntr1.down_channel();
    std::cout << "TV channel " << cntr1.get_channel() << " \n";

    std::cout << "starting TV volume " << cntr1.get_volume() << " \n";

    std::cout << "+ volume \n";
    cntr1.increase_volume();
    std::cout << "TV volume " << cntr1.get_volume() << " \n";
    std::cout << "+ volume \n";
    cntr1.increase_volume();
    std::cout << "TV volume " << cntr1.get_volume() << " \n";
    std::cout << "+ volume \n";
    cntr1.increase_volume();
    std::cout << "TV volume " << cntr1.get_volume() << " \n";
    std::cout << "- volume \n";
    cntr1.decrease_volume();
    std::cout << "TV volume " << cntr1.get_volume() << " \n";
    std::cout << "- volume \n";
    cntr1.decrease_volume();
    std::cout << "TV volume " << cntr1.get_volume() << " \n";

    std::cout << "Test Mute\n";
    cntr1.mute();
    std::cout << "TV volume " << cntr1.get_volume() << " \n";


    return 0;
}