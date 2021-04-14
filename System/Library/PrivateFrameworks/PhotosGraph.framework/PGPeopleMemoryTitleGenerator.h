/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:34:59 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosGraph/PGTitleGenerator.h>

@class NSSet;

@interface PGPeopleMemoryTitleGenerator : PGTitleGenerator {

	unsigned long long _type;
	NSSet* _personNodes;

}

@property (nonatomic,readonly) unsigned long long type;              //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSSet * personNodes;                  //@synthesize personNodes=_personNodes - In the implementation block
-(unsigned long long)type;
-(void)_generateTitleAndSubtitleWithResult:(/*^block*/id)arg1 ;
-(id)initWithMomentNodes:(id)arg1 personNodes:(id)arg2 type:(unsigned long long)arg3 ;
-(id)_titleForPeople;
-(id)_titleForSocialGroup;
-(id)_titleForEarlyMoments;
-(id)_timeTitleForEarlyMoments;
-(BOOL)_person:(id)arg1 isPresentInAnyMomentOfMomentNodes:(id)arg2 ;
-(id)_birthdayTitleForPeople;
-(id)_timeTitleForPeople;
-(BOOL)_useSplitTimeTitlesIfNeeded;
-(NSSet *)personNodes;
@end
