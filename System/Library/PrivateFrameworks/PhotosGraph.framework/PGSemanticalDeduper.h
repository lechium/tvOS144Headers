/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:35:06 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosGraph/PGDeduper.h>

@class VNSequenceRequestHandler, VNCreateSceneprintRequest;

@interface PGSemanticalDeduper : PGDeduper {

	VNSequenceRequestHandler* _sequenceRequestHandler;
	VNCreateSceneprintRequest* _sceneprintRequest;
	BOOL _usesAdaptiveSimilarStacking;

}

@property (assign,nonatomic) BOOL usesAdaptiveSimilarStacking;              //@synthesize usesAdaptiveSimilarStacking=_usesAdaptiveSimilarStacking - In the implementation block
-(void)dealloc;
-(void)cleanup;
-(id)sceneprintByItemIdentifierWithItems:(id)arg1 ;
-(id)deduplicatedItemsWithItems:(id)arg1 debugInfo:(id)arg2 progressBlock:(/*^block*/id)arg3 ;
-(id)itemsNeedingSceneprintInTimeClusters:(id)arg1 ;
-(BOOL)usesAdaptiveSimilarStacking;
-(void)setUsesAdaptiveSimilarStacking:(BOOL)arg1 ;
@end

