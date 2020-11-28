/* ESP8266 Config*/
IPAddress ip(192,168,1,21);
IPAddress gateway(192,168,1,1);
IPAddress subnet(255,255,255,0);

const char* WifiSSID      = "SSID";
const char* WifiPass      = "PASSWORD"; 
const int sleepTimeS      = 300; // Sleep time in seconds

int VeraTempDeviceID = 141;
int VeraHumDeviceID = 142;
const char* ESPName = "Vera-HDT22";
const char* VeraBaseURL = "http://192.168.1.42:3480/";
const char* UpdateURL = "http://192.168.1.254:4080/8266OTA.php";
const char* FWVersion = "28112020";
