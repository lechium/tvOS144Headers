/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:35:08 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSArray;

@interface PGTitleSpecCollection : NSObject {

	NSArray* _specPools;

}

@property (nonatomic,readonly) NSArray * specPools;              //@synthesize specPools=_specPools - In the implementation block
+(id)collectionWithSpecPools:(id)arg1 ;
-(id)description;
-(id)initWithSpecPools:(id)arg1 ;
-(id)allPossibleTitlesWithMomentNodes:(id)arg1 ;
-(id)allPossibleTitlesWithHighlightMomentNodes:(id)arg1 ;
-(id)_allPossibleTitlesWithMomentNodes:(id)arg1 forHighlight:(BOOL)arg2 ;
-(NSArray *)specPools;
@end

