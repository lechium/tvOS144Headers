/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:23:49 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosFormats.framework/PhotosFormats
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <PhotosFormats/PhotosFormats-Structs.h>
@interface PFVideoMetadata : NSObject
+(id)metadataItemValueFromAsset:(id)arg1 withKey:(id)arg2 keySpace:(id)arg3 ;
+(id)firstVideoTrackFormatDebugDescriptionForAsset:(id)arg1 ;
+(BOOL)hasValidMetadataForLoopingVideoAsset:(id)arg1 ;
+(id)quickTimeMetadataItemValueFromAsset:(id)arg1 withKey:(id)arg2 ;
+(id)quickTimeMetadataItemsWithKey:(id)arg1 value:(id)arg2 ;
+(BOOL)readMetadataType:(unsigned char)arg1 fromFileURL:(id)arg2 value:(id*)arg3 error:(id*)arg4 ;
+(BOOL)readMetadataType:(unsigned char)arg1 fromAVAsset:(id)arg2 value:(id*)arg3 error:(id*)arg4 ;
+(id)metadataItemsWithMetadataType:(unsigned char)arg1 value:(id)arg2 error:(id*)arg3 ;
+(id)arrayByRemovingMetadataItemOfType:(unsigned char)arg1 fromArray:(id)arg2 error:(id*)arg3 ;
+(BOOL)videoAssetIsDecodable:(id)arg1 ;
+(BOOL)videoAssetIsPlayable:(id)arg1 ;
+(BOOL)videoAssetIsHighDynamicRange:(id)arg1 ;
+(BOOL)videoTrackFormatDescriptionHasDolby8_4Metadata:(opaqueCMFormatDescriptionRef)arg1 ;
+(BOOL)videoTrackFormatDescriptionIsHighDynamicRange:(opaqueCMFormatDescriptionRef)arg1 ;
+(void)enumerateVideoTrackFormatDescriptionsInAsset:(id)arg1 withBlock:(/*^block*/id)arg2 ;
+(unsigned)videoCodecFourCharCodeNumberForAVAsset:(id)arg1 ;
@end

