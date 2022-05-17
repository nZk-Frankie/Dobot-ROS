
"use strict";

let GetColorSensor = require('./GetColorSensor.js')
let SetJOGCmd = require('./SetJOGCmd.js')
let SetEndEffectorGripper = require('./SetEndEffectorGripper.js')
let GetHOMEParams = require('./GetHOMEParams.js')
let GetPTPCoordinateParams = require('./GetPTPCoordinateParams.js')
let SetQueuedCmdClear = require('./SetQueuedCmdClear.js')
let SetHOMECmd = require('./SetHOMECmd.js')
let GetIOMultiplexing = require('./GetIOMultiplexing.js')
let SetARCParams = require('./SetARCParams.js')
let GetDeviceVersion = require('./GetDeviceVersion.js')
let SetColorSensor = require('./SetColorSensor.js')
let SetPTPCmd = require('./SetPTPCmd.js')
let SetPTPCoordinateParams = require('./SetPTPCoordinateParams.js')
let SetCmdTimeout = require('./SetCmdTimeout.js')
let GetPose = require('./GetPose.js')
let GetEndEffectorParams = require('./GetEndEffectorParams.js')
let GetInfraredSensor = require('./GetInfraredSensor.js')
let SetDeviceName = require('./SetDeviceName.js')
let SetHOMEParams = require('./SetHOMEParams.js')
let GetARCParams = require('./GetARCParams.js')
let GetDeviceSN = require('./GetDeviceSN.js')
let SetIOPWM = require('./SetIOPWM.js')
let GetJOGCommonParams = require('./GetJOGCommonParams.js')
let GetDeviceName = require('./GetDeviceName.js')
let GetPTPJumpParams = require('./GetPTPJumpParams.js')
let SetInfraredSensor = require('./SetInfraredSensor.js')
let GetEndEffectorGripper = require('./GetEndEffectorGripper.js')
let SetEndEffectorParams = require('./SetEndEffectorParams.js')
let GetEndEffectorLaser = require('./GetEndEffectorLaser.js')
let SetQueuedCmdForceStopExec = require('./SetQueuedCmdForceStopExec.js')
let SetEMotor = require('./SetEMotor.js')
let SetCPCmd = require('./SetCPCmd.js')
let SetIODO = require('./SetIODO.js')
let SetEndEffectorLaser = require('./SetEndEffectorLaser.js')
let SetARCCmd = require('./SetARCCmd.js')
let SetTRIGCmd = require('./SetTRIGCmd.js')
let GetIODO = require('./GetIODO.js')
let SetJOGCommonParams = require('./SetJOGCommonParams.js')
let GetJOGJointParams = require('./GetJOGJointParams.js')
let GetAlarmsState = require('./GetAlarmsState.js')
let SetIOMultiplexing = require('./SetIOMultiplexing.js')
let GetIOADC = require('./GetIOADC.js')
let GetCPCmd = require('./GetCPCmd.js')
let GetIOPWM = require('./GetIOPWM.js')
let GetIODI = require('./GetIODI.js')
let SetPTPJointParams = require('./SetPTPJointParams.js')
let GetPTPJointParams = require('./GetPTPJointParams.js')
let SetPTPJumpParams = require('./SetPTPJumpParams.js')
let SetPTPCommonParams = require('./SetPTPCommonParams.js')
let SetEndEffectorSuctionCup = require('./SetEndEffectorSuctionCup.js')
let SetCPParams = require('./SetCPParams.js')
let GetEndEffectorSuctionCup = require('./GetEndEffectorSuctionCup.js')
let GetCPParams = require('./GetCPParams.js')
let GetPTPCommonParams = require('./GetPTPCommonParams.js')
let SetQueuedCmdStartExec = require('./SetQueuedCmdStartExec.js')
let SetWAITCmd = require('./SetWAITCmd.js')
let SetQueuedCmdStopExec = require('./SetQueuedCmdStopExec.js')
let SetJOGJointParams = require('./SetJOGJointParams.js')
let SetJOGCoordinateParams = require('./SetJOGCoordinateParams.js')
let ClearAllAlarmsState = require('./ClearAllAlarmsState.js')
let GetJOGCoordinateParams = require('./GetJOGCoordinateParams.js')

module.exports = {
  GetColorSensor: GetColorSensor,
  SetJOGCmd: SetJOGCmd,
  SetEndEffectorGripper: SetEndEffectorGripper,
  GetHOMEParams: GetHOMEParams,
  GetPTPCoordinateParams: GetPTPCoordinateParams,
  SetQueuedCmdClear: SetQueuedCmdClear,
  SetHOMECmd: SetHOMECmd,
  GetIOMultiplexing: GetIOMultiplexing,
  SetARCParams: SetARCParams,
  GetDeviceVersion: GetDeviceVersion,
  SetColorSensor: SetColorSensor,
  SetPTPCmd: SetPTPCmd,
  SetPTPCoordinateParams: SetPTPCoordinateParams,
  SetCmdTimeout: SetCmdTimeout,
  GetPose: GetPose,
  GetEndEffectorParams: GetEndEffectorParams,
  GetInfraredSensor: GetInfraredSensor,
  SetDeviceName: SetDeviceName,
  SetHOMEParams: SetHOMEParams,
  GetARCParams: GetARCParams,
  GetDeviceSN: GetDeviceSN,
  SetIOPWM: SetIOPWM,
  GetJOGCommonParams: GetJOGCommonParams,
  GetDeviceName: GetDeviceName,
  GetPTPJumpParams: GetPTPJumpParams,
  SetInfraredSensor: SetInfraredSensor,
  GetEndEffectorGripper: GetEndEffectorGripper,
  SetEndEffectorParams: SetEndEffectorParams,
  GetEndEffectorLaser: GetEndEffectorLaser,
  SetQueuedCmdForceStopExec: SetQueuedCmdForceStopExec,
  SetEMotor: SetEMotor,
  SetCPCmd: SetCPCmd,
  SetIODO: SetIODO,
  SetEndEffectorLaser: SetEndEffectorLaser,
  SetARCCmd: SetARCCmd,
  SetTRIGCmd: SetTRIGCmd,
  GetIODO: GetIODO,
  SetJOGCommonParams: SetJOGCommonParams,
  GetJOGJointParams: GetJOGJointParams,
  GetAlarmsState: GetAlarmsState,
  SetIOMultiplexing: SetIOMultiplexing,
  GetIOADC: GetIOADC,
  GetCPCmd: GetCPCmd,
  GetIOPWM: GetIOPWM,
  GetIODI: GetIODI,
  SetPTPJointParams: SetPTPJointParams,
  GetPTPJointParams: GetPTPJointParams,
  SetPTPJumpParams: SetPTPJumpParams,
  SetPTPCommonParams: SetPTPCommonParams,
  SetEndEffectorSuctionCup: SetEndEffectorSuctionCup,
  SetCPParams: SetCPParams,
  GetEndEffectorSuctionCup: GetEndEffectorSuctionCup,
  GetCPParams: GetCPParams,
  GetPTPCommonParams: GetPTPCommonParams,
  SetQueuedCmdStartExec: SetQueuedCmdStartExec,
  SetWAITCmd: SetWAITCmd,
  SetQueuedCmdStopExec: SetQueuedCmdStopExec,
  SetJOGJointParams: SetJOGJointParams,
  SetJOGCoordinateParams: SetJOGCoordinateParams,
  ClearAllAlarmsState: ClearAllAlarmsState,
  GetJOGCoordinateParams: GetJOGCoordinateParams,
};
