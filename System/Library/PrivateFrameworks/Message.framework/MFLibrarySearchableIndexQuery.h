/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:00 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/MFCancelable.h>
#import <libobjc.A.dylib/NSProgressReporting.h>

@class NSProgress, NSLock, MFPromise, NSMutableArray, NSString;

@interface MFLibrarySearchableIndexQuery : NSObject <MFCancelable, NSProgressReporting> {

	NSLock* _lock;
	NSProgress* _progress;
	NSProgress* _internalProgress;
	MFPromise* _resultsPromise;
	NSMutableArray* _resultsBlocks;
	NSString* _queryString;
	NSString* _logPrefixString;
	NSString* _queryStatusString;

}

@property (nonatomic,retain) NSString * logPrefixString;                 //@synthesize logPrefixString=_logPrefixString - In the implementation block
@property (nonatomic,retain) NSString * queryStatusString;               //@synthesize queryStatusString=_queryStatusString - In the implementation block
@property (nonatomic,copy,readonly) NSString * queryString;              //@synthesize queryString=_queryString - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) NSProgress * progress; 
+(id)_operandStringForOperand:(long long)arg1 ;
+(id)_modifierStringFromModifiers:(unsigned long long)arg1 ;
+(id)queryStringByJoiningQueries:(id)arg1 withOperand:(long long)arg2 ;
+(id)_queryStringForPhrase:(id)arg1 attributes:(id)arg2 modifiers:(unsigned long long)arg3 ;
+(id)searchWordsForPhrase:(id)arg1 ;
+(id)queryWithString:(id)arg1 context:(id)arg2 ;
+(id)queryStringForPhrase:(id)arg1 attributes:(id)arg2 modifiers:(unsigned long long)arg3 ;
-(id)init;
-(void)dealloc;
-(void)cancel;
-(void)start;
-(void)_completed;
-(NSProgress *)progress;
-(void)_cancel;
-(NSString *)queryString;
-(void)addFailureBlock:(/*^block*/id)arg1 ;
-(void)addCompletionBlock:(/*^block*/id)arg1 ;
-(id)truncatedDescription;
-(id)initWithQueryString:(id)arg1 context:(id)arg2 ;
-(NSString *)logPrefixString;
-(void)setQueryStatusString:(NSString *)arg1 ;
-(BOOL)_isCancellationError:(id)arg1 ;
-(void)_failedWithError:(id)arg1 ;
-(void)_removeAllResultsBlocks;
-(void)_foundItems:(id)arg1 ;
-(void)addResultsBlock:(/*^block*/id)arg1 ;
-(void)setLogPrefixString:(NSString *)arg1 ;
-(NSString *)queryStatusString;
@end

