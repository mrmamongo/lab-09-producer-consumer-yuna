// Copyright 2020 lamp
//
// Created by lamp on 16.04.2021.
//

#ifndef INCLUDE_LOG_SETUP_HH_
#define INCLUDE_LOG_SETUP_HH_

// Boost log
#include <boost/log/core.hpp>
#include <boost/log/common.hpp>
#include <boost/log/trivial.hpp>
#include <boost/log/exceptions.hpp>
#include <boost/log/utility/setup/file.hpp>
#include <boost/log/utility/setup/common_attributes.hpp>
#include <boost/log/sources/severity_logger.hpp>
#include <boost/log/sources/record_ostream.hpp>
#include <boost/log/utility/setup/console.hpp>

namespace crawler {
void init();
}
#endif  // INCLUDE_LOG_SETUP_HH_
