/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:36:16 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/SpeakerRecognition.framework/SpeakerRecognition
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/CSEventMonitorDelegate.h>

@protocol OS_dispatch_queue;
@class NSMutableArray, NSObject, NSString;

@interface CSPolicy : NSObject <CSEventMonitorDelegate> {

	NSMutableArray* _monitors;
	NSMutableArray* _conditions;
	/*^block*/id _callback;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(BOOL)isEnabled;
-(void)setCallback:(/*^block*/id)arg1 ;
-(void)addConditions:(/*^block*/id)arg1 ;
-(void)subscribeEventMonitor:(id)arg1 ;
-(BOOL)_checkAllConditionsEnabled;
-(void)notifyCallbackWithOption:(unsigned long long)arg1 ;
-(void)CSEventMonitorDidReceiveEvent:(id)arg1 ;
-(void)notifyCallback:(BOOL)arg1 option:(unsigned long long)arg2 ;
@end

