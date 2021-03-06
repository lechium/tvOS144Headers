/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:27:19 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class PPXPCClientHelper;

@interface PPTopicReadWriteClient : NSObject {

	PPXPCClientHelper* _clientHelper;

}
+(id)sharedInstance;
-(id)init;
-(id)_synchronousRemoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(BOOL)_doSyncCallWithError:(id*)arg1 syncCall:(/*^block*/id)arg2 ;
-(BOOL)_doDeletionSyncCallWithError:(id*)arg1 deletedCount:(unsigned long long*)arg2 syncCall:(/*^block*/id)arg3 ;
-(BOOL)donateTopics:(id)arg1 source:(id)arg2 algorithm:(unsigned long long)arg3 cloudSync:(BOOL)arg4 sentimentScore:(double)arg5 exactMatchesInSourceText:(id)arg6 error:(id*)arg7 ;
-(BOOL)deleteAllTopicsFromSourcesWithBundleId:(id)arg1 documentIds:(id)arg2 deletedCount:(unsigned long long*)arg3 error:(id*)arg4 ;
-(BOOL)deleteAllTopicsFromSourcesWithBundleId:(id)arg1 groupIds:(id)arg2 deletedCount:(unsigned long long*)arg3 error:(id*)arg4 ;
-(BOOL)deleteAllTopicsFromSourcesWithBundleId:(id)arg1 deletedCount:(unsigned long long*)arg2 error:(id*)arg3 ;
-(BOOL)deleteAllTopicsWithTopicId:(id)arg1 deletedCount:(unsigned long long*)arg2 error:(id*)arg3 ;
-(BOOL)deleteAllTopicsFromSourcesWithBundleId:(id)arg1 groupId:(id)arg2 olderThanDate:(id)arg3 deletedCount:(unsigned long long*)arg4 error:(id*)arg5 ;
-(BOOL)cloudSyncWithError:(id*)arg1 ;
-(BOOL)clearWithError:(id*)arg1 deletedCount:(unsigned long long*)arg2 ;
@end

