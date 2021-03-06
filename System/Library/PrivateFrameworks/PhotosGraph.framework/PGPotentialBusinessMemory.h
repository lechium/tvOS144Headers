/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:34:59 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosGraph/PGPotentialMemory.h>

@class NSMutableSet, PGGraphBusinessNode, NSString;

@interface PGPotentialBusinessMemory : PGPotentialMemory {

	NSMutableSet* _mutableMomentNodes;
	PGGraphBusinessNode* _businessNode;
	long long _year;

}

@property (readonly) PGGraphBusinessNode * businessNode;              //@synthesize businessNode=_businessNode - In the implementation block
@property (readonly) long long year;                                  //@synthesize year=_year - In the implementation block
@property (readonly) NSString * business; 
-(long long)year;
-(NSString *)business;
-(id)initWithBusinessNode:(id)arg1 year:(long long)arg2 ;
-(void)addMomentNode:(id)arg1 ;
-(PGGraphBusinessNode *)businessNode;
@end

