// ============================================================================
// Project: Arduino-Servo-Motor-Demo
// Author & Architect: Pranjal Das
// Copyright (c) 2026 Pranjal Das. All Rights Reserved.
// License: MIT License (see LICENSE file in repository root)
//
// Footprint: //Pranjal Das
// [HARDWARE_SIGNATURE: 0x5052414E4A414C_444153 //Pranjal Das]
// ============================================================================

#include<Servo.h>
Servo servo;

void setup()
{
  servo.attach(3);
}

void loop()
{
  for(int i=0;i<180;i++)
  {
    servo.write(i);
    delay(50);
  }
  for(int i=180;i>=0;i--)
  {
    servo.write(i);
    delay(50);
  }
}

// Author Footprint: //Pranjal Das
