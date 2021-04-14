/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:29:21 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UICollectionViewLayout.h>

@class NSMutableDictionary;

@interface PKDiscoveryLayout : UICollectionViewLayout {

	NSMutableDictionary* _attributesPerIndexPath;
	NSMutableDictionary* _headersPerIndexPath;
	CGSize _currentSize;
	double _interimSpacing;
	double _lineSpacing;

}

@property (assign,nonatomic) double interimSpacing;              //@synthesize interimSpacing=_interimSpacing - In the implementation block
@property (assign,nonatomic) double lineSpacing;                 //@synthesize lineSpacing=_lineSpacing - In the implementation block
-(id)init;
-(double)lineSpacing;
-(void)setLineSpacing:(double)arg1 ;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(CGSize)collectionViewContentSize;
-(void)prepareLayout;
-(void)_adjustItems:(id)arg1 withLateralMove:(double)arg2 ;
-(double)interimSpacing;
-(void)setInterimSpacing:(double)arg1 ;
@end
