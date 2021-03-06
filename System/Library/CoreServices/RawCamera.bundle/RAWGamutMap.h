/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:30:10 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/CoreServices/RawCamera.bundle/RawCamera
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <RawCamera/RAWFilter.h>

@class CIImage, NSNumber;

@interface RAWGamutMap : RAWFilter {

	CIImage* inputImage;
	id inputColorSpace;
	NSNumber* inputShouldWarn;
	NSNumber* inputVersion;
	NSNumber* inputGamutMapMax;

}
+(id)customAttributes;
-(id)customAttributes;
-(id)outputImage;
@end

