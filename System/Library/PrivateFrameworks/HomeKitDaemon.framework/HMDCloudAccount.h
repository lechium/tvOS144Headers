/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:31:05 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>

@protocol OS_dispatch_queue;
@class NSObject, NSOperationQueue;

@interface HMDCloudAccount : HMFObject {

	NSObject*<OS_dispatch_queue> _clientQueue;
	NSOperationQueue* _queue;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> clientQueue;              //@synthesize clientQueue=_clientQueue - In the implementation block
@property (nonatomic,readonly) NSOperationQueue * queue;                              //@synthesize queue=_queue - In the implementation block
-(NSOperationQueue *)queue;
-(NSObject*<OS_dispatch_queue>)clientQueue;
-(id)initWithClientQueue:(id)arg1 ;
-(void)addAccountOperation:(/*^block*/id)arg1 ;
@end

