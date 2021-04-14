/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:59 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXHUDAbstractVisualizationView.h>

@class UILabel, PXHUDBoxedValueVisualization;

@interface PXHUDBoxedValueVisualizationView : PXHUDAbstractVisualizationView {

	UILabel* _titleAndValueLabel;

}

@property (nonatomic,retain) PXHUDBoxedValueVisualization * visualization; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)visualizationDidUpdate;
-(void)_updateTitleAndValueLabel;
@end

