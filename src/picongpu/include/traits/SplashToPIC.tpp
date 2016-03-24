/**
 * Copyright 2013-2016 Axel Huebl
 *
 * This file is part of PIConGPU.
 *
 * PIConGPU is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * PIConGPU is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with PIConGPU.
 * If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#if (ENABLE_HDF5==1)
#include <splash/splash.h>

#include "simulation_defines.hpp"

namespace picongpu
{

namespace traits
{
    /** Trait for splash::ColTypeBool */
    template<>
    struct SplashToPIC<splash::ColTypeBool>
    {
        typedef bool type;
    };

    /** Trait for splash::ColTypeFloat */
    template<>
    struct SplashToPIC<splash::ColTypeFloat>
    {
        typedef float_32 type;
    };

    /** Trait for splash::ColTypeDouble */
    template<>
    struct SplashToPIC<splash::ColTypeDouble>
    {
        typedef float_64 type;
    };

    /** Trait for splash::ColTypeInt */
    template<>
    struct SplashToPIC<splash::ColTypeInt>
    {
        typedef int type;
    };

    template<>
    struct SplashToPIC<splash::ColTypeUInt64>
    {
        typedef uint64_t type;
    };

    /** Trait for splash::ColTypeInt */
    template<>
    struct SplashToPIC<splash::ColTypeDim>
    {
        typedef splash::Dimensions type;
    };

} //namespace traits

}// namespace picongpu

#endif // (ENABLE_HDF5==1)
