/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:38:15 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol _UICollectionViewLayoutInteractionStateProviding <NSObject>
@property (nonatomic,readonly) Class invalidationContextClass; 
@required
-(Class)invalidationContextClass;
-(BOOL)_shouldAdjustLayoutToMergeBarInSection:(long long)arg1;
-(BOOL)enumerateSectionsAfterSectionIndex:(long long)arg1 enumerator:(/*^block*/id)arg2;
-(unsigned long long)selectionGroupingForItemAtIndexPath:(id)arg1;
-(BOOL)itemAtIndexPathIsSelected:(id)arg1;
-(BOOL)itemAtIndexPathIsHighlighted:(id)arg1;

@end

