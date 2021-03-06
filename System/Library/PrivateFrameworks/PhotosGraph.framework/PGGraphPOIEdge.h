/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:35:04 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosGraph/PGGraphOptimizedEdge.h>

@interface PGGraphPOIEdge : PGGraphOptimizedEdge {

	unsigned _poiIsImproved : 1;
	unsigned _poiIsSpecial : 1;
	float _weight;

}

@property (assign,nonatomic) float weight;                     //@synthesize weight=_weight - In the implementation block
@property (assign,nonatomic) BOOL poiIsImproved;               //@synthesize poiIsImproved=_poiIsImproved - In the implementation block
@property (nonatomic,readonly) BOOL poiIsSpecial;              //@synthesize poiIsSpecial=_poiIsSpecial - In the implementation block
+(id)filter;
-(unsigned short)domain;
-(id)label;
-(float)weight;
-(void)setWeight:(float)arg1 ;
-(BOOL)hasProperties:(id)arg1 ;
-(id)propertyDictionary;
-(void)setLocalProperties:(id)arg1 ;
-(id)initWithLabel:(id)arg1 sourceNode:(id)arg2 targetNode:(id)arg3 domain:(unsigned short)arg4 weight:(float)arg5 ;
-(id)edgeDescription;
-(id)initFromMomentNode:(id)arg1 toPOINode:(id)arg2 weight:(float)arg3 ;
-(void)setPoiIsImproved:(BOOL)arg1 ;
-(BOOL)poiIsImproved;
-(BOOL)poiIsSpecial;
@end

