#include <stdio.h>
#include <assert.h>

int value_within_range(float val,float min,float max, const char* msg)
{
  if(val < min || val > max)
  {
    printf("%s\n",msg);
    return 0;
  }
    return 1;
}

int batteryIsOk(float temperature, float soc, float chargeRate)
{
    int is_temp_ok = value_within_range(temperature,0,45,"Temperature out of range!");
    int is_spc_ok = value_within_range(soc,20,80,"State of Charge out of range!");
    int is_chargerate_ok = value_within_range(chargeRate,0,0.8,"Charge Rate out of range!");
    return is_temp_ok && is_spc_ok && is_chargerate_ok;
}

int main() {
  assert(batteryIsOk(25, 70, 0.7));
  assert(!batteryIsOk(50, 85, 0));
}
