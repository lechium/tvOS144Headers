/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:20:59 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreImage/CoreImage-Structs.h>
#import <CoreImage/CIFeature.h>

@class NSArray, NSString;

@interface CITextFeature : CIFeature {

	NSArray* subFeatures;
	NSString* messageString;
	CGPoint topLeft;
	CGPoint topRight;
	CGPoint bottomLeft;
	CGPoint bottomRight;
	CGRect bounds;

}

@property (readonly) NSString * messageString; 
@property (readonly) CGRect bounds; 
@property (readonly) CGPoint topLeft; 
@property (readonly) CGPoint topRight; 
@property (readonly) CGPoint bottomLeft; 
@property (readonly) CGPoint bottomRight; 
@property (readonly) NSArray * subFeatures; 
-(void)dealloc;
-(id)type;
-(CGPoint)topLeft;
-(CGPoint)bottomLeft;
-(CGPoint)bottomRight;
-(CGPoint)topRight;
-(CGRect)bounds;
-(NSString *)messageString;
-(id)initWithBounds:(CGRect)arg1 topLeft:(CGPoint)arg2 topRight:(CGPoint)arg3 bottomLeft:(CGPoint)arg4 bottomRight:(CGPoint)arg5 subFeatures:(id)arg6 messageString:(id)arg7 ;
-(NSArray *)subFeatures;
@end

