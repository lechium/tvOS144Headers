/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:29:31 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/GameController.framework/GameController
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol _GCPhysicalDeviceManager <_GCDeviceManager>
@property (__weak) id<GCPhysicalDeviceRegistry> deviceRegistry; 
@optional
-(BOOL)acceptDriverConnection:(id)arg1 forHIDDevice:(id)arg2;
-(id)driverConnectionForHIDDevice:(id)arg1;

@required
-(void)setDeviceRegistry:(id)arg1;
-(id<GCPhysicalDeviceRegistry>)deviceRegistry;
-(id)matchHIDDevice:(id)arg1;
-(void)claimHIDDevice:(id)arg1;
-(void)relinquishHIDDevice:(id)arg1;

@end
