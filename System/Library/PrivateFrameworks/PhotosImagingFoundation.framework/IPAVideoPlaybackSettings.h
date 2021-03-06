/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:35:12 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosImagingFoundation.framework/PhotosImagingFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosImagingFoundation/PhotosImagingFoundation-Structs.h>
#import <PhotosImagingFoundation/IPAEditDescription.h>

@interface IPAVideoPlaybackSettings : IPAEditDescription {

	SCD_Struct_IP1 _naturalDuration;

}

@property (nonatomic,readonly) SCD_Struct_IP1 naturalDuration;              //@synthesize naturalDuration=_naturalDuration - In the implementation block
+(void)initialize;
+(Class)expectedOperationClass;
+(id)playbackSettingsForAdjustments:(id)arg1 ;
+(Class)operationClassForIdentifier:(id)arg1 ;
+(id)presetifyAdjustmentStack:(id)arg1 ;
-(id)debugDescription;
-(BOOL)isEqualToDescription:(id)arg1 ;
-(id)initWithOperations:(id)arg1 ;
-(SCD_Struct_IP1)naturalDuration;
-(SCD_Struct_IP2)naturalPlaybackRange;
-(SCD_Struct_IP1)scaledTimeFromNaturalTime:(SCD_Struct_IP1)arg1 ;
-(id)descriptionByInsertingOrReplacingOperation:(id)arg1 ;
-(SCD_Struct_IP1)scaledDuration;
-(SCD_Struct_IP2)scaledPlaybackRangeForScaledDuration:(SCD_Struct_IP1)arg1 ;
-(SCD_Struct_IP1)naturalTimeFromScaledTime:(SCD_Struct_IP1)arg1 ;
-(SCD_Struct_IP1)naturalTimeForPosterFrame;
-(id)archivalRepresentation;
-(id)initWithOperations:(id)arg1 naturalDuration:(SCD_Struct_IP1)arg2 ;
-(unsigned long long)sortOrderForOperationWithIdentifier:(id)arg1 ;
-(id)descriptionWithOperations:(id)arg1 ;
-(id)descriptionByAddingOperation:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(id)descriptionByAddingOperation:(id)arg1 ;
-(id)descriptionByReplacingOperation:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(id)operationWithIdentifier:(id)arg1 ;
-(id)posterFrameOperation;
-(id)trimOperation;
-(id)slomoOperation;
@end

