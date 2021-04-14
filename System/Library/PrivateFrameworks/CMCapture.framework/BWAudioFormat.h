/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:33:44 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/BWFormat.h>

@class NSDictionary;

@interface BWAudioFormat : BWFormat {

	opaqueCMFormatDescriptionRef _audioFormatDescription;
	NSDictionary* _avAudioSettings;

}

@property (readonly) opaqueCMFormatDescriptionRef audioFormatDescription; 
@property (readonly) NSDictionary * audioCompressionSBPOptions; 
+(void)initialize;
+(BOOL)compressionOptionTrimSampleBufferDurationsIsRequiredForAudioSettings:(id)arg1 ;
+(id)formatWithAudioFormatDescription:(opaqueCMFormatDescriptionRef)arg1 ;
+(id)formatForAVAudioSettings:(id)arg1 inputFormat:(id)arg2 ;
-(id)debugDescription;
-(id)description;
-(void)dealloc;
-(opaqueCMFormatDescriptionRef)formatDescription;
-(unsigned)mediaType;
-(opaqueCMFormatDescriptionRef)audioFormatDescription;
-(id)_initWithAudioFormatDescription:(opaqueCMFormatDescriptionRef)arg1 ;
-(id)_initForAVAudioSettings:(id)arg1 inputFormat:(id)arg2 ;
-(NSDictionary *)audioCompressionSBPOptions;
@end
