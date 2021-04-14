/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:27:57 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <VideoProcessing/VCPImageAnalyzer.h>

@interface VCPBlurAnalyzer : VCPImageAnalyzer
-(int)computeSharpnessScore:(float*)arg1 forObjects:(id)arg2 inImage:(CVBufferRef)arg3 ;
-(float)computeRegionSharpness:(char*)arg1 width:(int)arg2 height:(int)arg3 stride:(long long)arg4 ;
@end
