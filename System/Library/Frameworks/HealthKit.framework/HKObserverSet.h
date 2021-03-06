/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:10 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_os_log, OS_dispatch_queue;
#import <HealthKit/HealthKit-Structs.h>
@class NSMapTable, NSString, NSObject, NSArray;

@interface HKObserverSet : NSObject {

	NSMapTable* _observerMap;
	NSString* _name;
	NSObject*<OS_os_log> _category;
	NSObject*<OS_dispatch_queue> _defaultObserverQueue;
	os_unfair_lock_s _lock;

}

@property (readonly) unsigned long long count; 
@property (copy,readonly) NSArray * allObservers; 
-(unsigned long long)count;
-(void)registerObserver:(id)arg1 ;
-(void)unregisterObserver:(id)arg1 ;
-(void)registerObserver:(id)arg1 queue:(id)arg2 ;
-(void)_registerObserver:(id)arg1 queue:(id)arg2 ;
-(void)_notifyObserversInGroup:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)_notifyObserver:(id)arg1 handler:(/*^block*/id)arg2 ;
-(id)initWithName:(id)arg1 loggingCategory:(id)arg2 ;
-(void)notifyObservers:(/*^block*/id)arg1 ;
-(void)notifyObserversInGroup:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)notifyObserver:(id)arg1 handler:(/*^block*/id)arg2 ;
-(NSArray *)allObservers;
@end

