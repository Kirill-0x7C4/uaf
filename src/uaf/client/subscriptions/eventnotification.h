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

#ifndef UAF_EVENTNOTIFICATION_H_
#define UAF_EVENTNOTIFICATION_H_


// STD
#include <vector>
#include <string>
#include <sstream>
// SDK
// UAF
#include "uaf/util/status.h"
#include "uaf/util/variant.h"
#include "uaf/util/logger.h"
#include "uaf/util/address.h"
#include "uaf/util/stringifiable.h"
#include "uaf/client/clientexport.h"
#include "uaf/util/handles.h"
#include "uaf/client/subscriptions/monitoreditemnotification.h"
#include "uaf/client/settings/monitoreditemsettings.h"


namespace uaf
{

    /*******************************************************************************************//**
    * A uaf::EventNotification is a notification for a monitored event item.
    *
    * @ingroup ClientSubscriptions
    ***********************************************************************************************/
    class UAF_EXPORT EventNotification : public MonitoredItemNotification
    {
    public:

        typedef std::vector<uaf::Variant> Fields;


        /**
         * Construct an event notification.
         */
        EventNotification();


        /** The fields corresponding to the select clause. */
        Fields fields;


        /**
         * Get a string representation of the event notification.
         */
        std::string toString(const std::string& indent="", std::size_t colon=22) const;


        // comparison operators
        friend UAF_EXPORT bool operator==(
                const EventNotification& object1,
                const EventNotification& object2);
        friend UAF_EXPORT bool operator!=(
                const EventNotification& object1,
                const EventNotification& object2);
        friend UAF_EXPORT bool operator<(
                const EventNotification& object1,
                const EventNotification& object2);
    };





}




#endif /* UAF_EVENTNOTIFICATION_H_ */
