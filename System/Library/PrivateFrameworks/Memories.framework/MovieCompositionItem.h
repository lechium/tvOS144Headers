/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:31:13 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Memories/Memories-Structs.h>
#import <Memories/CompositionItem.h>

@class AVAsset, AVURLAsset;

@interface MovieCompositionItem : CompositionItem {

	AVAsset* m_asset;
	AVURLAsset* m_audioProxyAsset;

}

@property (nonatomic,retain) AVAsset * asset; 
@property (nonatomic,retain) AVURLAsset * audioProxyAsset; 
-(AVAsset *)asset;
-(void)setAsset:(AVAsset *)arg1 ;
-(BOOL)hasVideoContent;
-(id)videoTrackSegmentsWithDestinationRange:(SCD_Struct_VE9)arg1 ;
-(id)metaDataVideoAssetURL;
-(id)audioTrackSegmentsWithDestinationTime:(SCD_Struct_TV3)arg1 paddedFromTime:(SCD_Struct_TV3)arg2 ;
-(id)audioTrackSegmentsLoopedForDestinationTimeRange:(SCD_Struct_VE9)arg1 ;
-(id)initWithClip:(id)arg1 ;
-(void)setAudioProxyAsset:(AVURLAsset *)arg1 ;
-(AVURLAsset *)audioProxyAsset;
-(id)audioAsset;
-(id)speedRangesForSourceRange:(SCD_Struct_VE9)arg1 destinationRange:(SCD_Struct_VE9)arg2 ;
-(id)audioTrackSegmentsWithDestinationTime:(SCD_Struct_TV3)arg1 ;
-(SCD_Struct_VE9)applySpeed:(SCD_Struct_VE9)arg1 ;
-(id)segmentWithCharacteristic:(id)arg1 sourceRange:(SCD_Struct_VE9)arg2 destinationRange:(SCD_Struct_VE9)arg3 ;
@end

