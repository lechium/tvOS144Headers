/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:22:33 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreDuet/CoreDuet-Structs.h>
#import <CoreDuet/_DKSyncCompositeOperation.h>

@protocol _DKSyncLocalKnowledgeStorage, _DKSyncRemoteKnowledgeStorage;
@class _DKSyncPeer, _DKSync2Policy, _DKSyncType, _CDMutablePerfMetric, _DKSyncHistory, NSDate;

@interface _DKPerformSyncDownPeerDeletionsOperation : _DKSyncCompositeOperation {

	id<_DKSyncLocalKnowledgeStorage> _localStorage;
	id<_DKSyncRemoteKnowledgeStorage> _transport;
	_DKSyncPeer* _peer;
	_DKSync2Policy* _policy;
	_DKSyncType* _type;
	_CDMutablePerfMetric* _perfMetric;
	CDPerfEvent _perfEvent;
	BOOL _highPriority;
	_DKSyncHistory* _history;
	NSDate* _highWaterMark;
	unsigned long long _batchNumber;
	BOOL _foundDeletions;

}
-(void)main;
-(BOOL)isAsynchronous;
-(void)endOperation;
@end

