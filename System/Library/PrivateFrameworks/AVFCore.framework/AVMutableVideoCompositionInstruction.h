/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:32:53 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AVFCore/AVFCore-Structs.h>
#import <AVFCore/AVVideoCompositionInstruction.h>

@class AVMutableVideoCompositionInstructionInternal, NSArray;

@interface AVMutableVideoCompositionInstruction : AVVideoCompositionInstruction {

	AVMutableVideoCompositionInstructionInternal* _mutableInstruction;

}

@property (assign,nonatomic) SCD_Struct_AV7 timeRange; 
@property (nonatomic,retain) CGColorRef backgroundColor; 
@property (nonatomic,copy) NSArray * layerInstructions; 
@property (assign,nonatomic) BOOL enablePostProcessing; 
+(id)videoCompositionInstruction;
-(CGColorRef)backgroundColor;
-(void)setBackgroundColor:(CGColorRef)arg1 ;
-(void)setTimeRange:(SCD_Struct_AV7)arg1 ;
-(SCD_Struct_AV7)timeRange;
-(void)setLayerInstructions:(NSArray *)arg1 ;
-(BOOL)enablePostProcessing;
-(void)setEnablePostProcessing:(BOOL)arg1 ;
-(NSArray *)layerInstructions;
@end

