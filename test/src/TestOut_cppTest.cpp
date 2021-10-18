// -*- C++ -*-
/*!
 * @file  TestOut_cppTest.cpp
 * @brief TestOut Component
 * @date $Date$
 *
 * $Id$
 */

#include "TestOut_cppTest.h"

// Module specification
// <rtc-template block="module_spec">
static const char* testout_cpp_spec[] =
  {
    "implementation_id", "TestOut_cppTest",
    "type_name",         "TestOut_cppTest",
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
TestOut_cppTest::TestOut_cppTest(RTC::Manager* manager)
    // <rtc-template block="initializer">
  : RTC::DataFlowComponentBase(manager),
    m_outOut("out", m_out)

    // </rtc-template>
{
}

/*!
 * @brief destructor
 */
TestOut_cppTest::~TestOut_cppTest()
{
}



RTC::ReturnCode_t TestOut_cppTest::onInitialize()
{
  // Registration: InPort/OutPort/Service
  // <rtc-template block="registration">
  // Set InPort buffers
  addInPort("out", m_outIn);

  // Set OutPort buffer

  // Set service provider to Ports

  // Set service consumers to Ports

  // Set CORBA Service Ports

  // </rtc-template>

  // <rtc-template block="bind_config">
  // </rtc-template>

  return RTC::RTC_OK;
}

/*
RTC::ReturnCode_t TestOut_cppTest::onFinalize()
{
  return RTC::RTC_OK;
}
*/

/*
RTC::ReturnCode_t TestOut_cppTest::onStartup(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/

/*
RTC::ReturnCode_t TestOut_cppTest::onShutdown(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/


RTC::ReturnCode_t TestOut_cppTest::onActivated(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}


RTC::ReturnCode_t TestOut_cppTest::onDeactivated(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}


RTC::ReturnCode_t TestOut_cppTest::onExecute(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}

/*
RTC::ReturnCode_t TestOut_cppTest::onAborting(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/

/*
RTC::ReturnCode_t TestOut_cppTest::onError(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/

/*
RTC::ReturnCode_t TestOut_cppTest::onReset(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/

/*
RTC::ReturnCode_t TestOut_cppTest::onStateUpdate(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/

/*
RTC::ReturnCode_t TestOut_cppTest::onRateChanged(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/



extern "C"
{

  void TestOut_cppTestInit(RTC::Manager* manager)
  {
    coil::Properties profile(testout_cpp_spec);
    manager->registerFactory(profile,
                             RTC::Create<TestOut_cppTest>,
                             RTC::Delete<TestOut_cppTest>);
  }

};


