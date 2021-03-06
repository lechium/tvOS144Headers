/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:32:56 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AVFCore/AVFCore-Structs.h>
#import <AVFCore/AVMetadataGroup.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class AVTimedMetadataGroupInternal, NSArray;

@interface AVTimedMetadataGroup : AVMetadataGroup <NSCopying, NSMutableCopying> {

	AVTimedMetadataGroupInternal* _priv;

}

@property (getter=_timedMetadataGroupInternal,nonatomic,readonly) AVTimedMetadataGroupInternal * timedMetadataGroupInternal; 
@property (nonatomic,readonly) SCD_Struct_AV7 timeRange; 
@property (nonatomic,copy,readonly) NSArray * items; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)dealloc;
-(NSArray *)items;
-(SCD_Struct_AV7)timeRange;
-(id)initWithSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(id)initWithItems:(id)arg1 timeRange:(SCD_Struct_AV7)arg2 ;
-(opaqueCMSampleBufferRef)_createSerializedRepresentationWithFormatDescription:(opaqueCMFormatDescriptionRef)arg1 error:(id*)arg2 ;
-(const opaqueCMFormatDescriptionRef)copyFormatDescription;
-(id)_timedMetadataGroupInternal;
@end

