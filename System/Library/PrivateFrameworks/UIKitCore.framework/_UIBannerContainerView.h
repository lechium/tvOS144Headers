/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:37:47 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class NSMutableArray;

@interface _UIBannerContainerView : UIView {

	NSMutableArray* _banners;
	NSMutableArray* _constraints;

}

@property (nonatomic,retain) NSMutableArray * banners;                  //@synthesize banners=_banners - In the implementation block
@property (nonatomic,retain) NSMutableArray * constraints;              //@synthesize constraints=_constraints - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(NSMutableArray *)constraints;
-(void)setConstraints:(NSMutableArray *)arg1 ;
-(void)updateConstraints;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setBanners:(NSMutableArray *)arg1 ;
-(NSMutableArray *)banners;
-(void)statusBarFrameDidChange:(id)arg1 ;
-(void)_setBanner:(id)arg1 visible:(BOOL)arg2 alongsideAnimations:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_presentBanner:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_dismissBanner:(id)arg1 alongsideAnimations:(id)arg2 completion:(/*^block*/id)arg3 ;
@end

