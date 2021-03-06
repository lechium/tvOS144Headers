/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:32:48 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ATVSlideshow/ATVSlideshow-Structs.h>
#import <ATVSlideshow/MREffect.h>

@class MRTextRenderer, MRImage;

@interface MREffectCalendar : MREffect {

	MRTextRenderer* mTextRenderer;
	MRImage* mTextImage;
	CGSize mStride;
	CGSize mImageSize;
	CGSize mTextSize;
	CGPoint mBaseImagePosition;
	CGPoint mBaseTextPosition;
	unsigned char mFirstDayWeekday;
	unsigned char mNumberOfDays;
	BOOL mTextWasUpdatedSinceLastRendering;

}
-(id)init;
-(void)setAttributes:(id)arg1 ;
-(void)_unload;
-(BOOL)isLoadedForTime:(double)arg1 ;
-(void)_loadForTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(void)renderAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(BOOL)prerenderForTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
@end

