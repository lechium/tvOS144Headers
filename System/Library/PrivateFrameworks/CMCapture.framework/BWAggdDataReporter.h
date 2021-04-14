/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:33:47 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
#import <CMCapture/CMCapture-Structs.h>
@class NSObject;

@interface BWAggdDataReporter : NSObject {

	NSObject*<OS_dispatch_queue> _aggdDispatchQueue;
	int _lastShutterLag;

}
+(void)initialize;
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(void)reportCalibrationStatisticsWithTime:(id)arg1 timeValue:(double)arg2 attemptsField:(id)arg3 attemptsValue:(long long)arg4 successField:(id)arg5 successValue:(long long)arg6 magneticFieldMagnitudeField:(id)arg7 magneticFieldMagnitudeValue:(double)arg8 ;
-(void)reportSphereEndStopCalibrationForPosition:(int)arg1 oisPositiveX:(int)arg2 oisNegativeX:(int)arg3 oisPositiveY:(int)arg4 oisNegativeY:(int)arg5 maxPositiveXDriftFromNVM:(int)arg6 maxNegativeXDriftFromNVM:(int)arg7 maxPositiveYDriftFromNVM:(int)arg8 maxNegativeYDriftFromNVM:(int)arg9 sphereStrokeX:(int)arg10 sphereStrokeY:(int)arg11 calibrationStatus:(unsigned)arg12 isValid:(BOOL)arg13 ;
-(void)reportAPSSphereInteractionCalibrationForPosition:(int)arg1 residualErrorNeutral:(float)arg2 calibrationZHeightNeutral:(float)arg3 residualErrorMacro:(float)arg4 calibrationZHeightMacro:(float)arg5 calibrationStatus:(unsigned)arg6 isValid:(BOOL)arg7 ;
-(void)reportGNRSampleBufferProcessorProcessingStatus:(int)arg1 ;
-(void)reportAutoFocusPositionSensorCalibrationForPosition:(int)arg1 iStopZEstimate:(int)arg2 eSensorOutput:(short)arg3 wSensorOutput:(short)arg4 gravityZ:(int)arg5 calibrationStatus:(unsigned)arg6 sensorTemp:(short)arg7 successfulInfinityEndStopDelta:(int)arg8 currentInfinityEndStopDelta:(int)arg9 previousInfinityEndStopDelta:(int)arg10 currentAngleDelta:(int)arg11 previousAngleDelta:(int)arg12 factoryCalibrationOffset:(int*)arg13 estimatedNeutralZ:(int*)arg14 deltaNeutralZFromNVM:(int*)arg15 estimatedSagZ:(int*)arg16 combinedSensorOutput:(int*)arg17 deltaSagFromNVM:(int*)arg18 isValid:(BOOL)arg19 dataWasRejectedByHistory:(BOOL)arg20 ;
-(void)reportCameraStreamingTimeInMilliseconds:(unsigned long long)arg1 deviceType:(int)arg2 devicePosition:(int)arg3 ;
-(void)reportPearlInfraredProjectorUptime:(unsigned long long)arg1 current:(int)arg2 pattern:(int)arg3 applicationID:(id)arg4 ;
-(void)reportAutoFocusPositionSensorMode:(int)arg1 portType:(id)arg2 ;
-(id)_aggdCameraStreamingTimeStringFromDeviceType:(int)arg1 devicePosition:(int)arg2 ;
-(void)_incrementAggdScalarKey:(id)arg1 withValue:(long long)arg2 ;
-(id)_aggdPearlInfraredProjectorUptimeStringFromCurrent:(int)arg1 pattern:(int)arg2 applicationID:(id)arg3 ;
-(void)_pushValue:(double)arg1 aggdDistributionKey:(id)arg2 ;
-(id)_aggdGNRProcessingStatusStringFromProcessingStatus:(int)arg1 ;
-(id)_aggdStereoFusionProcessingTypeStringForCaptureType:(int)arg1 isStereoFusionCapture:(BOOL)arg2 wideSubCaptureType:(int)arg3 teleSubCaptureType:(int)arg4 isOriginalImage:(BOOL)arg5 ;
-(id)_aggdStereoFusionProcessingStatusStringFromProcessingStatus:(int)arg1 ;
-(id)_aggdSDOFProcessingStatusStringFromProcessingStatus:(int)arg1 ;
-(id)_aggdStringForPrefix:(id)arg1 primaryCaptureType:(int)arg2 secondaryCaptureType:(int)arg3 captureFlags:(unsigned long long)arg4 sceneFlags:(unsigned long long)arg5 stillDuringVideo:(BOOL)arg6 frontCamera:(BOOL)arg7 ;
-(void)_reportInitFailure;
-(void)_setAggdScalarKey:(id)arg1 withValue:(long long)arg2 ;
-(id)_captureTypeStringWithPrimaryCaptureType:(int)arg1 secondaryCaptureType:(int)arg2 captureFlags:(unsigned long long)arg3 sceneFlags:(unsigned long long)arg4 ;
-(void)reportISPCreateDuration:(int)arg1 ;
-(void)reportStereoFusionProcessingTypeForCaptureType:(int)arg1 isStereoFusionCapture:(BOOL)arg2 wideSubCaptureType:(int)arg3 teleSubCaptureType:(int)arg4 isOriginalImage:(BOOL)arg5 ;
-(void)reportStereoFusionSampleBufferProcessorProcessingStatus:(int)arg1 ;
-(void)reportSDOFSampleBufferProcessorProcessingStatus:(int)arg1 ;
-(void)reportLuxLevel:(unsigned)arg1 primaryCaptureType:(int)arg2 secondaryCaptureType:(int)arg3 captureFlags:(unsigned long long)arg4 sceneFlags:(unsigned long long)arg5 stillDuringVideo:(BOOL)arg6 frontCamera:(BOOL)arg7 ;
-(void)reportZoomFactor:(float)arg1 primaryCaptureType:(int)arg2 secondaryCaptureType:(int)arg3 captureFlags:(unsigned long long)arg4 sceneFlags:(unsigned long long)arg5 stillDuringVideo:(BOOL)arg6 frontCamera:(BOOL)arg7 ;
-(void)reportNonCameraAppCaptureWithPrimaryCaptureType:(int)arg1 secondaryCaptureType:(int)arg2 captureFlags:(unsigned long long)arg3 sceneFlags:(unsigned long long)arg4 stillDuringVideo:(BOOL)arg5 frontCamera:(BOOL)arg6 ;
-(void)reportCameraAppCaptureForNonCameraAppLoggingWithFrontCamera:(BOOL)arg1 ;
-(void)reportFaceCount:(unsigned)arg1 frontCamera:(BOOL)arg2 ;
-(void)reportSensorTemperature:(unsigned)arg1 frontCamera:(BOOL)arg2 ;
-(void)reportShutterLag:(SCD_Struct_BW7)arg1 primaryCaptureType:(int)arg2 secondaryCaptureType:(int)arg3 captureFlags:(unsigned long long)arg4 sceneFlags:(unsigned long long)arg5 stillDuringVideo:(BOOL)arg6 frontCamera:(BOOL)arg7 ;
-(int)lastShutterLag;
-(void)reportZeroShutterLagFirmwareTimeMachineInitFailure;
-(void)reportZeroShutterLagPreviewTimeMachineInitFailure;
-(void)reportZeroShutterLagSphereInitFailure;
-(void)reportZeroShutterLagMetadataInitFailureWithReasons:(unsigned)arg1 ;
-(void)reportZeroShutterLagInitSuccess;
-(void)reportZeroShutterLagReferenceFrameSelectionFailureForCaptureType:(int)arg1 ;
-(void)reportZeroShutterLagSuccess;
-(void)reportCameraLaunchWithoutPrewarm:(int)arg1 ;
-(void)reportCameraLaunchWithPrewarm:(int)arg1 reason:(id)arg2 ;
-(void)reportLockScreenCameraLaunchCompletedWithPrewarming:(BOOL)arg1 restartedSessionDueToError:(int)arg2 ;
-(void)reportLockScreenCameraLaunchCancelledWithPrewarming:(BOOL)arg1 ispStreamingStarted:(BOOL)arg2 ;
-(void)reportAutoFocusCalibrationForPosition:(int)arg1 freqZ:(int)arg2 deltaFreqZ:(int)arg3 qZ:(int)arg4 deltaQZ:(int)arg5 gainZ:(int)arg6 calibrationStatus:(unsigned)arg7 gelModelCoefficientD1:(int*)arg8 gelModelCoefficientD2:(int*)arg9 gelModelCoefficientP1:(int*)arg10 gelModelCoefficientP2:(int*)arg11 isValid:(BOOL)arg12 ;
-(void)reportSphereCalibrationForPosition:(int)arg1 freqX:(float)arg2 deltaFreqX:(float)arg3 qX:(float)arg4 deltaQX:(float)arg5 gainX:(float)arg6 freqY:(float)arg7 deltaFreqY:(float)arg8 qY:(float)arg9 deltaQY:(float)arg10 gainY:(float)arg11 calibrationStatus:(unsigned)arg12 isValid:(BOOL)arg13 ;
-(void)reportAPSOffsetEstimatorForPortType:(id)arg1 accelMotion:(float)arg2 gyroMotion:(float)arg3 inSessionOffset:(float)arg4 deltaOffsetFC:(float)arg5 deltaOffsetMI:(float)arg6 deltaOffsetFATP:(float)arg7 deltaOffsetLastSession:(float)arg8 errorHeadroomViolated:(BOOL)arg9 errorConvergenceFailed:(BOOL)arg10 errorMotionTooLarge:(BOOL)arg11 errorConfidenceTooLow:(BOOL)arg12 errorOffsetTooLarge:(BOOL)arg13 errorDeltaTooLarge:(BOOL)arg14 errorSaturated:(BOOL)arg15 errorCouldNotRun:(BOOL)arg16 successRun:(BOOL)arg17 startAPSVoltage:(int)arg18 modeGCOL:(BOOL)arg19 modeOL:(BOOL)arg20 ;
-(void)reportStillImageAPSStatisticsForPortType:(id)arg1 logicalFocusPosition:(int)arg2 apsMotion:(float)arg3 sphereMotion:(float)arg4 accelMotion:(float)arg5 gyroMotion:(float)arg6 subjectDistance:(float)arg7 luxLevel:(int)arg8 ;
-(void)reportVideoRecordingAPSStatistics:(float)arg1 stdDataFromAPSForTele:(float)arg2 stdDataFromSphereForWide:(float)arg3 stdDataFromSphereForTele:(float)arg4 stdDataFromAccel:(float)arg5 stdDataFromGyro:(float)arg6 maxDataFromAPSForWide:(float)arg7 maxDataFromAPSForTele:(float)arg8 minDataFromAPSForWide:(float)arg9 minDataFromAPSForTele:(float)arg10 maxDataFromSphereForWide:(float)arg11 maxDataFromSphereForTele:(float)arg12 minDataFromSphereForWide:(float)arg13 minDataFromSphereForTele:(float)arg14 maxDataFromAccel:(float)arg15 minDataFromAccel:(float)arg16 maxDataFromGyro:(float)arg17 minDataFromGyro:(float)arg18 ;
-(void)reportCriticalFocusErrorOccurredForPortType:(id)arg1 ;
-(void)reportSphereJitterDetectionsForPortType:(id)arg1 detectionAttemps:(int)arg2 successfulDetections:(int)arg3 ;
@end

