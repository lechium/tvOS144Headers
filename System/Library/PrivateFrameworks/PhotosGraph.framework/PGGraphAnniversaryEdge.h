/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:35:05 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosGraph/PGGraphPropertylessEdge.h>

@interface PGGraphAnniversaryEdge : PGGraphPropertylessEdge {

	float _weight;

}

@property (assign,nonatomic) float weight;              //@synthesize weight=_weight - In the implementation block
-(unsigned short)domain;
-(id)label;
-(float)weight;
-(void)setWeight:(float)arg1 ;
-(id)initWithLabel:(id)arg1 sourceNode:(id)arg2 targetNode:(id)arg3 domain:(unsigned short)arg4 weight:(float)arg5 ;
-(id)edgeDescription;
-(id)initFromMomentNode:(id)arg1 toPersonNode:(id)arg2 weight:(float)arg3 ;
@end

