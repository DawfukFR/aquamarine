#include <aquamarine/input/Input.hpp>

libinput_device* Aquamarine::IPointer::getLibinputHandle() {
    return nullptr;
}

libinput_device* Aquamarine::IKeyboard::getLibinputHandle() {
    return nullptr;
}

void Aquamarine::IKeyboard::updateLEDs(uint32_t leds) {
    ;
}