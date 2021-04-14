/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:32:33 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVMLKit/TVMLKit-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImage, UIImageView, NSArray, UICollectionView;

@interface _TVAlertTemplateView : UIView {

	UIImage* _bgImage;
	UIImageView* _bgImageView;
	NSArray* _viewsAbove;
	UICollectionView* _collectionView;
	NSArray* _viewsBelow;
	UIEdgeInsets _padding;

}

@property (assign,nonatomic) UIEdgeInsets padding;                           //@synthesize padding=_padding - In the implementation block
@property (nonatomic,retain) NSArray * viewsAbove;                           //@synthesize viewsAbove=_viewsAbove - In the implementation block
@property (nonatomic,retain) UICollectionView * collectionView;              //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,retain) NSArray * viewsBelow;                           //@synthesize viewsBelow=_viewsBelow - In the implementation block
-(UIEdgeInsets)padding;
-(void)setPadding:(UIEdgeInsets)arg1 ;
-(UICollectionView *)collectionView;
-(void)layoutSubviews;
-(void)setCollectionView:(UICollectionView *)arg1 ;
-(void)setBgImage:(id)arg1 ;
-(void)setViewsAbove:(NSArray *)arg1 ;
-(void)setViewsBelow:(NSArray *)arg1 ;
-(NSArray *)viewsAbove;
-(NSArray *)viewsBelow;
@end

