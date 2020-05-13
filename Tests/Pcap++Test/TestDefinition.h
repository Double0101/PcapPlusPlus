#pragma once

#include "../PcppTestFramework/PcppTestFramework.h"

// Implemented in IpMac.cpp
PTF_TEST_CASE(TestIPAddress);
PTF_TEST_CASE(TestMacAddress);
PTF_TEST_CASE(TestLRUList);

// Implemented in FileTests.cpp
PTF_TEST_CASE(TestPcapFileReadWrite);
PTF_TEST_CASE(TestPcapSllFileReadWrite);
PTF_TEST_CASE(TestPcapRawIPFileReadWrite);
PTF_TEST_CASE(TestPcapFileAppend);
PTF_TEST_CASE(TestPcapNgFileReadWrite);
PTF_TEST_CASE(TestPcapNgFileReadWriteAdv);

// Implemented in LiveDeviceTests.cpp
PTF_TEST_CASE(TestPcapLiveDeviceList);
PTF_TEST_CASE(TestPcapLiveDeviceListSearch);
PTF_TEST_CASE(TestPcapLiveDevice);
PTF_TEST_CASE(TestPcapLiveDeviceNoNetworking);
PTF_TEST_CASE(TestPcapLiveDeviceStatsMode);
PTF_TEST_CASE(TestPcapLiveDeviceBlockingMode);
PTF_TEST_CASE(TestPcapLiveDeviceSpecialCfg);
PTF_TEST_CASE(TestWinPcapLiveDevice);
PTF_TEST_CASE(TestSendPacket);
PTF_TEST_CASE(TestSendPackets);
PTF_TEST_CASE(TestRemoteCapture);

// Implemented in FilterTests.cpp
PTF_TEST_CASE(TestPcapFiltersLive);
PTF_TEST_CASE(TestPcapFilters_General_BPFStr);
PTF_TEST_CASE(TestPcapFiltersOffline);

// Implemented in PacketParsingTests.cpp
PTF_TEST_CASE(TestHttpRequestParsing);
PTF_TEST_CASE(TestHttpResponseParsing);
PTF_TEST_CASE(TestPrintPacketAndLayers);
PTF_TEST_CASE(TestDnsParsing);

// Implemented in TcpReassemblyTests.cpp
PTF_TEST_CASE(TestTcpReassemblySanity);
PTF_TEST_CASE(TestTcpReassemblyRetran);
PTF_TEST_CASE(TestTcpReassemblyMissingData);
PTF_TEST_CASE(TestTcpReassemblyOutOfOrder);
PTF_TEST_CASE(TestTcpReassemblyWithFIN_RST);
PTF_TEST_CASE(TestTcpReassemblyMalformedPkts);
PTF_TEST_CASE(TestTcpReassemblyMultipleConns);
PTF_TEST_CASE(TestTcpReassemblyIPv6);
PTF_TEST_CASE(TestTcpReassemblyIPv6MultConns);
PTF_TEST_CASE(TestTcpReassemblyIPv6_OOO);
PTF_TEST_CASE(TestTcpReassemblyCleanup);
PTF_TEST_CASE(TestTcpReassemblyMaxSeq);

// Implemented in IPFragmentationTests.cpp
PTF_TEST_CASE(TestIPFragmentationSanity);
PTF_TEST_CASE(TestIPFragOutOfOrder);
PTF_TEST_CASE(TestIPFragPartialData);
PTF_TEST_CASE(TestIPFragMultipleFrags);
PTF_TEST_CASE(TestIPFragMapOverflow);
PTF_TEST_CASE(TestIPFragRemove);