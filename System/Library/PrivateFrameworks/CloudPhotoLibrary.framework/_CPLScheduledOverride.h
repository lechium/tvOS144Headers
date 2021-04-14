/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:23:54 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_source, OS_dispatch_queue, _CPLScheduledOverrideDelegate;
@class NSObject, NSString, NSDate;

@interface _CPLScheduledOverride : NSObject {

	NSObject*<OS_dispatch_source> _timer;
	NSString* _storageKey;
	unsigned long long _budget;
	NSObject*<OS_dispatch_queue> _queue;
	NSDate* _endDate;
	id<_CPLScheduledOverrideDelegate> _delegate;

}

@property (nonatomic,readonly) unsigned long long budget;                                    //@synthesize budget=_budget - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                           //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) NSDate * endDate;                                             //@synthesize endDate=_endDate - In the implementation block
@property (assign,nonatomic,__weak) id<_CPLScheduledOverrideDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSString * status; 
+(unsigned long long)_systemBudgetForBudgetKey:(id)arg1 ;
-(id<_CPLScheduledOverrideDelegate>)delegate;
-(void)setDelegate:(id<_CPLScheduledOverrideDelegate>)arg1 ;
-(void)cancel;
-(NSObject*<OS_dispatch_queue>)queue;
-(NSString *)status;
-(NSDate *)endDate;
-(unsigned long long)budget;
-(BOOL)scheduleEndOfOverride;
-(id)initWithBudget:(unsigned long long)arg1 queue:(id)arg2 ;
-(void)_scheduleEndWithTimeInterval:(double)arg1 ;
-(BOOL)scheduleEndFromPersistedOverride;
@end

