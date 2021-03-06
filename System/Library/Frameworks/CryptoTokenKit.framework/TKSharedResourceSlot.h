/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:32:04 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/CryptoTokenKit.framework/CryptoTokenKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_source, OS_dispatch_queue;
@class NSString, TKSharedResource, NSObject;

@interface TKSharedResourceSlot : NSObject {

	NSString* _name;
	TKSharedResource* _resource;
	id _object;
	NSObject*<OS_dispatch_source> _idleTimer;
	/*^block*/id _createObjectBlock;
	/*^block*/id _objectDestroyedBlock;
	double _idleTimeout;
	NSObject*<OS_dispatch_queue> _idleQueue;

}

@property (nonatomic,copy) id createObjectBlock;                                  //@synthesize createObjectBlock=_createObjectBlock - In the implementation block
@property (nonatomic,copy) id objectDestroyedBlock;                               //@synthesize objectDestroyedBlock=_objectDestroyedBlock - In the implementation block
@property (assign,nonatomic) double idleTimeout;                                  //@synthesize idleTimeout=_idleTimeout - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> idleQueue;              //@synthesize idleQueue=_idleQueue - In the implementation block
-(id)description;
-(void)dealloc;
-(id)object;
-(id)initWithName:(id)arg1 ;
-(double)idleTimeout;
-(void)setIdleTimeout:(double)arg1 ;
-(id)resourceWithError:(id*)arg1 ;
-(void)setObjectDestroyedBlock:(id)arg1 ;
-(void)setIdleQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)destroyObject;
-(NSObject*<OS_dispatch_queue>)idleQueue;
-(id)createObjectBlock;
-(void)releaseResource;
-(void)setCreateObjectBlock:(id)arg1 ;
-(id)objectDestroyedBlock;
@end

