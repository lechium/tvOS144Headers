/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:35:37 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/ScoreBoard.framework/ScoreBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ScoreBoard/ScoreBoard-Structs.h>
#import <libobjc.A.dylib/SCRGovernor.h>

@class NSDate, NSString;

@interface SCRTokenBucketBudget : NSObject <SCRGovernor> {

	os_unfair_lock_s _lock;
	double _capacity;
	double _singleTokenInterval;
	double _tokenCount;
	NSDate* _lastCountUpdate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)taskAdministrator:(id)arg1 isEligibleToPerformTask:(id)arg2 eligiblityError:(id*)arg3 ;
-(void)taskAdministrator:(id)arg1 willPerformTask:(id)arg2 ;
-(void)_locked_updateTokenCountForTimeElapsed;
-(id)initWithBucketCapacity:(double)arg1 refreshInterval:(double)arg2 ;
-(void)_simulateTimePassing:(double)arg1 ;
@end

