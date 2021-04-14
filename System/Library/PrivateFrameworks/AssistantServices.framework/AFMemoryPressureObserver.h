/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:23:41 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/AFInvalidating.h>

@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject, NSHashTable, NSString;

@interface AFMemoryPressureObserver : NSObject <AFInvalidating> {

	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_source> _memoryPressureSource;
	unsigned long long _memoryPressureFlags;
	NSHashTable* _listeners;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedObserver;
-(void)dealloc;
-(void)invalidate;
-(id)initWithOptions:(unsigned long long)arg1 ;
-(void)addListener:(id)arg1 ;
-(void)removeListener:(id)arg1 ;
-(void)removeAllListeners;
-(void)_startObservingMemoryPressureWithOptions:(unsigned long long)arg1 ;
-(void)_stopObservingMemoryPressure;
-(void)_addListener:(id)arg1 ;
-(void)_removeListener:(id)arg1 ;
-(void)_removeAllListeners;
-(void)_handleMemoryPressureWithFlags:(unsigned long long)arg1 ;
-(void)getCurrentConditionWithCompletion:(/*^block*/id)arg1 ;
@end
