// -*- C++ -*-
/*!
 * @file  TestOut_cpp.cpp
 * @brief TestOut Component
 * @date $Date$
 *
 * $Id$
 */

#include "TestOut_cpp.h"

// Module specification
// <rtc-template block="module_spec">
static const char* testout_cpp_spec[] =
  {
    "implementation_id", "TestOut_cpp",
    "type_name",         "TestOut_cpp",
    "description",       "TestOut Component",
    "version",           "1.2.2",
    "vendor",            "Sugar Sweet Robotics",
    "category",          "Test",
    "activity_type",     "PERIODIC",
    "kind",              "DataFlowComponent",
    "max_instance",      "1",
    "language",          "C++",
    "lang_type",         "compile",
    ""
  };
// </rtc-template>

/*!
 * @brief constructor
 * @param manager Maneger Object
 */
TestOut_cpp::TestOut_cpp(RTC::Manager* manager)
    // <rtc-template block="initializer">
  : RTC::DataFlowComponentBase(manager),
    m_outOut("out", m_out)

    // </rtc-template>
{
}

/*!
 * @brief destructor
 */
TestOut_cpp::~TestOut_cpp()
{
}



RTC::ReturnCode_t TestOut_cpp::onInitialize()
{
  // Registration: InPort/OutPort/Service
  // <rtc-template block="registration">
  // Set InPort buffers

  // Set OutPort buffer
  addOutPort("out", m_outOut);

  // Set service provider to Ports

  // Set service consumers to Ports

  // Set CORBA Service Ports

  // </rtc-template>

  // <rtc-template block="bind_config">
  // </rtc-template>

  return RTC::RTC_OK;
}

/*
RTC::ReturnCode_t TestOut_cpp::onFinalize()
{
  return RTC::RTC_OK;
}
*/

/*
RTC::ReturnCode_t TestOut_cpp::onStartup(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/

/*
RTC::ReturnCode_t TestOut_cpp::onShutdown(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/


RTC::ReturnCode_t TestOut_cpp::onActivated(RTC::UniqueId ec_id)
{
  m_out.data = 1;
  m_outOut.write();
  return RTC::RTC_OK;
}


RTC::ReturnCode_t TestOut_cpp::onDeactivated(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}


RTC::ReturnCode_t TestOut_cpp::onExecute(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}

/*
RTC::ReturnCode_t TestOut_cpp::onAborting(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/

/*
RTC::ReturnCode_t TestOut_cpp::onError(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/

/*
RTC::ReturnCode_t TestOut_cpp::onReset(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/

/*
RTC::ReturnCode_t TestOut_cpp::onStateUpdate(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/

/*
RTC::ReturnCode_t TestOut_cpp::onRateChanged(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/



extern "C"
{

  void TestOut_cppInit(RTC::Manager* manager)
  {
    coil::Properties profile(testout_cpp_spec);
    manager->registerFactory(profile,
                             RTC::Create<TestOut_cpp>,
                             RTC::Delete<TestOut_cpp>);
  }

};


