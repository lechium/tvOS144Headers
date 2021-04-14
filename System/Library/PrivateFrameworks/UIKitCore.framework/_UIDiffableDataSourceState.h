/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:38:06 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIDiffableDataSourceState.h>
@class NSUUID, NSOrderedSet;


@protocol _UIDiffableDataSourceState <_UIDiffableDataSourceQuerying,NSObject>
@property (nonatomic,readonly) NSUUID * generationID; 
@property (nonatomic,readonly) NSOrderedSet * identifiers; 
@property (nonatomic,readonly) NSOrderedSet * sections; 
@property (nonatomic,readonly) id<_UIDataSourceSnapshotTranslating> dataSourceSnapshot; 
@required
-(NSOrderedSet *)sections;
-(NSOrderedSet *)identifiers;
-(NSUUID *)generationID;
-(id<_UIDataSourceSnapshotTranslating>)dataSourceSnapshot;
-(id)sectionIndexesForItemIndexRange:(NSRange)arg1;

@end

#import <libobjc.A.dylib/NSCopying.h>

@protocol _UIDataSourceSnapshotTranslating;
@class NSUUID, NSOrderedSet, NSString;

@interface _UIDiffableDataSourceState : NSObject <_UIDiffableDataSourceState, NSCopying> {

	NSUUID* _generationID;
	NSOrderedSet* _identifiers;
	NSOrderedSet* _sections;
	id<_UIDataSourceSnapshotTranslating> _dataSourceSnapshot;

}

@property (nonatomic,readonly) NSUUID * generationID; 
@property (nonatomic,readonly) NSOrderedSet * identifiers; 
@property (nonatomic,readonly) NSOrderedSet * sections; 
@property (nonatomic,readonly) id<_UIDataSourceSnapshotTranslating> dataSourceSnapshot; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(id)init;
-(NSOrderedSet *)sections;
-(id)initWithState:(id)arg1 ;
-(NSOrderedSet *)identifiers;
-(long long)numberOfItems;
-(NSUUID *)generationID;
-(id)itemIdentifiers;
-(long long)numberOfSections;
-(id)sectionIdentifiers;
-(id)itemIdentifierForIndexPath:(id)arg1 ;
-(long long)numberOfItemsInSection:(id)arg1 ;
-(id)itemIdentifiersInSectionWithIdentifier:(id)arg1 ;
-(id)indexPathForItemIdentifier:(id)arg1 ;
-(id<_UIDataSourceSnapshotTranslating>)dataSourceSnapshot;
-(id)sectionIdentifierForSectionContainingItemIdentifier:(id)arg1 ;
-(long long)indexOfItemIdentifier:(id)arg1 ;
-(long long)indexOfSectionIdentifier:(id)arg1 ;
-(id)sectionIndexesForItemIndexRange:(NSRange)arg1 ;
-(id)initWithGenerationID:(id)arg1 identifiers:(id)arg2 sections:(id)arg3 dataSourceSnapshot:(id)arg4 ;
@end

