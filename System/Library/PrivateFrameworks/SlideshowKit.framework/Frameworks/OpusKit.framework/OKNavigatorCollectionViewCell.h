/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:29:55 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <OpusKit/OpusKit-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class OKPageViewController;

@interface OKNavigatorCollectionViewCell : UICollectionViewCell {

	OKPageViewController* _pageViewController;

}

@property (nonatomic,retain) OKPageViewController * pageViewController;              //@synthesize pageViewController=_pageViewController - In the implementation block
-(void)dealloc;
-(void)prepareForReuse;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(OKPageViewController *)pageViewController;
-(void)setPageViewController:(OKPageViewController *)arg1 ;
@end

