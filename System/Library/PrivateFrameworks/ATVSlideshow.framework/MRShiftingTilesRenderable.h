/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:32:48 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <ATVSlideshow/ATVSlideshow-Structs.h>
@class MRImage, MRCroppingSprite;

@interface MRShiftingTilesRenderable : NSObject {

	MRImage* slide;
	MRCroppingSprite* sprite;
	CGPoint position;
	CGSize size;
	BOOL isBreak;

}

@property (nonatomic,retain) MRImage * slide; 
@property (nonatomic,retain) MRCroppingSprite * sprite; 
-(void)dealloc;
-(void)setSlide:(MRImage *)arg1 ;
-(MRImage *)slide;
-(MRCroppingSprite *)sprite;
-(void)setSprite:(MRCroppingSprite *)arg1 ;
@end

