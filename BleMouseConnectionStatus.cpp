#include "BleMouseConnectionStatus.h"

BleMouseConnectionStatus::BleMouseConnectionStatus(void) {
}

void BleMouseConnectionStatus::onConnect(NimBLEServer* pServer)
{
  this->connected = true;
}

void BleMouseConnectionStatus::onDisconnect(NimBLEServer* pServer)
{
  this->connected = false;
}
