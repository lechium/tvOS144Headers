/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:37:08 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSIndexPath, NSUUID;

@interface UICollectionViewUpdateItem : NSObject <NSCopying> {

	NSIndexPath* _initialIndexPath;
	NSIndexPath* _finalIndexPath;
	long long _updateAction;
	BOOL _isAppendingSectionInsert;
	NSUUID* _identifier;

}

@property (getter=_action,nonatomic,readonly) long long action; 
@property (getter=_indexPath,nonatomic,readonly) NSIndexPath * indexPath; 
@property (nonatomic,retain) NSUUID * identifier;                                                                   //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) BOOL isAppendingSectionInsert;                                                         //@synthesize isAppendingSectionInsert=_isAppendingSectionInsert - In the implementation block
@property (getter=_isSectionOperation,nonatomic,readonly) BOOL isSectionOperation; 
@property (setter=_setNewIndexPath:,getter=_newIndexPath,nonatomic,retain) NSIndexPath * newIndexPath; 
@property (nonatomic,readonly) NSIndexPath * indexPathBeforeUpdate;                                                 //@synthesize initialIndexPath=_initialIndexPath - In the implementation block
@property (nonatomic,readonly) NSIndexPath * indexPathAfterUpdate;                                                  //@synthesize finalIndexPath=_finalIndexPath - In the implementation block
@property (nonatomic,readonly) long long updateAction;                                                              //@synthesize updateAction=_updateAction - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(NSUUID *)identifier;
-(void)setIdentifier:(NSUUID *)arg1 ;
-(long long)_action;
-(id)_indexPath;
-(long long)updateAction;
-(NSIndexPath *)indexPathAfterUpdate;
-(NSIndexPath *)indexPathBeforeUpdate;
-(BOOL)_isSectionOperation;
-(id)initWithInitialIndexPath:(id)arg1 finalIndexPath:(id)arg2 updateAction:(long long)arg3 ;
-(id)initWithAction:(long long)arg1 forIndexPath:(id)arg2 ;
-(long long)inverseCompareIndexPaths:(id)arg1 ;
-(long long)compareIndexPaths:(id)arg1 ;
-(void)_setNewIndexPath:(id)arg1 ;
-(id)_newIndexPath;
-(void)setIsAppendingSectionInsert:(BOOL)arg1 ;
-(id)revertedUpdate;
-(BOOL)isEqualToUpdate:(id)arg1 ;
-(id)initWithOldIndexPath:(id)arg1 newIndexPath:(id)arg2 ;
-(BOOL)isRevertedUpdateOf:(id)arg1 ;
-(BOOL)isNOOP;
-(BOOL)isAppendingSectionInsert;
@end

