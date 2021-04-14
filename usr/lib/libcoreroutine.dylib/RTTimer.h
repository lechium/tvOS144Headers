/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:31:53 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /usr/lib/libcoreroutine.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_source;
@class NSObject, NSString;

@interface RTTimer : NSObject {

	NSObject*<OS_dispatch_source> _timer;
	NSString* _identifier;

}

@property (readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(NSString *)identifier;
-(void)cancel;
-(void)resume;
-(void)suspend;
-(void)fireAfterDelay:(double)arg1 ;
-(void)fireAfterDelay:(double)arg1 interval:(double)arg2 ;
-(void)fireWithInterval:(double)arg1 leeway:(double)arg2 ;
-(void)fireAfterDelay:(double)arg1 interval:(double)arg2 leeway:(double)arg3 ;
-(id)initWithIdentifier:(id)arg1 queue:(id)arg2 handler:(/*^block*/id)arg3 ;
-(id)initWithIdentifier:(id)arg1 dispatchSource:(id)arg2 ;
-(void)fireWithInterval:(double)arg1 ;
@end

