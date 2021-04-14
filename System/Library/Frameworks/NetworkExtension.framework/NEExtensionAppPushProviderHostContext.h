/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:23:14 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NetworkExtension/NEExtensionProviderHostContext.h>
#import <libobjc.A.dylib/NEExtensionAppPushProviderProtocol.h>
#import <libobjc.A.dylib/NEExtensionAppPushProviderHostProtocol.h>

@class NSString;

@interface NEExtensionAppPushProviderHostContext : NEExtensionProviderHostContext <NEExtensionAppPushProviderProtocol, NEExtensionAppPushProviderHostProtocol>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_extensionAuxiliaryHostProtocol;
+(id)_extensionAuxiliaryVendorProtocol;
-(void)setProviderConfiguration:(id)arg1 ;
-(void)reportIncomingCall:(id)arg1 ;
-(void)sendTimerEvent;
-(void)startConnectionWithProviderConfig:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)stopWithReason:(int)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)sendOutgoingCallMessage:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)validateWithCompletionHandler:(/*^block*/id)arg1 ;
-(int)requiredEntitlement;
@end

