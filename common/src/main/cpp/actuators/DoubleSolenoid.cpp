#include "actuators/DoubleSolenoid.h"

void curtinfrc::actuators::DoubleSolenoid::Update(double dt) {
  Set(_state == actuators::kForward ? kForward : kReverse);
}
