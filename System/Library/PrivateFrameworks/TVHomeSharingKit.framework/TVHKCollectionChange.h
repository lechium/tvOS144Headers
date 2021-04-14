/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:36:25 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/TVHomeSharingKit.framework/TVHomeSharingKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSIndexSet, TVHKCollectionChangeSet;

@interface TVHKCollectionChange : NSObject {

	unsigned long long _changeKind;
	NSIndexSet* _sourceIndexes;
	NSIndexSet* _destinationIndexes;
	TVHKCollectionChangeSet* _amendChangeSet;

}

@property (nonatomic,readonly) unsigned long long changeKind;                       //@synthesize changeKind=_changeKind - In the implementation block
@property (nonatomic,copy,readonly) NSIndexSet * sourceIndexes;                     //@synthesize sourceIndexes=_sourceIndexes - In the implementation block
@property (nonatomic,copy,readonly) NSIndexSet * destinationIndexes;                //@synthesize destinationIndexes=_destinationIndexes - In the implementation block
@property (nonatomic,retain) TVHKCollectionChangeSet * amendChangeSet;              //@synthesize amendChangeSet=_amendChangeSet - In the implementation block
-(id)new;
-(id)description;
-(id)init;
-(unsigned long long)changeKind;
-(id)initWithChangeKind:(unsigned long long)arg1 sourceIndexes:(id)arg2 destinationIndexes:(id)arg3 ;
-(NSIndexSet *)sourceIndexes;
-(NSIndexSet *)destinationIndexes;
-(TVHKCollectionChangeSet *)amendChangeSet;
-(void)setAmendChangeSet:(TVHKCollectionChangeSet *)arg1 ;
@end
