/* ========================= eCAL LICENSE =================================
 *
 * Copyright (C) 2016 - 2019 Continental Corporation
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 *      http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 * ========================= eCAL LICENSE =================================
*/

#pragma once

#include <chrono>
#include <string>

/**
 * @brief A Scenario is a named time point
 */
struct EcalPlayScenario
{
  std::string name_;                                                            /**< The name of this time point */
  eCAL::Time::ecal_clock::time_point time_;                                     /**< The actual time point inside the measurement */

  bool operator==(const EcalPlayScenario& other) const
  {
    return (name_  == other.name_)
        && (time_  == other.time_);
  }
  bool operator !=(const EcalPlayScenario& other) const
  {
    return !operator==(other);
  }
};