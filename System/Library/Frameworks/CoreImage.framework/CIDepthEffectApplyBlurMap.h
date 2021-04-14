/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:21:03 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreImage/CoreImage-Structs.h>
#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber, NSString;

@interface CIDepthEffectApplyBlurMap : CIFilter {

	CIImage* inputImage;
	CIImage* inputBlurMap;
	CIImage* inputMatteImage;
	CIImage* inputGainMap;
	NSNumber* inputAperture;
	NSNumber* inputLumaNoiseScale;
	NSNumber* inputScale;
	id inputAuxDataMetadata;
	NSString* inputShape;
	NSNumber* inputDraftMode;

}

@property (retain) CIImage * inputImage; 
@property (retain) CIImage * inputBlurMap; 
@property (retain) CIImage * inputMatteImage; 
@property (retain) CIImage * inputGainMap; 
@property (nonatomic,copy) NSNumber * inputAperture; 
@property (nonatomic,copy) NSNumber * inputLumaNoiseScale; 
@property (nonatomic,retain) NSNumber * inputScale; 
@property (nonatomic,retain) id inputAuxDataMetadata; 
@property (nonatomic,retain) NSString * inputShape; 
@property (nonatomic,retain) NSNumber * inputDraftMode; 
+(id)customAttributes;
-(id)outputImage;
-(CIImage *)inputImage;
-(void)setInputImage:(CIImage *)arg1 ;
-(NSNumber *)inputScale;
-(void)setInputScale:(NSNumber *)arg1 ;
-(CIImage *)inputMatteImage;
-(NSNumber *)inputDraftMode;
-(void)setInputDraftMode:(NSNumber *)arg1 ;
-(void)setInputMatteImage:(CIImage *)arg1 ;
-(NSNumber *)inputLumaNoiseScale;
-(void)setInputLumaNoiseScale:(NSNumber *)arg1 ;
-(NSNumber *)inputAperture;
-(void)setInputAperture:(NSNumber *)arg1 ;
-(NSString *)inputShape;
-(void)setInputShape:(NSString *)arg1 ;
-(id)unifiedRenderingOutputImage:(CGImageMetadataRef)arg1 ;
-(CIImage *)inputGainMap;
-(void)setInputGainMap:(CIImage *)arg1 ;
-(id)inputAuxDataMetadata;
-(void)setInputAuxDataMetadata:(id)arg1 ;
-(CIImage *)inputBlurMap;
-(void)setInputBlurMap:(CIImage *)arg1 ;
@end

