/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:35:03 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSArray, NSDate;

@interface PGPotentialRecentSocialGroupCentricSuggestion : NSObject {

	float _weight;
	NSArray* _personLocalIdentifiers;
	NSArray* _personWeights;
	NSArray* _momentLocalIdentifiers;
	NSArray* _assets;
	NSDate* _notSeenSinceDate;

}

@property (nonatomic,readonly) NSArray * personLocalIdentifiers;              //@synthesize personLocalIdentifiers=_personLocalIdentifiers - In the implementation block
@property (nonatomic,readonly) NSArray * personWeights;                       //@synthesize personWeights=_personWeights - In the implementation block
@property (nonatomic,readonly) NSArray * momentLocalIdentifiers;              //@synthesize momentLocalIdentifiers=_momentLocalIdentifiers - In the implementation block
@property (nonatomic,readonly) float weight;                                  //@synthesize weight=_weight - In the implementation block
@property (nonatomic,retain) NSArray * assets;                                //@synthesize assets=_assets - In the implementation block
@property (nonatomic,retain) NSDate * notSeenSinceDate;                       //@synthesize notSeenSinceDate=_notSeenSinceDate - In the implementation block
-(float)weight;
-(NSArray *)assets;
-(void)setAssets:(NSArray *)arg1 ;
-(NSArray *)momentLocalIdentifiers;
-(NSArray *)personLocalIdentifiers;
-(id)initWithPersonLocalIdentifiers:(id)arg1 personWeights:(id)arg2 momentLocalIdentifiers:(id)arg3 weight:(float)arg4 notSeenSinceDate:(id)arg5 ;
-(NSArray *)personWeights;
-(NSDate *)notSeenSinceDate;
-(void)setNotSeenSinceDate:(NSDate *)arg1 ;
@end
