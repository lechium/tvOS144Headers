/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:34:39 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/MediaConversionService.framework/MediaConversionService
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaConversionService/PAMediaConversionServiceImageMetadataPolicy.h>

@interface PAMediaConversionServiceDefaultImageMetadataPolicy : PAMediaConversionServiceImageMetadataPolicy {

	float _lossyCompressionQuality;

}

@property (assign) float lossyCompressionQuality;              //@synthesize lossyCompressionQuality=_lossyCompressionQuality - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)standardPolicy;
+(id)policyWithLossyCompressionQuality:(float)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(float)lossyCompressionQuality;
-(void)setLossyCompressionQuality:(float)arg1 ;
-(id)processMetadata:(id)arg1 ;
-(BOOL)metadataNeedsProcessing:(id)arg1 ;
-(id)initWithLossyCompressionQuality:(float)arg1 ;
@end

