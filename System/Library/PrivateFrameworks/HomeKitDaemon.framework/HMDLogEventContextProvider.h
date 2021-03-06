/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:30:47 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMDLogEventObserver.h>

@class NSString;

@interface HMDLogEventContextProvider : HMFObject <HMDLogEventObserver> {

	unsigned long long _activeXPCConnections;

}

@property (getter=isActive,readonly) BOOL active; 
@property (readonly) unsigned long long activeXPCConnections; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)supportedEventTypes;
+(BOOL)isSupportedEvent:(id)arg1 ;
-(id)init;
-(BOOL)isActive;
-(void)_processLogEvent:(id)arg1 ;
-(unsigned long long)activeXPCConnections;
-(void)_processActiveXPCConnectionLogEvent:(id)arg1 ;
-(void)didReceiveEventFromDispatcher:(id)arg1 withLogContext:(id)arg2 ;
@end

