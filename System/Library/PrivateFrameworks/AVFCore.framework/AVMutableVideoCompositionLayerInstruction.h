/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:32:53 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AVFCore/AVFCore-Structs.h>
#import <AVFCore/AVVideoCompositionLayerInstruction.h>

@class AVMutableVideoCompositionLayerInstructionInternal;

@interface AVMutableVideoCompositionLayerInstruction : AVVideoCompositionLayerInstruction {

	AVMutableVideoCompositionLayerInstructionInternal* _mutableLayerInstruction;

}

@property (assign,nonatomic) int trackID; 
+(id)videoCompositionLayerInstructionWithAssetTrack:(id)arg1 ;
+(id)videoCompositionLayerInstruction;
-(int)trackID;
-(void)setTrackID:(int)arg1 ;
-(void)setTransform:(CGAffineTransform)arg1 atTime:(SCD_Struct_AV6)arg2 ;
-(void)setOpacity:(float)arg1 atTime:(SCD_Struct_AV6)arg2 ;
-(void)setOpacityRampFromStartOpacity:(float)arg1 toEndOpacity:(float)arg2 timeRange:(SCD_Struct_AV7)arg3 ;
-(void)setTransformRampFromStartTransform:(CGAffineTransform)arg1 toEndTransform:(CGAffineTransform)arg2 timeRange:(SCD_Struct_AV7)arg3 ;
-(void)setCropRectangleRampFromStartCropRectangle:(CGRect)arg1 toEndCropRectangle:(CGRect)arg2 timeRange:(SCD_Struct_AV7)arg3 ;
-(void)setCropRectangle:(CGRect)arg1 atTime:(SCD_Struct_AV6)arg2 ;
@end
