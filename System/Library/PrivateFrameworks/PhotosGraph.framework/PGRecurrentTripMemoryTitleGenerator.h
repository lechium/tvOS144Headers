/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:35:09 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosGraph/PGTitleGenerator.h>

@class NSSet;

@interface PGRecurrentTripMemoryTitleGenerator : PGTitleGenerator {

	NSSet* _locationNodes;

}

@property (nonatomic,retain) NSSet * locationNodes;              //@synthesize locationNodes=_locationNodes - In the implementation block
-(id)_locationTitle;
-(void)_generateTitleAndSubtitleWithResult:(/*^block*/id)arg1 ;
-(NSSet *)locationNodes;
-(void)setLocationNodes:(NSSet *)arg1 ;
-(id)_timeTitle;
-(id)initWithLocationNodes:(id)arg1 ;
@end

