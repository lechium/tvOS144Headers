/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:29:17 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UICollectionViewLayout.h>

@class NSMutableDictionary;

@interface PKSpendingSummaryLayout : UICollectionViewLayout {

	NSMutableDictionary* _attributesPerIndexPath;
	NSMutableDictionary* _headersPerIndexPath;
	NSMutableDictionary* _footersPerIndexPath;
	CGSize _currentSize;
	BOOL _isLowEndDevice;
	BOOL _visible;
	double _transitionAlpha;
	double _lastDrawnAlpha;

}

@property (assign,nonatomic) BOOL isLowEndDevice;                        //@synthesize isLowEndDevice=_isLowEndDevice - In the implementation block
@property (assign,getter=isVisible,nonatomic) BOOL visible;              //@synthesize visible=_visible - In the implementation block
@property (assign,nonatomic) double transitionAlpha;                     //@synthesize transitionAlpha=_transitionAlpha - In the implementation block
@property (assign,nonatomic) double lastDrawnAlpha;                      //@synthesize lastDrawnAlpha=_lastDrawnAlpha - In the implementation block
-(id)init;
-(void)setVisible:(BOOL)arg1 ;
-(BOOL)isVisible;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(CGSize)collectionViewContentSize;
-(void)prepareLayout;
-(id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(void)_adjustItems:(id)arg1 withLateralMove:(double)arg2 ;
-(double)alphaForIndexPath:(id)arg1 visible:(BOOL)arg2 transition:(double)arg3 ;
-(void)setTransitionAlpha:(double)arg1 ;
-(BOOL)isLowEndDevice;
-(void)setIsLowEndDevice:(BOOL)arg1 ;
-(double)transitionAlpha;
-(double)lastDrawnAlpha;
-(void)setLastDrawnAlpha:(double)arg1 ;
@end

