/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:22:52 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface IDSCKNotification : NSObject {

	long long _notificationType;
	NSString* _subscriptionID;

}

@property (nonatomic,readonly) long long notificationType;                  //@synthesize notificationType=_notificationType - In the implementation block
@property (nonatomic,copy,readonly) NSString * subscriptionID;              //@synthesize subscriptionID=_subscriptionID - In the implementation block
+(id)notificationFromRemoteNotificationDictionary:(id)arg1 ;
+(Class)__class;
-(NSString *)subscriptionID;
-(long long)notificationType;
@end

