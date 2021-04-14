/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:34:55 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_semaphore;
@class NSObject, NSArray;

@interface PPQuickTypeCachedNameLookup : NSObject {

	NSObject*<OS_dispatch_semaphore> _sem;
	NSArray* _candidates;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_semaphore> sem;              //@synthesize sem=_sem - In the implementation block
@property (nonatomic,retain) NSArray * candidates;                              //@synthesize candidates=_candidates - In the implementation block
-(NSObject*<OS_dispatch_semaphore>)sem;
-(void)setSem:(NSObject*<OS_dispatch_semaphore>)arg1 ;
-(NSArray *)candidates;
-(void)setCandidates:(NSArray *)arg1 ;
@end

