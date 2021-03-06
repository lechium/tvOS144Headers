/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:28:57 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <GameCenterUI/GameCenterUI-Structs.h>
@interface GameLayerPageGrid : NSObject {

	 columnWidth;
	 rowHeight;
	 interColumnSpacing;
	 columnCount;
	 minimumInsets;
	 centeringInsets;
	 representingWidth;
	 columnSizeCategory;
	 contentSizeCategory;
	 horizontalSizeClass;

}

@property (readonly,nonatomic) long long columnCount; 
@property (readonly,nonatomic) UIEdgeInsets centeringInsets; 
-(id)init;
-(long long)columnCount;
-(id)initWithSize:(CGSize)arg1 traitCollection:(id)arg2 ;
-(UIEdgeInsets)centeringInsets;
-(id)initWithContainerSize:(CGSize)arg1 traitCollection:(id)arg2 ;
-(id)initWithWidth:(double)arg1 columnSizeCategory:(long long)arg2 maxColumns:(id)arg3 ;
@end

