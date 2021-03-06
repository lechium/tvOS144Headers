/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:37:04 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/NSCollectionLayoutItem.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSCollectionLayoutAnchor;

@interface NSCollectionLayoutSupplementaryItem : NSCollectionLayoutItem <NSCopying> {

	long long _zIndex;
	NSString* _elementKind;
	NSCollectionLayoutAnchor* _containerAnchor;
	NSCollectionLayoutAnchor* _itemAnchor;

}

@property (nonatomic,retain) NSString * elementKind;                                  //@synthesize elementKind=_elementKind - In the implementation block
@property (nonatomic,retain) NSCollectionLayoutAnchor * containerAnchor;              //@synthesize containerAnchor=_containerAnchor - In the implementation block
@property (nonatomic,retain) NSCollectionLayoutAnchor * itemAnchor;                   //@synthesize itemAnchor=_itemAnchor - In the implementation block
@property (assign,nonatomic) long long zIndex;                                        //@synthesize zIndex=_zIndex - In the implementation block
+(id)supplementaryItemWithLayoutSize:(id)arg1 elementKind:(id)arg2 containerAnchor:(id)arg3 itemAnchor:(id)arg4 ;
+(id)supplementaryItemWithLayoutSize:(id)arg1 elementKind:(id)arg2 containerAnchor:(id)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)item;
-(long long)zIndex;
-(void)setZIndex:(long long)arg1 ;
-(NSString *)elementKind;
-(NSCollectionLayoutAnchor *)containerAnchor;
-(id)initWithSize:(id)arg1 contentInsets:(NSDirectionalEdgeInsets)arg2 elementKind:(id)arg3 containerAnchor:(id)arg4 itemAnchor:(id)arg5 zIndex:(long long)arg6 ;
-(NSCollectionLayoutAnchor *)itemAnchor;
-(id)supplementaryItem;
-(id)boundarySupplementaryItem;
-(id)decorationItem;
-(void)setElementKind:(NSString *)arg1 ;
-(void)setContainerAnchor:(NSCollectionLayoutAnchor *)arg1 ;
-(void)setItemAnchor:(NSCollectionLayoutAnchor *)arg1 ;
@end

