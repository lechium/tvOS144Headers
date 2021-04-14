/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:33:00 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AccessibilityUIService.framework/AccessibilityUIService
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSHashTable;

@interface AXUIEventManager : NSObject {

	NSHashTable* _eventHandlers;

}

@property (nonatomic,retain) NSHashTable * eventHandlers;              //@synthesize eventHandlers=_eventHandlers - In the implementation block
+(id)sharedEventManager;
-(id)_init;
-(NSHashTable *)eventHandlers;
-(void)setEventHandlers:(NSHashTable *)arg1 ;
-(BOOL)_handleUIEvent:(id)arg1 ;
-(void)registerEventHandler:(id)arg1 ;
-(void)unregisterEventHandler:(id)arg1 ;
@end

