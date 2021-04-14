/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:32:31 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVMLKit/TVMLKit-Structs.h>
#import <UIKitCore/UICollectionViewLayout.h>

@protocol _TVStackViewDelegateFlowLayout;
@class NSArray, IKChangeSet, NSIndexSet;

@interface _TVStackViewFlowLayout : UICollectionViewLayout {

	id<_TVStackViewDelegateFlowLayout> _stackViewDelegateFlowLayout;
	struct {
		BOOL hasShowcaseFactorDidChange;
	}  _stackViewDelegateFlowLayoutFlags;
	NSArray* _oldSectionCellLayoutAttributes;
	IKChangeSet* _changeSet;
	NSIndexSet* _indexesAddedAtEnd;
	CGPoint _initialContentOffset;
	BOOL _isFullReplace;
	double _lastLayoutWidth;
	long long _supplementaryCellSection;
	NSArray* _supplementaryCellLayoutAttributes;
	/*^block*/id _onPrepareLayout;
	double _showcaseHeight;
	double _showcaseFactor;
	NSArray* _sectionCellLayoutAttributes;
	CGSize _contentSize;

}

@property (nonatomic,copy) NSArray * sectionCellLayoutAttributes;                    //@synthesize sectionCellLayoutAttributes=_sectionCellLayoutAttributes - In the implementation block
@property (assign,nonatomic) CGSize contentSize;                                     //@synthesize contentSize=_contentSize - In the implementation block
@property (assign,nonatomic) long long supplementaryCellSection;                     //@synthesize supplementaryCellSection=_supplementaryCellSection - In the implementation block
@property (nonatomic,copy) NSArray * supplementaryCellLayoutAttributes;              //@synthesize supplementaryCellLayoutAttributes=_supplementaryCellLayoutAttributes - In the implementation block
@property (nonatomic,copy) id onPrepareLayout;                                       //@synthesize onPrepareLayout=_onPrepareLayout - In the implementation block
@property (assign,nonatomic) double showcaseHeight;                                  //@synthesize showcaseHeight=_showcaseHeight - In the implementation block
@property (nonatomic,readonly) double showcaseFactor;                                //@synthesize showcaseFactor=_showcaseFactor - In the implementation block
+(Class)invalidationContextClass;
+(Class)layoutAttributesClass;
-(id)init;
-(CGSize)contentSize;
-(void)setContentSize:(CGSize)arg1 ;
-(void)prepareForCollectionViewUpdates:(id)arg1 ;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(CGSize)collectionViewContentSize;
-(void)prepareLayout;
-(void)invalidateLayoutWithContext:(id)arg1 ;
-(BOOL)shouldInvalidateLayoutForBoundsChange:(CGRect)arg1 ;
-(id)invalidationContextForBoundsChange:(CGRect)arg1 ;
-(id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg1 ;
-(id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1 ;
-(void)finalizeCollectionViewUpdates;
-(double)showcaseFactor;
-(void)setShowcaseHeight:(double)arg1 ;
-(NSArray *)supplementaryCellLayoutAttributes;
-(double)_computeShowcaseFactorForContentOffset:(CGPoint)arg1 ;
-(NSArray *)sectionCellLayoutAttributes;
-(id)onPrepareLayout;
-(void)_prepareSectionMetrics;
-(void)setSectionCellLayoutAttributes:(NSArray *)arg1 ;
-(void)setSupplementaryCellSection:(long long)arg1 ;
-(void)setSupplementaryCellLayoutAttributes:(NSArray *)arg1 ;
-(long long)supplementaryCellSection;
-(id)_oldLayoutAttributesForItemAtIndexPath:(id)arg1 ;
-(double)showcaseHeight;
-(void)setOnPrepareLayout:(id)arg1 ;
@end

