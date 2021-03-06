/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:21:04 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreMotion/CoreMotion-Structs.h>
#import <libobjc.A.dylib/CMFallDetectionServerXPC.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@protocol CMFallDetectionServerDelegate;
@class NSXPCListener, NSMutableArray, NSString;

@interface CMFallDetectionServer : NSObject <CMFallDetectionServerXPC, NSXPCListenerDelegate> {

	NSXPCListener* _listener;
	os_unfair_lock_s _connectionsLock;
	NSMutableArray* _connections;
	id<CMFallDetectionServerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<CMFallDetectionServerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(id<CMFallDetectionServerDelegate>)delegate;
-(void)setDelegate:(id<CMFallDetectionServerDelegate>)arg1 ;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)appDidFinishProcessingEventWithDuration:(double)arg1 ;
-(void)appDidRequestFallDetectionPrompt;
-(void)clientDidStart;
-(void)_removeConnection:(id)arg1 ;
-(void)_addConnection:(id)arg1 ;
-(void)didHideFallDetectionPromptForProcessID:(int)arg1 ;
@end

