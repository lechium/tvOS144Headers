/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:31:38 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSExtension, LSPlugInKitProxy;

@interface UNSNotificationServiceExtension : NSObject {

	NSExtension* _extension;
	double _serviceTime;
	double _graceTime;

}

@property (nonatomic,readonly) LSPlugInKitProxy * proxy; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue; 
+(id)_extensionIdentifiersCurrentlyAllowedAccessToNotificationCenter;
+(id)_extensionIdentifiersToPerExtensionQueues;
+(void)_allowAccessToNotificationCenterForServiceExtensionWithIdentifier:(id)arg1 ;
+(void)_disallowAccessToNotificationCenterForServiceExtensionWithIdentifier:(id)arg1 ;
+(BOOL)isAccessToNotificationCenterAllowedForServiceExtensionWithIdentifier:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(LSPlugInKitProxy *)proxy;
-(id)_initWithExtension:(id)arg1 serviceTime:(double)arg2 graceTime:(double)arg3 ;
-(id)mutateContentForNotificationRequest:(id)arg1 error:(id*)arg2 ;
@end

