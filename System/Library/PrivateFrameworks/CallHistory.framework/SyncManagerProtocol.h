/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:28:33 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol SyncManagerProtocol <NSObject>
@required
-(void)resetTimers;
-(void)insert:(id)arg1;
-(id)fetchObjectWithUniqueId:(id)arg1;
-(void)deleteObjectWithUniqueId:(id)arg1;
-(void)deleteObjectsWithUniqueIds:(id)arg1;
-(double)timerIncoming;
-(double)timerOutgoing;
-(double)timerLifetime;
-(id)fetchObjectsWithLimits:(id)arg1;
-(void)insertWithoutTransaction:(id)arg1;
-(void)updateObjects:(id)arg1;
-(void)updateAllObjects:(id)arg1;
-(void)deleteObjectsWithLimits:(id)arg1;
-(void)deleteAllObjects;
-(void)insertRecordsWithoutTransactions:(id)arg1;
-(long long)setRead:(BOOL)arg1 forCallsWithPredicate:(id)arg2 error:(id*)arg3;
-(long long)deleteCallsWithPredicate:(id)arg1 error:(id*)arg2;
-(unsigned long long)fetchCallCountWithPredicate:(id)arg1 sortDescriptors:(id)arg2;
-(id)fetchCallsWithPredicate:(id)arg1 sortDescriptors:(id)arg2 limit:(unsigned long long)arg3 offset:(unsigned long long)arg4 batchSize:(unsigned long long)arg5;
-(id)fetchCallIdentifiersWithPredicate:(id)arg1 sortDescriptors:(id)arg2 limit:(unsigned long long)arg3 offset:(unsigned long long)arg4 batchSize:(unsigned long long)arg5;
-(unsigned long long)fetchCoalescedCallCountWithPredicate:(id)arg1 sortDescriptors:(id)arg2;
-(id)fetchCoalescedCallsWithPredicate:(id)arg1 sortDescriptors:(id)arg2 limit:(unsigned long long)arg3 offset:(unsigned long long)arg4 batchSize:(unsigned long long)arg5;
-(id)fetchAllObjects;

@end

