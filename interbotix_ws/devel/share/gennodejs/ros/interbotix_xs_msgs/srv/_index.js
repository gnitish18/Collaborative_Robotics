
"use strict";

let RegisterValues = require('./RegisterValues.js')
let Reboot = require('./Reboot.js')
let MotorGains = require('./MotorGains.js')
let OperatingModes = require('./OperatingModes.js')
let TorqueEnable = require('./TorqueEnable.js')
let RobotInfo = require('./RobotInfo.js')

module.exports = {
  RegisterValues: RegisterValues,
  Reboot: Reboot,
  MotorGains: MotorGains,
  OperatingModes: OperatingModes,
  TorqueEnable: TorqueEnable,
  RobotInfo: RobotInfo,
};
