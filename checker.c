#include <stdio.h>
#include <assert.h>
#include "checker.h"

int language = 0; // 0 for English, 1 for German

void print_fun(const char* msg)
{
  printf("%s\n",msg);
}

int value_within_range(float val,float min,float max, const char* msg)
{
  if(val < min || val > max)
  {
    print_fun(msg);
    return 0;
  }
    return 1;
}

int value_within_range_with_no_min_val(float val,float max, const char* msg)
{
  if(val > max)
  {
    print_fun(msg);
    return 0;
  }
    return 1;
}

int batteryIsOk(float temperature, float soc, float chargeRate)
{
  return value_within_range(temperature,0,45,lang_sets[language].temp_msg)
      && value_within_range(soc,20,80,lang_sets[language].soc_msg)
      && value_within_range_with_no_min_val(chargeRate,0.8,lang_sets[language].charge_rate_msg);
    
}

int main() {
  assert(batteryIsOk(25, 70, 0.7));
  assert(!batteryIsOk(50, 85, 0));

  language = 1; // for german
  assert(batteryIsOk(25, 70, 0.7));
  assert(!batteryIsOk(50, 85, 0));
}
