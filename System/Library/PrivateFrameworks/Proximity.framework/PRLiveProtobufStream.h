/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:35:22 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/Proximity.framework/Proximity
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/PRProtobufClientProtocol.h>

@protocol PRLiveProtobufStreamDelegate, OS_dispatch_queue;
@class NSXPCConnection, NSUUID, NSObject, NSString;

@interface PRLiveProtobufStream : NSObject <PRProtobufClientProtocol> {

	NSXPCConnection* _conn;
	NSUUID* _uniqueId;
	id<PRLiveProtobufStreamDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _delegateQueue;

}

@property (assign,nonatomic,__weak) id<PRLiveProtobufStreamDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> delegateQueue;                    //@synthesize delegateQueue=_delegateQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)invalidate;
-(id<PRLiveProtobufStreamDelegate>)delegate;
-(void)setDelegate:(id<PRLiveProtobufStreamDelegate>)arg1 ;
-(void)start;
-(void)stop;
-(void)setDelegateQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
-(id)server;
-(void)consumeProtobufBytes:(id)arg1 ;
-(void)getUniqueClientIdentifier:(/*^block*/id)arg1 ;
@end

