/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:20:57 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <CoreImage/CoreImage-Structs.h>
@interface AutoCropper : NSObject {

	BOOL shouldFavorBottom;
	BOOL shouldFavorTop;
	CGSize originalImageSize;

}

@property (assign,nonatomic) BOOL shouldFavorBottom; 
@property (assign,nonatomic) BOOL shouldFavorTop; 
@property (assign,nonatomic) CGSize originalImageSize; 
-(id)init;
-(void)setShouldFavorTop:(BOOL)arg1 ;
-(void)setShouldFavorBottom:(BOOL)arg1 ;
-(CGRect)rectContainingRect:(CGRect)arg1 andOtherRect:(CGRect)arg2 ;
-(CGRect)rectWithSize:(CGSize)arg1 andPoint:(CGPoint)arg2 inPosition:(int)arg3 fromOriginalSize:(CGSize)arg4 ;
-(CGRect)scaleRect:(CGRect)arg1 toFitSize:(CGSize)arg2 withAnchorPoint:(CGPoint)arg3 ;
-(int)determineBestPositionWithinSize:(CGSize)arg1 forImportantRect:(CGRect)arg2 restrictRect:(CGRect)arg3 ;
-(CGRect)scaleRect:(CGRect)arg1 byScale:(double)arg2 ;
-(CGRect)expandRect:(CGRect)arg1 toContainRect:(CGRect)arg2 ;
-(CGRect)computeClippingWithinSize:(CGSize)arg1 andImportantRect:(CGRect)arg2 ;
-(int)getRatioOfSize:(CGSize)arg1 ;
-(id)clusterRects:(id)arg1 ;
-(CGRect)computeClippingWithinSize:(CGSize)arg1 andImportantRects:(id)arg2 ;
-(CGRect)computeClippingWithinSize:(CGSize)arg1 forImportantRect:(CGRect)arg2 andType:(int)arg3 restrictRect:(CGRect)arg4 ;
-(CGRect)computeClippingWithinSize:(CGSize)arg1 forMultipleRects:(id)arg2 ;
-(BOOL)shouldFavorTop;
-(BOOL)shouldFavorBottom;
-(CGSize)originalImageSize;
-(void)setOriginalImageSize:(CGSize)arg1 ;
@end

