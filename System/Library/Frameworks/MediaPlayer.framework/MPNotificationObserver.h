/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:25:39 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface MPNotificationObserver : NSObject {

	NSString* _name;
	id _object;
	/*^block*/id _handler;

}

@property (nonatomic,copy,readonly) NSString * name;              //@synthesize name=_name - In the implementation block
@property (nonatomic,__weak,readonly) id object;                  //@synthesize object=_object - In the implementation block
@property (nonatomic,copy,readonly) id handler;                   //@synthesize handler=_handler - In the implementation block
-(NSString *)name;
-(void)dealloc;
-(id)object;
-(id)handler;
-(void)_handleNotification:(id)arg1 ;
-(id)initWithName:(id)arg1 object:(id)arg2 handler:(/*^block*/id)arg3 ;
@end

