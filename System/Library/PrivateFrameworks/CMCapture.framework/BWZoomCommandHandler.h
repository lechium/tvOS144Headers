/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:33:51 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol BWZoomCompletionDelegate;
#import <CMCapture/CMCapture-Structs.h>
@class BWZoomDelayBuffer, NSArray;

@interface BWZoomCommandHandler : NSObject {

	os_unfair_lock_s _zoomLock;
	float _appliedZoomFactor;
	float _lastRequestedZoomFactor;
	BOOL _zoomFactorServiced;
	BWZoomDelayBuffer* _zoomDelayBuffer;
	BOOL _clientCanCompensateForDelay;
	id<BWZoomCompletionDelegate> _zoomCompletionDelegate;
	id<BWZoomCompletionDelegate> _zoomCompletionDelegateForStereoAudio;
	SCD_Struct_BW7 _lastFramePTSes[2];
	long long _timeForLastRequestedZoomFactor;
	SCD_Struct_BW7 _rampStartTime;
	float _rampAcceleration;
	float _rampStartFactor;
	float _rampStartVelocity;
	float _rampTargetFactor;
	float _rampTargetVelocity;
	int _rampCommandID;
	BOOL _rampActive;
	int _rampType;
	double _rampDuration;
	float _rampSnapFraction;
	float _rampCurrentVelocity;
	float _rampZoomFactorOfInterest;
	NSArray* _fudgedZoomRanges;
	float _maxZoomFactorToApplyFudge;
	float _minZoomFactorToApplyFudge;
	float _maxFudgedZoomFactor;
	float _minFudgedZoomFactor;

}

@property (assign) float requestedZoomFactor; 
@property (readonly) float requestedZoomFactorWithoutFudge; 
@property (readonly) float appliedZoomFactor; 
@property (readonly) float appliedZoomFactorWithoutFudge; 
@property (readonly) float rampTargetZoomFactor; 
@property (readonly) float rampZoomFactorOfInterest; 
@property (assign,nonatomic) id<BWZoomCompletionDelegate> zoomCompletionDelegate;                            //@synthesize zoomCompletionDelegate=_zoomCompletionDelegate - In the implementation block
@property (assign,nonatomic) id<BWZoomCompletionDelegate> zoomCompletionDelegateForStereoAudio;              //@synthesize zoomCompletionDelegateForStereoAudio=_zoomCompletionDelegateForStereoAudio - In the implementation block
+(void)initialize;
-(id)init;
-(void)dealloc;
-(float)updateZoomModelAndAppliedZoomFactorForNextFrameWithPTS:(SCD_Struct_BW7)arg1 ptsTolerance:(SCD_Struct_BW7)arg2 delayedISPAppliedZoomFactor:(float)arg3 zoomFactorChangedOut:(BOOL*)arg4 ;
-(float)updateZoomModelForNextFrameWithPTS:(SCD_Struct_BW7)arg1 ;
-(void)updateAppliedZoomFactorForDelayedISPAppliedZoomFactor:(float)arg1 ;
-(float)appliedZoomFactor;
-(float)rampZoomFactorOfInterest;
-(float)_applyFudgeToZoomFactor:(float)arg1 ;
-(float)_zoomFactorForRampAtPTS:(SCD_Struct_BW7)arg1 updateCurrentZoomRampState:(BOOL)arg2 ;
-(float)_updateZoomModelForNextFrameWithPTS:(SCD_Struct_BW7)arg1 ;
-(void)_activateRampMode:(BOOL)arg1 ;
-(BOOL)_haveUpdatedZoomModelForPTS:(SCD_Struct_BW7)arg1 ;
-(SCD_Struct_BW144)_updateAppliedZoomFactorForDelayedISPAppliedZoomFactor:(float)arg1 zoomFactorChangedOut:(BOOL*)arg2 ;
-(float)_zoomFactorForDurationBasedRampAtPTS:(SCD_Struct_BW7)arg1 updateCurrentZoomRampState:(BOOL)arg2 ;
-(float)_zoomFactorForRateBasedRampAtPTS:(SCD_Struct_BW7)arg1 updateCurrentZoomRampState:(BOOL)arg2 ;
-(float)_zoomFactorForSpringBasedRampAtPTS:(SCD_Struct_BW7)arg1 updateCurrentZoomRampState:(BOOL)arg2 ;
-(void)_resetZoomFactorOfInterestIfReachedWithZoomFactor:(float)arg1 direction:(int)arg2 ;
-(float)applyFudgeToZoomFactor:(float)arg1 ;
-(float)requestedZoomFactor;
-(float)requestedZoomFactorWithoutFudge;
-(void)setRequestedZoomFactor:(float)arg1 ;
-(float)appliedZoomFactorWithoutFudge;
-(float)rampTargetZoomFactor;
-(void)setFudgedZoomRanges:(id)arg1 ;
-(void)resetZoomDelayBuffer;
-(void)rampToVideoZoomFactor:(float)arg1 withRampType:(int)arg2 rate:(float)arg3 duration:(double)arg4 snapToTargetZoomFactorWithinRampFraction:(float)arg5 commandID:(int)arg6 ;
-(void)setTypicalISPZoomDelay:(unsigned)arg1 clientCanCompensateForDelay:(BOOL)arg2 ;
-(float)predictRampZoomFactorAfterNumberOfFrames:(int)arg1 settingZoomFactorOfInterest:(float)arg2 ;
-(void)resetZoomFactorOfInterest;
-(long long)timeForLastRequestedZoomFactor;
-(BOOL)haveUpdatedZoomModelForPTS:(SCD_Struct_BW7)arg1 ;
-(id<BWZoomCompletionDelegate>)zoomCompletionDelegate;
-(void)setZoomCompletionDelegate:(id<BWZoomCompletionDelegate>)arg1 ;
-(id<BWZoomCompletionDelegate>)zoomCompletionDelegateForStereoAudio;
-(void)setZoomCompletionDelegateForStereoAudio:(id<BWZoomCompletionDelegate>)arg1 ;
@end

