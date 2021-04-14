/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:29:34 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/GameController.framework/GameController
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
#import <GameController/GameController-Structs.h>
@class NSMutableDictionary, GCKeyboard, GCMouse, NSObject;

@interface GCKeyboardAndMouseManager : NSObject {

	NSMutableDictionary* _devicesByRegistryID;
	GCKeyboard* _coalescedKeyboard;
	GCMouse* _currentMouse;
	NSObject*<OS_dispatch_queue> _devicesQueue;

}

@property (assign,nonatomic,__weak) NSObject*<OS_dispatch_queue> devicesQueue;              //@synthesize devicesQueue=_devicesQueue - In the implementation block
@property (readonly) GCKeyboard * coalescedKeyboard; 
@property (retain) GCMouse * currentMouse; 
-(id)initWithQueue:(id)arg1 ;
-(GCMouse *)currentMouse;
-(id)mice;
-(void)setCurrentMouse:(GCMouse *)arg1 ;
-(void)handleKeyboardEventAsFrontmostApp:(id)arg1 ;
-(void)handleMouseEventAsFrontmostApp:(id)arg1 ;
-(GCKeyboard *)coalescedKeyboard;
-(BOOL)addDeviceWithServiceRef:(IOHIDServiceClientRef)arg1 ;
-(void)removeDeviceWithServiceRef:(IOHIDServiceClientRef)arg1 ;
-(BOOL)handleHIDEvent:(IOHIDEventRef)arg1 ;
-(void)addKeyboard:(id)arg1 ;
-(void)addMouse:(id)arg1 ;
-(void)removeDevice:(id)arg1 registryID:(id)arg2 ;
-(void)updateCurrentMouseAfterDisconnecting:(id)arg1 ;
-(void)unpublishDevice:(id)arg1 withNotificationName:(id)arg2 ;
-(NSObject*<OS_dispatch_queue>)devicesQueue;
-(void)storeDevice:(id)arg1 ;
-(void)publishDevice:(id)arg1 withNotificationName:(id)arg2 ;
-(void)updateCurrentDeviceAfterDisconnecting:(id)arg1 ;
-(void)updateCurrentDevice:(id)arg1 ;
-(void)_queue_removeDevice:(id)arg1 registryID:(id)arg2 ;
-(void)setDevicesQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

