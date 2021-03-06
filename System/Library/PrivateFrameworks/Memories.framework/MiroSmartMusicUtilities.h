/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:31:10 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <Memories/Memories-Structs.h>
@interface MiroSmartMusicUtilities : NSObject
+(double)normalizeGainForRendition:(id)arg1 ;
+(id)metadataItemAtTime:(SCD_Struct_TV3)arg1 fromMetadataItems:(id)arg2 findNearest:(BOOL)arg3 ;
+(id)beatMetadataItemForBeatIndex:(long long)arg1 andBarIndex:(long long)arg2 nearBeatMetadataItem:(id)arg3 fromBeatMetadataItems:(id)arg4 ;
+(double)averageBarDurationForFlexAudioClipInSeconds:(id)arg1 ;
+(id)_peakAndLoudnessForRendition:(id)arg1 ;
+(id)metadataItemAtTime:(SCD_Struct_TV3)arg1 fromMetadataItems:(id)arg2 ;
+(SCD_Struct_TV3)averageBarDurationForFlexAudioClip:(id)arg1 ;
+(SCD_Struct_TV3)durationOfOutroForFlexAudioClip:(id)arg1 ;
+(SCD_Struct_TV3)durationOfIntroForFlexAudioClip:(id)arg1 ;
@end

