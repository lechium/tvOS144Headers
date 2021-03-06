/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:29:43 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ProVideo/ProVideo-Structs.h>
#import <ProVideo/PVRendererBase.h>

@interface PVEffectPreviewGenerator : PVRendererBase
+(void)cleanupCaches;
+(id)sharedGenerator;
-(id)initWithOptions:(id)arg1 ;
-(void)generatePreviewForEffect:(id)arg1 atTime:(SCD_Struct_PV21)arg2 inputImage:(CGImageRef)arg3 outputSize:(CGSize)arg4 waitForFinish:(BOOL)arg5 completionHandler:(/*^block*/id)arg6 ;
-(void)cancelAllPendingPreviewRequests;
@end

