/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:37:04 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/_UICollectionViewListCell.h>

@class UIView, UILabel, UIImageView, _UICollectionViewOutlineCellDisclosureConfiguration;

@interface _UICollectionViewOutlineCell : _UICollectionViewListCell {

	BOOL _automaticallyTogglesExpansionState;
	BOOL _selectionFollowsTintColor;
	UIView* _outlineContentView;
	UILabel* _textLabel;
	UIImageView* _imageView;
	_UICollectionViewOutlineCellDisclosureConfiguration* _disclosureConfiguration;
	double _highlightCornerRadius;

}

@property (nonatomic,retain) id identifier; 
@property (nonatomic,retain) UIView * outlineContentView;                                                              //@synthesize outlineContentView=_outlineContentView - In the implementation block
@property (nonatomic,readonly) UILabel * textLabel;                                                                    //@synthesize textLabel=_textLabel - In the implementation block
@property (nonatomic,readonly) UIImageView * imageView;                                                                //@synthesize imageView=_imageView - In the implementation block
@property (assign,nonatomic) BOOL automaticallyTogglesExpansionState;                                                  //@synthesize automaticallyTogglesExpansionState=_automaticallyTogglesExpansionState - In the implementation block
@property (nonatomic,copy) _UICollectionViewOutlineCellDisclosureConfiguration * disclosureConfiguration;              //@synthesize disclosureConfiguration=_disclosureConfiguration - In the implementation block
@property (nonatomic,copy) id disclosureWasTappedHandler; 
@property (assign,nonatomic) double highlightCornerRadius;                                                             //@synthesize highlightCornerRadius=_highlightCornerRadius - In the implementation block
@property (assign,nonatomic) BOOL selectionFollowsTintColor;                                                           //@synthesize selectionFollowsTintColor=_selectionFollowsTintColor - In the implementation block
-(id)identifier;
-(void)setIdentifier:(id)arg1 ;
-(UILabel *)textLabel;
-(UIImageView *)imageView;
-(UIView *)outlineContentView;
-(void)setOutlineContentView:(UIView *)arg1 ;
-(BOOL)automaticallyTogglesExpansionState;
-(void)setAutomaticallyTogglesExpansionState:(BOOL)arg1 ;
-(_UICollectionViewOutlineCellDisclosureConfiguration *)disclosureConfiguration;
-(void)setDisclosureConfiguration:(_UICollectionViewOutlineCellDisclosureConfiguration *)arg1 ;
-(double)highlightCornerRadius;
-(void)setHighlightCornerRadius:(double)arg1 ;
-(BOOL)selectionFollowsTintColor;
-(void)setSelectionFollowsTintColor:(BOOL)arg1 ;
@end

