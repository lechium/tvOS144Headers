/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:27:06 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <IMSharedUtilities/IMRuntimeTestRun.h>

@class NSMutableArray, NSArray;

@interface IMRuntimeTestSuiteTestRun : IMRuntimeTestRun {

	NSMutableArray* _testRuns;
	NSArray* _testRun;

}

@property (copy,readonly) NSArray * testRuns;              //@synthesize testRun=_testRun - In the implementation block
-(id)init;
-(void)addTestRun:(id)arg1 ;
-(NSArray *)testRuns;
@end

