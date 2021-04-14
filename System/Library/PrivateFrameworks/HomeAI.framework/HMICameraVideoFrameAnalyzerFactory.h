/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:34:24 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeAI/HomeAI-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFTimerDelegate.h>
#import <libobjc.A.dylib/HMFLogging.h>

@protocol HMICameraVideoFrameAnalyzer;
@class HMFUnfairLock, HMFTimer, NSString;

@interface HMICameraVideoFrameAnalyzerFactory : HMFObject <HMFTimerDelegate, HMFLogging> {

	HMFUnfairLock* _lock;
	id<HMICameraVideoFrameAnalyzer> _frameAnalyzer;
	HMFTimer* _watchdogTimer;

}

@property (nonatomic,readonly) HMFUnfairLock * lock;                                     //@synthesize lock=_lock - In the implementation block
@property (nonatomic,retain) id<HMICameraVideoFrameAnalyzer> frameAnalyzer;              //@synthesize frameAnalyzer=_frameAnalyzer - In the implementation block
@property (readonly) HMFTimer * watchdogTimer;                                           //@synthesize watchdogTimer=_watchdogTimer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(id)logCategory;
+(id)eventConfidenceThresholdsHigh;
+(id)eventConfidenceThresholdsMedium;
-(id)init;
-(HMFUnfairLock *)lock;
-(void)timerDidFire:(id)arg1 ;
-(HMFTimer *)watchdogTimer;
-(void)preAnalyze:(id)arg1 ;
-(void)handleMotionDetection:(id)arg1 sessionPTS:(SCD_Struct_HM3)arg2 frameDimensions:(CGSize)arg3 sessionIdentifier:(id)arg4 ;
-(void)warmStartModel;
-(id)analyze:(id)arg1 targetEventTypes:(long long)arg2 enableFaceClassification:(BOOL)arg3 sessionIdentifier:(id)arg4 homeUUID:(id)arg5 error:(id*)arg6 ;
-(void)setFrameAnalyzer:(id<HMICameraVideoFrameAnalyzer>)arg1 ;
-(double)modelTimeoutPreference;
-(id<HMICameraVideoFrameAnalyzer>)frameAnalyzer;
-(BOOL)ensureFrameAnalyzerWithError:(id*)arg1 ;
-(id)getConfidenceThresholdPreferenceForKey:(id)arg1 defaultConfidenceThreshold:(double)arg2 ;
-(id)eventConfidenceThresholdsMediumFromTrial;
-(id)eventConfidenceThresholdsHighFromTrial;
-(double)eventConfidenceFaceThresholdFromTrial;
@end

