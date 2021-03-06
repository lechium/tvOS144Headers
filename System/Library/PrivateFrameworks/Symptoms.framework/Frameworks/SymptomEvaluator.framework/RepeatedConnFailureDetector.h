/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:31:31 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSSet, NSMutableDictionary, NSDate;

@interface RepeatedConnFailureDetector : NSObject {

	NSSet* _whitelistedDaemons;
	NSMutableDictionary* _flowRecords;
	NSMutableDictionary* _reportDampeners;
	NSDate* _lastFlush;

}
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(void)_flush;
-(void)noteSuspectFlow:(id)arg1 withOwner:(id)arg2 ;
-(void)_excessiveConnFailuresDetectedOn:(id)arg1 owner:(id)arg2 ;
@end

