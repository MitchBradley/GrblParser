const char* error_description[] = {
    "No error",                                         // 0
    "Expected GCodecommand letter",                     // 1
    "Bad GCode number format",                          // 2
    "Invalid $ statement",                              // 3
    "Negative value",                                   // 4
    "Setting disabled",                                 // 5
    "Step pulse too short",                             // 6
    "Failed to read settings",                          // 7
    "Command requires idle state",                      // 8
    "GCode cannot be executed in lock or alarm state",  // 9
    "Soft limit error",                                 // 10
    "Line too long",                                    // 11
    "Max step rate exceeded",                           // 12
    "Check door",                                       // 13
    "Startup line too long",                            // 14
    "Max travel exceeded during jog",                   // 15
    "Invalid jog command",                              // 16
    "Laser mode requires PWM output",                   // 17
    "No Homing/Cycle defined in settings",              // 18
    "Single axis homing not allowed",                   // 19
    "Unsupported GCode command",                        // 20
    "Gcode modal group violation",                      // 21
    "Gcode undefined feed rate",                        // 22
    "Gcode command value not integer",                  // 23
    "Gcode axis command conflict",                      // 24
    "Gcode word repeated",                              // 25
    "Gcode no axis words",                              // 26
    "Gcode invalid line number",                        // 27
    "Gcode value word missing",                         // 28
    "Gcode unsupported coordinate system",              // 29
    "Gcode G53 invalid motion mode",                    // 30
    "Gcode extra axis words",                           // 31
    "Gcode no axis words in plane",                     // 32
    "Gcode invalid target",                             // 33
    "Gcode arc radius error",                           // 34
    "Gcode no offsets in plane",                        // 35
    "Gcode unused words",                               // 36
    "Gcode G43 dynamic axis error",                     // 37
    "Gcode max value exceeded",                         // 38
    "P param max exceeded",                             // 39
    "Check control pins",                               // 40
};
