/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:33:46 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface FigCaptureAutoFocusPositionSensorCalibrationIStopZEstimateDeltaHistory : NSObject {

	int _lastPassingIStopZEstimateDelta;
	int _previousIStopZEstimateDelta;
	int _currentIStopZEstimateDelta;
	int _previousIStopZEstimate;
	int _currentIStopZEstimate;

}

@property (assign,nonatomic) int lastPassingIStopZEstimateDelta;              //@synthesize lastPassingIStopZEstimateDelta=_lastPassingIStopZEstimateDelta - In the implementation block
@property (assign,nonatomic) int previousIStopZEstimateDelta;                 //@synthesize previousIStopZEstimate=_previousIStopZEstimate - In the implementation block
@property (assign,nonatomic) int currentIStopZEstimateDelta;                  //@synthesize currentIStopZEstimate=_currentIStopZEstimate - In the implementation block
-(int)lastPassingIStopZEstimateDelta;
-(void)setLastPassingIStopZEstimateDelta:(int)arg1 ;
-(int)previousIStopZEstimateDelta;
-(void)setPreviousIStopZEstimateDelta:(int)arg1 ;
-(int)currentIStopZEstimateDelta;
-(void)setCurrentIStopZEstimateDelta:(int)arg1 ;
@end

