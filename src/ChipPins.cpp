#include "ChipPins.h"
namespace Jynsaillar::ChipPins
{

    Jynsaillar::ChipPins::ChipPin::operator bool() const
    {
        if (!this->Enabled)
            return false;

        return (this->Signal == Signals::High); // Allows for quick comparison of a pin's logic state, without the need to access the underlying ChipPin.Signal
    }

} // namespace Jynsaillar::ChipPins
