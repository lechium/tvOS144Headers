/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:33:39 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/BoardServices.framework/BoardServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue, BSServiceDispatchingQueue;
#import <BoardServices/BoardServices-Structs.h>
@class BSXPCServiceConnectionProxy, NSString, NSObject, BSServiceQuality, BSServiceInterface, BSXPCCoder;

@interface BSXPCServiceConnectionEventHandler : NSObject {

	os_unfair_lock_s _lock;
	BOOL _nonLaunchingAware;
	BSXPCServiceConnectionProxy* _lock_remoteTarget;
	id _interfaceTarget;
	/*^block*/id _connectionHandler;
	/*^block*/id _noMoreChildrenHandler;
	/*^block*/id _messageHandler;
	/*^block*/id _errorHandler;
	/*^block*/id _activationHandler;
	/*^block*/id _interruptionHandler;
	/*^block*/id _invalidationHandler;
	id _context;
	NSString* _name;
	NSObject*<OS_dispatch_queue> _targetQueue;
	id<BSServiceDispatchingQueue> _targetDispatchingQueue;
	BSServiceQuality* _serviceQuality;
	BSServiceInterface* _interface;
	BSXPCCoder* _initiatingContext;

}
-(id)init;
@end

