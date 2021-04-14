/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:30:27 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreSpeech/CSEventMonitor.h>

@protocol CSBiometricMatchMonitorDelegate;
@interface CSBiometricMatchMonitor : CSEventMonitor {

	id<CSBiometricMatchMonitorDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<CSBiometricMatchMonitorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)sharedInstance;
-(id<CSBiometricMatchMonitorDelegate>)delegate;
-(void)setDelegate:(id<CSBiometricMatchMonitorDelegate>)arg1 ;
-(void)startObserving;
-(BOOL)getLastBiometricMatchEvent:(BOOL*)arg1 atTime:(unsigned long long*)arg2 ;
-(unsigned long long)getBiometricMatchResultForTriggerTimeStamp:(unsigned long long)arg1 ;
@end
