/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:27:07 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSPointerArray;

@interface IMStateCaptureRecentsBuffer : NSObject {

	NSString* _title;
	unsigned long long _maximumNumberOfTrackedObjects;
	unsigned long long _nextInsertionIndex;
	NSPointerArray* _trackedObjects;
	unsigned long long* _handles;

}

@property (assign,nonatomic) unsigned long long nextInsertionIndex;                           //@synthesize nextInsertionIndex=_nextInsertionIndex - In the implementation block
@property (nonatomic,retain) NSPointerArray * trackedObjects;                                 //@synthesize trackedObjects=_trackedObjects - In the implementation block
@property (assign,nonatomic) unsigned long long* handles;                                     //@synthesize handles=_handles - In the implementation block
@property (nonatomic,copy,readonly) NSString * title;                                         //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) unsigned long long maximumNumberOfTrackedObjects;              //@synthesize maximumNumberOfTrackedObjects=_maximumNumberOfTrackedObjects - In the implementation block
-(void)dealloc;
-(NSString *)title;
-(unsigned long long*)handles;
-(void)setHandles:(unsigned long long*)arg1 ;
-(NSPointerArray *)trackedObjects;
-(void)registerStateCaptureBlockWithQueue:(id)arg1 ;
-(id)initWithTitle:(id)arg1 maximumNumberOfTrackedObjects:(unsigned long long)arg2 queue:(id)arg3 ;
-(void)promoteRecentObject:(id)arg1 ;
-(unsigned long long)maximumNumberOfTrackedObjects;
-(unsigned long long)nextInsertionIndex;
-(void)setNextInsertionIndex:(unsigned long long)arg1 ;
-(void)setTrackedObjects:(NSPointerArray *)arg1 ;
@end

