/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:37:42 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <UIKitCore/UIKitCore-Structs.h>
@class NSDiffableDataSourceSnapshot, NSOrderedCollectionDifference, NSArray;

@interface NSDiffableDataSourceTransaction : NSObject {

	NSDiffableDataSourceSnapshot* _initialSnapshot;
	NSDiffableDataSourceSnapshot* _finalSnapshot;
	NSOrderedCollectionDifference* _difference;
	NSArray* _sectionTransactions;
	NSArray* _reorderedItemIdentifiers;
	long long _source;

}

@property (nonatomic,readonly) NSArray * reorderedItemIdentifiers;                          //@synthesize reorderedItemIdentifiers=_reorderedItemIdentifiers - In the implementation block
@property (nonatomic,readonly) long long source;                                            //@synthesize source=_source - In the implementation block
@property (nonatomic,readonly) NSDiffableDataSourceSnapshot * initialSnapshot;              //@synthesize initialSnapshot=_initialSnapshot - In the implementation block
@property (nonatomic,readonly) NSDiffableDataSourceSnapshot * finalSnapshot;                //@synthesize finalSnapshot=_finalSnapshot - In the implementation block
@property (nonatomic,readonly) NSOrderedCollectionDifference * difference;                  //@synthesize difference=_difference - In the implementation block
@property (nonatomic,readonly) NSArray * sectionTransactions;                               //@synthesize sectionTransactions=_sectionTransactions - In the implementation block
+(id)_computeReorderingTransactionWithInitialSnapshot:(id)arg1 reorderingUpdate:(id)arg2 sectionSnapshotProvider:(/*^block*/id)arg3 ;
+(id)applyTransactionWithInitialSnapshot:(id)arg1 finalSnapshot:(id)arg2 difference:(id)arg3 sectionTransactions:(id)arg4 ;
+(id)reorderingTransactionWithInitialSnapshot:(id)arg1 finalSnapshot:(id)arg2 difference:(id)arg3 sectionTransactions:(id)arg4 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(long long)source;
-(NSOrderedCollectionDifference *)difference;
-(NSDiffableDataSourceSnapshot *)initialSnapshot;
-(NSDiffableDataSourceSnapshot *)finalSnapshot;
-(NSArray *)sectionTransactions;
-(id)initWithInitialSnapshot:(id)arg1 finalSnapshot:(id)arg2 source:(long long)arg3 difference:(id)arg4 reorderedItemIdentifiers:(id)arg5 sectionTransactions:(id)arg6 ;
-(long long)finalSectionCount;
-(NSRange)finalSectionGlobalItemRangeForSection:(long long)arg1 ;
-(long long)finalSectionIndexForInitialSectionIndex:(long long)arg1 ;
-(id)finalIndexPathForInitialIndexPath:(id)arg1 ;
-(id)initialIndexPathForFinalIndexPath:(id)arg1 ;
-(long long)initialSectionIndexForFinalSectionIndex:(long long)arg1 ;
-(BOOL)isReorderingTransaction;
-(NSArray *)reorderedItemIdentifiers;
-(id)_spiCopy;
-(id)initWithInitialSnapshot:(id)arg1 finalSnapshot:(id)arg2 source:(long long)arg3 difference:(id)arg4 finalSectionSnapshots:(id)arg5 ;
-(long long)finalGlobalIndexForInitialGlobalIndex:(long long)arg1 ;
-(long long)initialGlobalIndexForFinalGlobalIndex:(long long)arg1 ;
-(id)finalIndexPathForSupplementaryElementOfKind:(id)arg1 forInitialIndexPath:(id)arg2 ;
-(id)initialIndexPathForSupplementaryElementOfKind:(id)arg1 forFinalIndexPath:(id)arg2 ;
-(NSRange)initalSectionGlobalItemRangeForSection:(long long)arg1 ;
-(long long)initialSectionCount;
-(id)initWithInitialSnapshot:(id)arg1 finalSnapshot:(id)arg2 source:(long long)arg3 reorderedItemIdentifiers:(id)arg4 difference:(id)arg5 sectionTransactions:(id)arg6 ;
-(BOOL)isApplyTransaction;
-(id)initialDataSourceSnapshotter;
-(id)finalDataSourceSnapshotter;
-(id)performDiffGeneratingUpdates;
-(BOOL)_containsItemIdentifier:(id)arg1 ;
-(id)transactionWithSectionTransactions:(id)arg1 ;
@end

