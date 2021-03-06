/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:35:44 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/SeymourUI.framework/SeymourUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SeymourUI/SeymourUI-Structs.h>
#import <TVUIKit/_TVCarouselView.h>
#import <libobjc.A.dylib/SMUTVCarouselView.h>

@class NSArray, UIView;

@interface _SMUTVCarouselView : _TVCarouselView <SMUTVCarouselView>

@property (assign,nonatomic,__weak) id<SMUTVCarouselViewDataSource> dataSource; 
@property (assign,nonatomic,__weak) id<SMUTVCarouselViewDelegate> delegate; 
@property (assign,nonatomic) CGRect frame; 
@property (assign,nonatomic) CGRect bounds; 
@property (assign,nonatomic) CGSize itemSize; 
@property (assign,nonatomic) double interitemSpacing; 
@property (assign,nonatomic) double autoscrollInterval; 
@property (assign,nonatomic) double unitScrollDuration; 
@property (nonatomic,copy,readonly) NSArray * visibleCells; 
@property (assign,nonatomic) CGPoint focusDirection; 
@property (nonatomic,retain) UIView * headerView; 
@property (nonatomic,readonly) double showcaseFactor; 
@property (assign,nonatomic) BOOL shouldScaleOnIdleFocus; 
@property (assign,nonatomic) BOOL showsPageControl; 
@property (assign,nonatomic) double pageControlMargin; 
@property (assign,nonatomic) unsigned long long scrollMode; 
@end

