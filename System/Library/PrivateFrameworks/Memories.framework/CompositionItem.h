/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:31:13 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <Memories/Memories-Structs.h>
@class KonaClip;

@interface CompositionItem : NSObject {

	BOOL m_isFinalClip;
	BOOL m_isMuted;
	BOOL m_isFreezeFrame;
	SCD_Struct_VE9 m_sourceTimeRange;
	SCD_Struct_TV3 m_destinationDuration;
	SCD_Struct_TV3 m_leftTransitionExtension;
	SCD_Struct_TV3 m_rightTransitionExtension;
	SCD_Struct_TV3 m_audioStartOffset;
	SCD_Struct_TV3 m_audioEndOffset;
	float m_speed;
	KonaClip* _clip;

}

@property (nonatomic,retain) KonaClip * clip;                                      //@synthesize clip=_clip - In the implementation block
@property (assign,nonatomic) BOOL isFinalClip; 
@property (assign,nonatomic) SCD_Struct_VE9 sourceTimeRange; 
@property (assign,nonatomic) SCD_Struct_TV3 destinationDuration; 
@property (assign,nonatomic) SCD_Struct_TV3 leftTransitionExtension; 
@property (assign,nonatomic) SCD_Struct_TV3 rightTransitionExtension; 
@property (assign,nonatomic) SCD_Struct_TV3 audioStartOffset; 
@property (assign,nonatomic) SCD_Struct_TV3 audioEndOffset; 
@property (nonatomic,readonly) BOOL hasVideoContent; 
@property (nonatomic,readonly) BOOL isMuted; 
@property (nonatomic,readonly) BOOL isFreezeFrame; 
@property (assign,nonatomic) float speed; 
+(id)compositionItemWithClip:(id)arg1 ;
-(id)debugDescription;
-(id)description;
-(void)dealloc;
-(void)setSpeed:(float)arg1 ;
-(float)speed;
-(BOOL)isMuted;
-(KonaClip *)clip;
-(void)setClip:(KonaClip *)arg1 ;
-(BOOL)isFreezeFrame;
-(SCD_Struct_VE9)sourceTimeRange;
-(void)setAudioEndOffset:(SCD_Struct_TV3)arg1 ;
-(void)setAudioStartOffset:(SCD_Struct_TV3)arg1 ;
-(SCD_Struct_TV3)audioStartOffset;
-(SCD_Struct_TV3)audioEndOffset;
-(BOOL)hasVideoContent;
-(SCD_Struct_TV3)destinationDuration;
-(id)videoTrackSegmentsWithDestinationRange:(SCD_Struct_VE9)arg1 ;
-(id)metaDataVideoAssetURL;
-(BOOL)isFinalClip;
-(id)audioTrackSegmentsWithDestinationTime:(SCD_Struct_TV3)arg1 paddedFromTime:(SCD_Struct_TV3)arg2 ;
-(id)audioTrackSegmentsLoopedForDestinationTimeRange:(SCD_Struct_VE9)arg1 ;
-(id)initWithClip:(id)arg1 ;
-(id)emptyTrackSegmentWithDestinationRange:(SCD_Struct_VE9)arg1 ;
-(id)emptyVideoTrackSegmentsWithDestinationRange:(SCD_Struct_VE9)arg1 ;
-(id)emptyAudioTrackSegmentsWithDestinationTime:(SCD_Struct_TV3)arg1 ;
-(void)setSourceTimeRange:(SCD_Struct_VE9)arg1 ;
-(void)setDestinationDuration:(SCD_Struct_TV3)arg1 ;
-(SCD_Struct_TV3)leftTransitionExtension;
-(void)setLeftTransitionExtension:(SCD_Struct_TV3)arg1 ;
-(SCD_Struct_TV3)rightTransitionExtension;
-(void)setRightTransitionExtension:(SCD_Struct_TV3)arg1 ;
-(void)setIsFinalClip:(BOOL)arg1 ;
-(id)audioTrackSegmentsWithDestinationTime:(SCD_Struct_TV3)arg1 ;
-(id)emptyTrackSegmentWithDestinationTime:(SCD_Struct_TV3)arg1 ;
@end

