#include "ChipPins.h"
namespace Jynsaillar::ChipPins
{

    Jynsaillar::ChipPins::ChipPin::operator bool() const
    {
        if (!this->Enabled)
            return false;
        // Allows for quick comparison of a pin's logic state using if/else,
        // without the need to access the underlying ChipPin.Signal.
        return (this->Signal == Signals::High);
    }

} // namespace Jynsaillar::ChipPins
