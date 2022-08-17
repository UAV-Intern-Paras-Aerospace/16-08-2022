#include "mavlink.h"
void setup()
{
  Serial.begin(57600);
}
void loop()
{
  setmode_Auto();
}
void setmode_Auto() {
  //Set message variables
  uint8_t _system_id = 255; 
  uint8_t _component_id = 2; 
  uint8_t _target_system = 1; 
  uint8_t _base_mode = 1;
  uint32_t _custom_mode = 2; 
  
  // Initialize the required buffers
  mavlink_message_t msg;
  uint8_t buf[MAVLINK_MAX_PACKET_LEN];
 
  // Pack the message
  mavlink_msg_set_mode_pack(_system_id, _component_id, &msg, _target_system, _base_mode, _custom_mode);
  uint16_t len = mavlink_msg_to_send_buffer(buf, &msg);  // Send the message (.write sends as bytes)
  Serial.write(buf, len); //Write data to serial port
}
