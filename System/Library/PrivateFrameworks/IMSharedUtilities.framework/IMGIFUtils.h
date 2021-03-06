/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:27:06 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <IMSharedUtilities/IMSharedUtilities-Structs.h>
@interface IMGIFUtils : NSObject
+(id)logger;
+(BOOL)setOutgoingError:(id*)arg1 errorCode:(long long)arg2 comment:(id)arg3 ;
+(BOOL)readFileProperties:(id*)arg1 fromImageSource:(CGImageSourceRef)arg2 error:(id*)arg3 ;
+(id)gifPropertiesFromFileProperties:(id)arg1 ;
+(BOOL)readGifProperties:(id*)arg1 fromImageSource:(CGImageSourceRef)arg2 error:(id*)arg3 ;
+(id)randomFileName;
+(BOOL)isGifUti:(id)arg1 ;
+(id)setGifProperities:(id)arg1 onFileProperties:(id)arg2 ;
+(id)defaultFileProperties;
+(id)addGifProperties:(id)arg1 toFileProperties:(id)arg2 ;
+(BOOL)readFileProperties:(id*)arg1 fromImageSource:(CGImageSourceRef)arg2 withUpdatedLoopCount:(long long)arg3 error:(id*)arg4 ;
+(BOOL)writeNewFileAtPath:(id)arg1 withProperties:(id)arg2 fromImageSource:(CGImageSourceRef)arg3 error:(id*)arg4 ;
+(id)randomTempFilePath;
+(BOOL)writeLoopCount:(long long)arg1 destinationFilePath:(id)arg2 fromImageSource:(CGImageSourceRef)arg3 error:(id*)arg4 ;
+(id)fileWriter;
+(void)setFileWriter:(id)arg1 ;
+(long long)loopCountFromGifProperties:(id)arg1 ;
+(BOOL)readLoopCount:(long long*)arg1 fromImageSource:(CGImageSourceRef)arg2 error:(id*)arg3 ;
+(BOOL)isGIFFileAtPath:(id)arg1 ;
+(BOOL)writeDefaultPropertiesToDestinationRef:(CGImageDestinationRef)arg1 withOptionalAdditionalGifProperties:(id)arg2 error:(id*)arg3 ;
+(BOOL)copyGifFromPath:(id)arg1 toDestinationPath:(id)arg2 error:(id*)arg3 ;
+(BOOL)writeLoopCount:(long long)arg1 withFileAtPath:(id)arg2 error:(id*)arg3 ;
-(id)logger;
@end

