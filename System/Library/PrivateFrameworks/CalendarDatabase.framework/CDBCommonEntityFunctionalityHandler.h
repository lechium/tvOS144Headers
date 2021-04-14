/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:23:50 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CalendarDatabase.framework/CalendarDatabase
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
#import <CalendarDatabase/CalendarDatabase-Structs.h>
@class NSObject, NSMutableSet;

@interface CDBCommonEntityFunctionalityHandler : NSObject {

	NSObject*<OS_dispatch_queue> _lock;
	NSMutableSet* _destructionObservers;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> lock;                //@synthesize lock=_lock - In the implementation block
@property (nonatomic,retain) NSMutableSet * destructionObservers;              //@synthesize destructionObservers=_destructionObservers - In the implementation block
+(void)_notifyDestructionObservers:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(NSObject*<OS_dispatch_queue>)lock;
-(void)setLock:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)removeDestructionObserver:(CalRelationRef)arg1 ;
-(void)addDestructionObserver:(CalRelationRef)arg1 ;
-(void)notifyOfEntityDestruction;
-(void)setDestructionObservers:(NSMutableSet *)arg1 ;
-(NSMutableSet *)destructionObservers;
@end

