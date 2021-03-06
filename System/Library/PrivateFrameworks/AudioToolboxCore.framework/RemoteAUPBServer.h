/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:33:33 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AudioToolboxCore.framework/AudioToolboxCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol AUPBServing;
#import <AudioToolboxCore/AudioToolboxCore-Structs.h>
@class NSXPCConnection;

@interface RemoteAUPBServer : NSObject {

	NSXPCConnection* xpcConnection;
	id<AUPBServing> proxyInterface;
	OpaqueAUPBServerRef ref;
	vector<NSObject<OS_dispatch_semaphore> *, std::__1::allocator<NSObject<OS_dispatch_semaphore> *> >* replySemas;

}

@property (nonatomic,retain) NSXPCConnection * xpcConnection; 
@property (nonatomic,retain) id<AUPBServing> proxyInterface; 
@property (assign,nonatomic) OpaqueAUPBServerRef ref; 
-(id)description;
-(void)dealloc;
-(NSXPCConnection *)xpcConnection;
-(void)setXpcConnection:(NSXPCConnection *)arg1 ;
-(OpaqueAUPBServerRef)ref;
-(void)setRef:(OpaqueAUPBServerRef)arg1 ;
-(id<AUPBServing>)proxyInterface;
-(void)setProxyInterface:(id<AUPBServing>)arg1 ;
-(void)addSema:(id)arg1 ;
-(void)removeSema:(id)arg1 ;
-(void)signalAllSemaphores;
@end

