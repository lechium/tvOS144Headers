/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:23 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/PKSessionDelegate.h>

@protocol OS_dispatch_group, OS_dispatch_queue;
@class NSObject, PKDASession, NSMutableArray, NSString;

@interface PKDASessionManager : NSObject <PKSessionDelegate> {

	NSObject*<OS_dispatch_group> _dispatchGroup;
	/*^block*/id _sessionCreationBlock;
	PKDASession* _session;
	NSMutableArray* _workItems;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)session:(id)arg1 didChangeState:(unsigned long long)arg2 ;
-(void)createSession;
-(id)initWithQueue:(id)arg1 sessionCreationBlock:(/*^block*/id)arg2 ;
-(void)performBlockWithSession:(/*^block*/id)arg1 ;
@end

