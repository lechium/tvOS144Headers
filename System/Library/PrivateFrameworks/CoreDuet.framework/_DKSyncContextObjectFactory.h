/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:22:35 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableDictionary, _DKSyncContext;

@interface _DKSyncContextObjectFactory : NSObject {

	NSMutableDictionary* _instances;
	_DKSyncContext* _context;
	Class _class;

}

@property (nonatomic,readonly) _DKSyncContext * context;              //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) Class class;                           //@synthesize class=_class - In the implementation block
+(id)objectFactoryForClass:(Class)arg1 context:(id)arg2 ;
-(Class)class;
-(_DKSyncContext *)context;
-(id)instance;
-(id)initWithContext:(id)arg1 fabricateClass:(Class)arg2 ;
@end

