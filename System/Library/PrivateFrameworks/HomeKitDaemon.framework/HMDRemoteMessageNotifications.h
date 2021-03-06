/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:30:59 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>

@protocol HMFLocking;
@class NSMapTable;

@interface HMDRemoteMessageNotifications : HMFObject {

	id<HMFLocking> _lock;
	NSMapTable* _sessionNotificationPayloads;

}

@property (nonatomic,retain) NSMapTable * sessionNotificationPayloads;              //@synthesize sessionNotificationPayloads=_sessionNotificationPayloads - In the implementation block
+(void)initialize;
+(id)messagesWithNotificationResponses;
+(BOOL)messageExpectsNotificationResponse:(id)arg1 ;
-(id)description;
-(id)init;
-(NSMapTable *)sessionNotificationPayloads;
-(id)_notificationPayloadsForDevice:(id)arg1 ;
-(void)addNotificationPayload:(id)arg1 identifier:(id)arg2 device:(id)arg3 ;
-(void)removeNotificationPayloadWithIdentifier:(id)arg1 device:(id)arg2 ;
-(id)notificationPayloadWithIdentifier:(id)arg1 device:(id)arg2 ;
-(void)clearNotificationsForDevice:(id)arg1 ;
-(void)setSessionNotificationPayloads:(NSMapTable *)arg1 ;
@end

