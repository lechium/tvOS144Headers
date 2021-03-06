/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:27:58 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol VCPDistanceDescriptorProtocol
@required
+(int)preferredPixelFormat;
+(BOOL)usePHAssetData;
+(id)descriptorWithImage:(CVBufferRef)arg1;
+(id)descriptorWithData:(id)arg1;
-(id)serialize;
-(int)computeDistance:(float*)arg1 toDescriptor:(id)arg2;

@end

