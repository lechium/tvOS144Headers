/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:23:01 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class IDSServiceMonitor, NSMutableSet;

@interface IDSServiceContainer : NSObject {

	IDSServiceMonitor* _monitor;
	NSMutableSet* _listeners;

}

@property (nonatomic,retain) IDSServiceMonitor * monitor;              //@synthesize monitor=_monitor - In the implementation block
@property (nonatomic,readonly) NSMutableSet * listeners;               //@synthesize listeners=_listeners - In the implementation block
-(IDSServiceMonitor *)monitor;
-(id)initWithService:(id)arg1 ;
-(NSMutableSet *)listeners;
-(BOOL)removeListenerID:(id)arg1 ;
-(BOOL)hasListenerID:(id)arg1 ;
-(BOOL)addListenerID:(id)arg1 ;
-(void)setMonitor:(IDSServiceMonitor *)arg1 ;
@end
