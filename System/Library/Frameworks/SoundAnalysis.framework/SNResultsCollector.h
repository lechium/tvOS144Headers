/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:32:22 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/SNResultsObserving.h>

@class NSMutableArray, NSArray, NSString;

@interface SNResultsCollector : NSObject <SNResultsObserving> {

	NSMutableArray* _results;
	NSMutableArray* _errors;
	long long _completeCount;

}

@property (nonatomic,readonly) NSArray * results; 
@property (nonatomic,readonly) NSArray * errors; 
@property (nonatomic,readonly) long long completeCount;              //@synthesize completeCount=_completeCount - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(id)init;
-(NSArray *)results;
-(NSArray *)errors;
-(void)clearResults;
-(void)clearErrors;
-(void)request:(id)arg1 didFailWithError:(id)arg2 ;
-(void)request:(id)arg1 didProduceResult:(id)arg2 ;
-(void)requestDidComplete:(id)arg1 ;
-(void)clearCompleteCount;
-(long long)completeCount;
@end

