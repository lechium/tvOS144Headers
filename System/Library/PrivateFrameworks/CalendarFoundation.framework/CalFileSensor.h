/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:23:48 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject, NSString;

@interface CalFileSensor : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_source> _source;
	/*^block*/id _eventBlock;
	BOOL _started;
	NSString* _path;

}

@property (nonatomic,retain,readonly) NSString * path;              //@synthesize path=_path - In the implementation block
@property (nonatomic,readonly) BOOL started;                        //@synthesize started=_started - In the implementation block
@property (nonatomic,copy,readonly) id eventBlock;                  //@synthesize eventBlock=_eventBlock - In the implementation block
-(id)description;
-(id)init;
-(void)dealloc;
-(NSString *)path;
-(void)start;
-(void)stop;
-(BOOL)started;
-(id)eventBlock;
-(id)initWithPath:(id)arg1 eventBlock:(/*^block*/id)arg2 ;
@end

