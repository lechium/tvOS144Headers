/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:31:06 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKitDaemon/HMDMediaPlaybackActionEvent.h>
#import <libobjc.A.dylib/HMDCoreAnalyticsLogging.h>

@class NSString;

@interface HMDMPCSessionControllerExecutionEvent : HMDMediaPlaybackActionEvent <HMDCoreAnalyticsLogging> {

	BOOL _didPartiallySucceed;

}

@property (assign) BOOL didPartiallySucceed;                    //@synthesize didPartiallySucceed=_didPartiallySucceed - In the implementation block
@property (copy,readonly) NSString * resultString; 
+(id)identifier;
-(id)eventName;
-(NSString *)resultString;
-(id)serializedEvent;
-(BOOL)didPartiallySucceed;
-(void)setDidPartiallySucceed:(BOOL)arg1 ;
@end

