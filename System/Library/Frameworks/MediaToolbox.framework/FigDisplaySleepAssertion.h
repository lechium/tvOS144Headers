/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:20:52 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/MediaToolbox.framework/MediaToolbox
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_source, BSInvalidatable;
@class NSObject, NSString;

@interface FigDisplaySleepAssertion : NSObject {

	NSObject*<OS_dispatch_source> _timer;
	NSString* _reason;
	id<BSInvalidatable> _idleTimerAssertion;
	long long _lastIdleTimerResetTime;

}
-(void)dealloc;
-(id)initWithReason:(id)arg1 queue:(id)arg2 expirationHandler:(/*^block*/id)arg3 ;
-(unsigned char)resetIdleTimer;
@end
