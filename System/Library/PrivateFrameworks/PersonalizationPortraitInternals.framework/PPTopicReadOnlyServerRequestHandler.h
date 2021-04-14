/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:34:53 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/PPTopicReadOnlyServerProtocol.h>

@protocol PPTopicClientProtocol;
@class PPXPCServerPipelinedBatchQueryManager, NSString, _PASBundleIdResolver;

@interface PPTopicReadOnlyServerRequestHandler : NSObject <PPTopicReadOnlyServerProtocol> {

	id<PPTopicClientProtocol> _clientProxy;
	PPXPCServerPipelinedBatchQueryManager* _queryManager;
	NSString* _clientProcessName;
	_PASBundleIdResolver* _bundleIdResolver;

}

@property (nonatomic,copy) NSString * clientProcessName;                           //@synthesize clientProcessName=_clientProcessName - In the implementation block
@property (nonatomic,retain) _PASBundleIdResolver * bundleIdResolver;              //@synthesize bundleIdResolver=_bundleIdResolver - In the implementation block
+(id)filterQIDDictionary:(id)arg1 withAllowlistOfProcess:(id)arg2 allowlist:(id)arg3 ;
+(id)filterTopicRecordsNotInAllowlist:(id)arg1 withAllowlistOfProcess:(id)arg2 allowlist:(id)arg3 ;
+(id)filterScoredTopicsNotInAllowlist:(id)arg1 withAllowlistOfProcess:(id)arg2 allowlist:(id)arg3 ;
-(id)init;
-(void)registerFeedback:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)unmapMappedTopicIdentifier:(id)arg1 mappingIdentifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)scoresForTopicMapping:(id)arg1 query:(id)arg2 queryId:(unsigned long long)arg3 ;
-(void)topicExtractionsFromText:(id)arg1 queryId:(unsigned long long)arg2 ;
-(void)topicRecordsWithQuery:(id)arg1 queryId:(unsigned long long)arg2 ;
-(void)rankedTopicsWithQuery:(id)arg1 queryId:(unsigned long long)arg2 ;
-(void)unblockPendingQueries;
-(void)setRemoteObjectProxy:(id)arg1 ;
-(void)setBundleIdResolver:(_PASBundleIdResolver *)arg1 ;
-(void)setClientProcessName:(NSString *)arg1 ;
-(NSString *)clientProcessName;
-(_PASBundleIdResolver *)bundleIdResolver;
@end

