/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:34:53 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSString, NSObject;

@interface PPKVOObserver : NSObject {

	NSString* _name;
	NSString* _key;
	id _observee;
	/*^block*/id _handler;
	NSObject*<OS_dispatch_queue> _queue;

}
+(id)observerWithName:(id)arg1 object:(id)arg2 key:(id)arg3 handler:(/*^block*/id)arg4 ;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)initWithName:(id)arg1 key:(id)arg2 observee:(id)arg3 handler:(/*^block*/id)arg4 ;
@end

