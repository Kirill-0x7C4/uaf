/* This file is part of the UAF (Unified Architecture Framework) project.
 *
 * Copyright (C) 2012 Wim Pessemier (Institute of Astronomy, KULeuven)
 *
 * Project website: http://www.ster.kuleuven.be/uaf
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as
 * published by the Free Software Foundation, either version 3 of the
 * License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "uaf/util/loglevels.h"

namespace uaf
{
    namespace loglevels
    {

        using namespace uaf::loglevels;

        // Get a string representation
        // =========================================================================================
        std::string toString(LogLevel level)
        {
            switch (level)
            {
                case Disabled:   return "Disabled";
                case Error:      return "Error";
                case Warning:    return "Warning";
                case Info:       return "Info";
                case Debug:      return "Debug";
                default:         return "INVALID";
            }
        }


    }
}
