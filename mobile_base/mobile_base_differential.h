/*
 * Copyright (c) 2023, CATIE
 * SPDX-License-Identifier: Apache-2.0
 */
#ifndef CATIE_SIXTRON_MOBILE_BASE_DIFFERENTIAL_H
#define CATIE_SIXTRON_MOBILE_BASE_DIFFERENTIAL_H

#include "mobile_base/mobile_base.h"

namespace sixtron {

class MobileBaseDifferential: public MobileBase {

public:
    MobileBaseDifferential(float wheels_distance); // in meters, distance between the two wheels.

    ~MobileBaseDifferential();

protected:
    void computeMotorSpeeds();

    float _targetSpeedMotorLeft = 0.0f;
    float _targetSpeedMotorRight = 0.0f;

private:
    float _motorWheelsDistance = 0.0f;
};

} // namespace sixtron

#endif // CATIE_SIXTRON_MOBILE_BASE_DIFFERENTIAL_H
