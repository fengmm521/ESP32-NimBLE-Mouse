#ifndef ESP32_BLE_CONNECTION_STATUS_H
#define ESP32_BLE_CONNECTION_STATUS_H
#include "sdkconfig.h"
#if defined(CONFIG_BT_ENABLED)

#include <NimBLEServer.h>
#include "NimBLECharacteristic.h"

class BleMouseConnectionStatus : public NimBLEServerCallbacks
{
public:
  BleMouseConnectionStatus(void);
  bool connected = false;
  void onConnect(NimBLEServer* pServer);
  void onDisconnect(NimBLEServer* pServer);
  NimBLECharacteristic* inputMouse;
};

#endif // CONFIG_BT_ENABLED
#endif // ESP32_BLE_CONNECTION_STATUS_H
