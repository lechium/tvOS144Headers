/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:31:13 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Memories/Memories-Structs.h>
#import <Memories/MovieCompositionItem.h>

@interface KenBurnsCompositionItem : MovieCompositionItem
-(BOOL)hasVideoContent;
-(id)videoTrackSegmentsWithDestinationRange:(SCD_Struct_VE9)arg1 ;
-(id)audioTrackSegmentsWithDestinationTime:(SCD_Struct_TV3)arg1 paddedFromTime:(SCD_Struct_TV3)arg2 ;
-(id)audioTrackSegmentsLoopedForDestinationTimeRange:(SCD_Struct_VE9)arg1 ;
-(id)initWithClip:(id)arg1 ;
-(id)audioTrackSegmentsWithDestinationTime:(SCD_Struct_TV3)arg1 ;
@end

