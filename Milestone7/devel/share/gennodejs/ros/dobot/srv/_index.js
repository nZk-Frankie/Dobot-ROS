
"use strict";

let SetEndEffectorLaser = require('./SetEndEffectorLaser.js')
let GetEndEffectorLaser = require('./GetEndEffectorLaser.js')
let SetPTPJumpParams = require('./SetPTPJumpParams.js')
let SetTRIGCmd = require('./SetTRIGCmd.js')
let SetDeviceName = require('./SetDeviceName.js')
let SetJOGCmd = require('./SetJOGCmd.js')
let GetPose = require('./GetPose.js')
let SetQueuedCmdForceStopExec = require('./SetQueuedCmdForceStopExec.js')
let SetQueuedCmdStopExec = require('./SetQueuedCmdStopExec.js')
let GetIODI = require('./GetIODI.js')
let GetJOGCommonParams = require('./GetJOGCommonParams.js')
let GetARCParams = require('./GetARCParams.js')
let SetInfraredSensor = require('./SetInfraredSensor.js')
let GetDeviceName = require('./GetDeviceName.js')
let SetEndEffectorGripper = require('./SetEndEffectorGripper.js')
let SetQueuedCmdStartExec = require('./SetQueuedCmdStartExec.js')
let SetColorSensor = require('./SetColorSensor.js')
let GetJOGCoordinateParams = require('./GetJOGCoordinateParams.js')
let SetJOGCommonParams = require('./SetJOGCommonParams.js')
let SetWAITCmd = require('./SetWAITCmd.js')
let SetPTPJointParams = require('./SetPTPJointParams.js')
let SetEndEffectorParams = require('./SetEndEffectorParams.js')
let SetCmdTimeout = require('./SetCmdTimeout.js')
let GetColorSensor = require('./GetColorSensor.js')
let SetPTPCommonParams = require('./SetPTPCommonParams.js')
let SetHOMECmd = require('./SetHOMECmd.js')
let SetEndEffectorSuctionCup = require('./SetEndEffectorSuctionCup.js')
let GetEndEffectorGripper = require('./GetEndEffectorGripper.js')
let GetDeviceSN = require('./GetDeviceSN.js')
let GetIOPWM = require('./GetIOPWM.js')
let GetHOMEParams = require('./GetHOMEParams.js')
let SetARCCmd = require('./SetARCCmd.js')
let GetCPParams = require('./GetCPParams.js')
let SetJOGJointParams = require('./SetJOGJointParams.js')
let GetPTPCommonParams = require('./GetPTPCommonParams.js')
let SetHOMEParams = require('./SetHOMEParams.js')
let SetCPParams = require('./SetCPParams.js')
let GetIODO = require('./GetIODO.js')
let GetPTPJumpParams = require('./GetPTPJumpParams.js')
let GetEndEffectorParams = require('./GetEndEffectorParams.js')
let SetPTPCoordinateParams = require('./SetPTPCoordinateParams.js')
let GetPTPJointParams = require('./GetPTPJointParams.js')
let GetInfraredSensor = require('./GetInfraredSensor.js')
let SetARCParams = require('./SetARCParams.js')
let SetIOPWM = require('./SetIOPWM.js')
let SetJOGCoordinateParams = require('./SetJOGCoordinateParams.js')
let GetIOADC = require('./GetIOADC.js')
let SetCPCmd = require('./SetCPCmd.js')
let ClearAllAlarmsState = require('./ClearAllAlarmsState.js')
let SetIODO = require('./SetIODO.js')
let GetIOMultiplexing = require('./GetIOMultiplexing.js')
let SetIOMultiplexing = require('./SetIOMultiplexing.js')
let GetEndEffectorSuctionCup = require('./GetEndEffectorSuctionCup.js')
let GetJOGJointParams = require('./GetJOGJointParams.js')
let SetQueuedCmdClear = require('./SetQueuedCmdClear.js')
let GetCPCmd = require('./GetCPCmd.js')
let GetDeviceVersion = require('./GetDeviceVersion.js')
let SetPTPCmd = require('./SetPTPCmd.js')
let GetAlarmsState = require('./GetAlarmsState.js')
let GetPTPCoordinateParams = require('./GetPTPCoordinateParams.js')
let SetEMotor = require('./SetEMotor.js')

module.exports = {
  SetEndEffectorLaser: SetEndEffectorLaser,
  GetEndEffectorLaser: GetEndEffectorLaser,
  SetPTPJumpParams: SetPTPJumpParams,
  SetTRIGCmd: SetTRIGCmd,
  SetDeviceName: SetDeviceName,
  SetJOGCmd: SetJOGCmd,
  GetPose: GetPose,
  SetQueuedCmdForceStopExec: SetQueuedCmdForceStopExec,
  SetQueuedCmdStopExec: SetQueuedCmdStopExec,
  GetIODI: GetIODI,
  GetJOGCommonParams: GetJOGCommonParams,
  GetARCParams: GetARCParams,
  SetInfraredSensor: SetInfraredSensor,
  GetDeviceName: GetDeviceName,
  SetEndEffectorGripper: SetEndEffectorGripper,
  SetQueuedCmdStartExec: SetQueuedCmdStartExec,
  SetColorSensor: SetColorSensor,
  GetJOGCoordinateParams: GetJOGCoordinateParams,
  SetJOGCommonParams: SetJOGCommonParams,
  SetWAITCmd: SetWAITCmd,
  SetPTPJointParams: SetPTPJointParams,
  SetEndEffectorParams: SetEndEffectorParams,
  SetCmdTimeout: SetCmdTimeout,
  GetColorSensor: GetColorSensor,
  SetPTPCommonParams: SetPTPCommonParams,
  SetHOMECmd: SetHOMECmd,
  SetEndEffectorSuctionCup: SetEndEffectorSuctionCup,
  GetEndEffectorGripper: GetEndEffectorGripper,
  GetDeviceSN: GetDeviceSN,
  GetIOPWM: GetIOPWM,
  GetHOMEParams: GetHOMEParams,
  SetARCCmd: SetARCCmd,
  GetCPParams: GetCPParams,
  SetJOGJointParams: SetJOGJointParams,
  GetPTPCommonParams: GetPTPCommonParams,
  SetHOMEParams: SetHOMEParams,
  SetCPParams: SetCPParams,
  GetIODO: GetIODO,
  GetPTPJumpParams: GetPTPJumpParams,
  GetEndEffectorParams: GetEndEffectorParams,
  SetPTPCoordinateParams: SetPTPCoordinateParams,
  GetPTPJointParams: GetPTPJointParams,
  GetInfraredSensor: GetInfraredSensor,
  SetARCParams: SetARCParams,
  SetIOPWM: SetIOPWM,
  SetJOGCoordinateParams: SetJOGCoordinateParams,
  GetIOADC: GetIOADC,
  SetCPCmd: SetCPCmd,
  ClearAllAlarmsState: ClearAllAlarmsState,
  SetIODO: SetIODO,
  GetIOMultiplexing: GetIOMultiplexing,
  SetIOMultiplexing: SetIOMultiplexing,
  GetEndEffectorSuctionCup: GetEndEffectorSuctionCup,
  GetJOGJointParams: GetJOGJointParams,
  SetQueuedCmdClear: SetQueuedCmdClear,
  GetCPCmd: GetCPCmd,
  GetDeviceVersion: GetDeviceVersion,
  SetPTPCmd: SetPTPCmd,
  GetAlarmsState: GetAlarmsState,
  GetPTPCoordinateParams: GetPTPCoordinateParams,
  SetEMotor: SetEMotor,
};
