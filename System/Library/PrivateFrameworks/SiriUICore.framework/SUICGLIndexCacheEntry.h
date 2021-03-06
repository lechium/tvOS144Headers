/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:28:51 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/SiriUICore.framework/SiriUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface SUICGLIndexCacheEntry : NSObject {

	unsigned _numAuraIndices;
	unsigned _numAuraIndicesCulled;
	unsigned _numWaveIndices;
	unsigned* _gl_indices;

}

@property (assign,nonatomic) unsigned numAuraIndices;                    //@synthesize numAuraIndices=_numAuraIndices - In the implementation block
@property (assign,nonatomic) unsigned numAuraIndicesCulled;              //@synthesize numAuraIndicesCulled=_numAuraIndicesCulled - In the implementation block
@property (assign,nonatomic) unsigned numWaveIndices;                    //@synthesize numWaveIndices=_numWaveIndices - In the implementation block
@property (assign,nonatomic) unsigned* gl_indices;                       //@synthesize gl_indices=_gl_indices - In the implementation block
-(void)dealloc;
-(unsigned)numAuraIndices;
-(void)setNumAuraIndices:(unsigned)arg1 ;
-(unsigned)numAuraIndicesCulled;
-(void)setNumAuraIndicesCulled:(unsigned)arg1 ;
-(unsigned)numWaveIndices;
-(void)setNumWaveIndices:(unsigned)arg1 ;
-(unsigned*)gl_indices;
-(void)setGl_indices:(unsigned*)arg1 ;
@end

