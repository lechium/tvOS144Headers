/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:34:54 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/PPContactServerProtocol.h>

@protocol PPContactClientProtocol;
@class PPXPCServerPipelinedBatchQueryManager, PPLocalContactStore, NSString;

@interface PPContactServerRequestHandler : NSObject <PPContactServerProtocol> {

	id<PPContactClientProtocol> _clientProxy;
	PPXPCServerPipelinedBatchQueryManager* _queryManager;
	AB _isTerminated;
	PPLocalContactStore* _store;
	NSString* _clientProcessName;

}

@property (nonatomic,copy) NSString * clientProcessName;              //@synthesize clientProcessName=_clientProcessName - In the implementation block
-(id)init;
-(id)initWithStore:(id)arg1 ;
-(void)registerFeedback:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)feedbackDisambiguationResultWithChoicesIdentifiers:(id)arg1 chosenContactIdentifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)contactNameRecordChangesForClient:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)contactNameRecordChangesForClient:(id)arg1 queryId:(unsigned long long)arg2 ;
-(void)contactNameRecordsForClient:(id)arg1 queryId:(unsigned long long)arg2 ;
-(void)contactHandlesForSource:(id)arg1 queryId:(unsigned long long)arg2 ;
-(void)contactHandlesForTopics:(id)arg1 queryId:(unsigned long long)arg2 ;
-(void)rankedContactsWithQuery:(id)arg1 queryId:(unsigned long long)arg2 ;
-(void)unblockPendingQueries;
-(void)setRemoteObjectProxy:(id)arg1 ;
-(void)setClientProcessName:(NSString *)arg1 ;
-(NSString *)clientProcessName;
-(void)setIsTerminated;
@end

