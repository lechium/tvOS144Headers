/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:34:18 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/ExposureNotificationDaemon.framework/ExposureNotificationDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_xpc_object, OS_dispatch_queue;
@class NSMutableSet, NSObject;

@interface ENXPCServiceListener : NSObject {

	NSMutableSet* _connections;
	NSObject*<OS_xpc_object> _xpcListener;
	NSObject*<OS_dispatch_queue> _dispatchQueue;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_xpc_object> xpcEndpoint; 
+(id)sharedServiceListener;
-(void)invalidate;
-(id)_init;
-(void)main;
-(void)activate;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(NSObject*<OS_xpc_object>)xpcEndpoint;
-(void)connectionInvalidated:(id)arg1 ;
-(void)xpcListenerEvent:(id)arg1 ;
-(void)xpcConnectionAccept:(id)arg1 ;
-(id)initAnonymousListener;
@end

