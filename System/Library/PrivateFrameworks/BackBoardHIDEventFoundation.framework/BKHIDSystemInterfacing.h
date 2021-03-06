/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:33:36 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/BackBoardHIDEventFoundation.framework/BackBoardHIDEventFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class BKHIDEventDeliveryManager, BKHIDEventSenderCache, BKHIDClientConnectionManager;


@protocol BKHIDSystemInterfacing <BKIOHIDServiceMatcherDataProviding>
@property (readonly) BKHIDEventDeliveryManager * deliveryManager; 
@property (readonly) BKHIDEventSenderCache * senderCache; 
@property (readonly) BKHIDClientConnectionManager * clientConnectionManager; 
@required
-(id)systemPropertyForKey:(id)arg1;
-(void)setSystemProperty:(id)arg1 forKey:(id)arg2;
-(void)injectHIDEvent:(IOHIDEventRef)arg1;
-(void)injectGSEvent:(GSEventRef)arg1;
-(IOHIDEventRef)systemEventOfType:(unsigned)arg1 matchingEvent:(IOHIDEventRef)arg2 options:(unsigned)arg3;
-(BKHIDEventDeliveryManager *)deliveryManager;
-(BKHIDEventSenderCache *)senderCache;
-(BKHIDClientConnectionManager *)clientConnectionManager;

@end

