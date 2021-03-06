/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:24:49 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/Vision.framework/Vision
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Vision/Vision-Structs.h>
#import <Vision/VNImageBasedRequestConfiguration.h>

@class VN6Ac6Cyl5O5oK19HboyMBR;

@interface VN5xRo0q9Wz9Io02mmbtoLsConfiguration : VNImageBasedRequestConfiguration {

	VN6Ac6Cyl5O5oK19HboyMBR* inputSignatureprint;
	unsigned long long _imageSignatureprintType;
	unsigned long long _imageSignatureHashType;
	VN6Ac6Cyl5O5oK19HboyMBR* _inputSignatureprint;

}

@property (assign,nonatomic) unsigned long long imageSignatureprintType;               //@synthesize imageSignatureprintType=_imageSignatureprintType - In the implementation block
@property (assign,nonatomic) unsigned long long imageSignatureHashType;                //@synthesize imageSignatureHashType=_imageSignatureHashType - In the implementation block
@property (nonatomic,copy) VN6Ac6Cyl5O5oK19HboyMBR * inputSignatureprint;              //@synthesize inputSignatureprint=_inputSignatureprint - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(VN6Ac6Cyl5O5oK19HboyMBR *)inputSignatureprint;
-(id)initWithRequestClass:(Class)arg1 ;
-(unsigned long long)imageSignatureprintType;
-(void)setImageSignatureprintType:(unsigned long long)arg1 ;
-(void)setInputSignatureprint:(VN6Ac6Cyl5O5oK19HboyMBR *)arg1 ;
-(unsigned long long)imageSignatureHashType;
-(void)setImageSignatureHashType:(unsigned long long)arg1 ;
@end

