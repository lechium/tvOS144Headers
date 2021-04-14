/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:33:29 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSObject;

@interface AMSThreadSafeObject : NSObject {

	id _object;
	NSObject*<OS_dispatch_queue> _objectAccessQueue;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> objectAccessQueue;              //@synthesize objectAccessQueue=_objectAccessQueue - In the implementation block
@property (nonatomic,retain) id object;                                                   //@synthesize object=_object - In the implementation block
-(id)init;
-(void)setObject:(id)arg1 ;
-(id)initWithObject:(id)arg1 ;
-(id)object;
-(NSObject*<OS_dispatch_queue>)objectAccessQueue;
-(id)accessAndSetObjectWithBlock:(/*^block*/id)arg1 ;
-(void)setObjectAccessQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end
