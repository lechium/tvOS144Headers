/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:31:07 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/IMTranscoderAgent.framework/IMTranscoderAgent
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <IMTranscoderAgent/IMTranscoderAgent-Structs.h>
#import <IMTranscoderAgent/IMTranscoderImageSizeEstimator.h>

@interface IMTranscoderImageFigPhotoSizeEstimator : IMTranscoderImageSizeEstimator {

	FigPhotoDecompressionContainerRef _container;

}
-(void)dealloc;
-(unsigned long long)estimatedSizeForOutputUTI:(id)arg1 maximumDimension:(long long)arg2 quality:(double)arg3 ;
-(id)initWithURL:(id)arg1 uti:(id)arg2 imageSource:(CGImageSourceRef)arg3 ;
-(unsigned long long)optimizedEstimatedSizeForOutputUTI:(id)arg1 maximumDimension:(long long)arg2 quality:(double)arg3 ;
@end
